#include <iostream>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>

int main(int argc, char const * argv[])
 {
  if (argc > 2)
   {
    char * ip;
    int client_socket, numbytes, puerto;
    char buffer[100];
    puerto = atoi(argv[2]);
    ip = argv[1];

    struct sockadrr_in server;

    if(inet_pton( AF_INET, argv[1], &server.sin_addr) <= 0 )
     {
       perror("La ip %s no es valida\n", ip);
       return -1;
     }
     printf("Abriendo el socket\n");

     if((client_socket = socket(AF_INET, SOCK_STREAM, 0)) == -1)
      {
        perror("No pude abrir el socket\n");
        return -2;
      }
      server.sin_family = AF_INET;
      server.sin_port = htons(puerto);
      bzero(&(server.sin_zero), 8);
      printf("Conectando a %s:%s\n", argv[1], argv[2]);

      if( conect( client_socket, ( struct sockaddr *) &serer, sizeof( struct sockaddr)) == -1)
       {
         perror("No pude conectarme al servidor\n");
         return -3;
       }
       printf("Recibiendo....\n");
       if((numbytes = recv(client_socket, buf, 100, 0) ) == -1)
        {
          printf("Error en la lectura\n");
          return -4;
        }
        buf[numbytes] = '/0';
        printf("El servidor envio el mensaje '%s'\n", buf);
        shutdown(cliente_socket, 2);
   }
   else
    {
      printf("Por favor, indique el puerto\n");
      return -5;
    }
 }
