#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct datos_p
{
    char nombre[50] ;
    int edad ;
    char telefono[11];
    char correo [50];
    float promedio ;
     struct datos_p *sig;
     struct datos_p *atras;
    }nodo;
    nodo* primero=NULL;
    nodo* ultimo=NULL;
     struct datos_p *inicio,*fin,*actual;
     void crear_nodo()
     {
         actual=malloc(sizeof(struct datos_p));
         actual->sig=NULL;
     }
     void llenar_nodo(struct datos_p *nodo)
     {
         if (nodo!=NULL)

     {
         fflush(stdin);
         printf("\n\nNombre: ");
         gets(nodo->nombre);
         printf("Edad: ");
         scanf("%d", &nodo->edad);
         fflush(stdin);
         printf("Correo: ");
         gets(nodo->correo);
         printf("Telefono: ");
         gets(nodo->telefono);
         printf("Promedio: ");
         scanf("%f", &nodo->promedio);
     }
     else
     {
         printf("\n\nNo se puede llenar nodo\n\n");
         getch();
     }
     }
   void mostrar_nodo(struct datos_p *nodo)
   {
       if (nodo!=NULL)
       {
       printf ("\n\nNombre: %s",nodo->nombre);
       printf ("\nEdad: %d", nodo->edad);
       printf ("\nCorreo: %s",nodo->correo);
       printf ("\nTelefono: %s", nodo->telefono);
       printf ("\nPromedio: %f", nodo->promedio);
       getch();

       } else
       {
           printf("\n\nNodo nulo\n\n");
           getch();

       }
   }
       void inicializar_lista()
       {
           inicio=NULL;
           fin=NULL;
       }
       void agregar_nodo(struct datos_p*nodo)
       { if (inicio==NULL){
           inicio=nodo;
           fin=nodo;
        }
       else {
       fin->sig=nodo;
       fin=nodo;
       }
        }
        void mostrar_lista()
        {
            struct datos_p*nodo;

            if (inicio!=NULL){
                nodo=inicio;
                do{
                mostrar_nodo(nodo);
                nodo=nodo->sig;}
                while(nodo!=NULL);
            }
            else{
            printf ("\n\nLista vacia\n\n");
            getch();
            }
        }
        struct datos_p *buscar_nodo(char nombre[50])
{
    struct datos_p *nodo;
    nodo=inicio;
    if(nodo!=NULL)
    {
        do
        {
            if(strcmp (nombre,nodo->nombre)==0) break;
            else nodo=nodo->sig;
        } while(nodo!=NULL);
        if (nodo==NULL)
        {
            printf("\n\nNombre no encontrado\n\n");
            getch();
        }
        else
        {
            printf("\n\nNombre encontrado\n\n");
            mostrar_nodo(nodo);
        }

    }
    else
    {
        printf("\n\nNose puede buscar el nombre\n\n");
        getch();
    }
    return(nodo);
}
void insertar_nodo(struct datos_p *anterior,struct datos_p *nodo)
{
    if((anterior!=NULL)&&(nodo!=NULL))
    {
        nodo->sig=anterior->sig;
        anterior->sig=nodo;
        if(anterior==fin)fin=nodo;
    }
    else
    {
        printf("\n\nNo se puede insertar el nodo\n\n");
        getch();
    }
}


       int main(void)
       { int a, i;
       do
       {
        system("cls");
        printf("Menu de opciones:\n\n");
        printf("1. Ingrese los datos\n");
        printf("2. Salir\n");
        printf("Opcion  de escoger: ");
        scanf("%d",&a);
       switch(a)
        {case 1:
        inicializar_lista();
        mostrar_lista();
        for(i=1;i<=2;i++)
           {
                crear_nodo();
                llenar_nodo(actual);
                agregar_nodo(actual);

           }
           insertar_nodo(buscar_nodo("uno"),actual) ;
           mostrar_lista();
         break;
     case 2:
         break;
         default:
             system ("cls");
             printf( "La opcion que ingreso es incorrecta");
             getch();
             break;
    }


         }while(a!=2);

         return 0;

}
