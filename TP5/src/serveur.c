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

    recv(client_socket, buffer, BUFFER_SIZE, 0
