#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include "hostent.h"
#define PORT 5000


int main() {    

    int socket_client;
    hostent host;

    socket_client = socket(AF_INET, SOCK_STREAM, 0);

    if(socket_client == -1){
        fprintf(stderr, "Erreur de creation de la socket");
        exit(-1);
    }

    host = gethostbyname("");

    if (host == -1)
    {
        fprintf(stderr, "Erreur de l'allocation de l'adresse de l'host");
    }
    

    return 0;
}