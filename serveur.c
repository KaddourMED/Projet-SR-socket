#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "sockaddr_in.h"


int main() {    

    int serveur_socket;
    int varbind;
    int err;

    sockaddr_in s1;   //s1: adresse serveur
    int l1 = sizeof(s1);

    serveur_socket = socket(AF_INET, SOCK_STREAM, 0); //descripteur

    if (serveur_socket == -1)
    {
        fprintf(stderr, "Erreur de la creation");
        exit(-1);
    }

    varbind = bind(serveur_socket, (struct sockaddr *) &s1, l1);

    if(varbind == -1){
        fprintf(stderr, "Erreur du bind");
        exit(-1);    
    }

    err = listen(serveur_socket, 3);

    if (err == -1)
    {
        fprintf(stderr, "Erreur du listen");
        exit(-1); 
    }
    
    
    return 0;
}