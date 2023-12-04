
typedef struct hostent
{
    char* h_name;           /* nom de la machine */
    char** h_aliases;       /* liste d'aliases */
    int h_addrtype;         /* AF_INET */
    int h_length;           /* longueur de l'adresse (4 octets) */
    char** h_addr_list;     /* liste d'adresses */
}hostent;
