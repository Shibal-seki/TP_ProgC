#include "serveur.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define PORT 12345
#define BUFFER_SIZE 1024

int serveur_socket;

void signal_handler(int signum) {
    printf("\nSignal Ctrl+C capturé. Sortie du programme.\n");
    close(serveur_socket);
    exit(0);
}

void recois_envoie_message(int client_socket) {
    char buffer[BUFFER_SIZE] = {0};

    recv(client_socket, buffer, BUFFER_SIZE, 0);
    printf("Message reçu: %s\n", buffer);

    printf("Entrez votre réponse au client: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    buffer[strcspn(buffer, "\n")] = 0;

    send(client_socket, buffer, strlen(buffer), 0);
}

int main() {
    int client_socket;
    struct sockaddr_in adresse;

    signal(SIGINT, signal_handler);

    serveur_socket = socket(AF_INET, SOCK_STREAM, 0);
    adresse.sin_family = AF_INET;
    adresse.sin_addr.s_addr = INADDR_ANY;
    adresse.sin_port = htons(PORT);

    bind(serveur_socket, (struct sockaddr *)&adresse, sizeof(adresse));
    listen(serveur_socket, 1);

    printf("Serveur en attente de connexions...\n");

    client_socket = accept(serveur_socket, NULL, NULL);
    printf("Client connecté.\n");

    recois_envoie_message(client_socket);

    close(client_socket);
    close(serveur_socket);

    return 0;
}
