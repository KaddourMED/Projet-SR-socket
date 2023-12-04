CC=clang -Wall

PROGRAMMES=serveur client

all: $(PROGRAMMES)

######################################################################
#                       Règles de compilation                        #
######################################################################

%.o: %.c
	$(CC) -c $<

client.o: client.c hostent.h

serveur.o: serveur.c sockaddr_in.h

######################################################################
#                       Règles d'édition de liens                    #
######################################################################

client: client.o hostent.o
	$(CC) $^ -o $@

serveur: serveur.o sockaddr_in.o
	$(CC) $^ -o $@

clean:
	rm -f $(PROGRAMMES) *.o

