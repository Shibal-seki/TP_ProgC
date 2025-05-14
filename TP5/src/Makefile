CC=gcc
CFLAGS=-Wall

all: serveur client

serveur: serveur.c
	$(CC) $(CFLAGS) serveur.c -o serveur

client: client.c
	$(CC) $(CFLAGS) client.c -o client

clean:
	rm -f serveur client
