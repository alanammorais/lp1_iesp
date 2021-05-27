#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 2
int tamOcupado = 0;

struct Elemento
{
       char nome [100];
       char rua [100];
       char cidade [100];
       char estado [2];
       char cep [10];
} lista [TAM];

char menu()
{
     char opcao;
     fflush(stdin);

     printf ("\n \n");
     printf ( " (C)adastrar. \n" );
     printf ( " (M)ostrar. \n" );
     printf ( " C(A)arregar. \n" );
     printf ( " (S)alvar. \n" );
     printf ( " (T)erminar. \n" );
     scanf ( "%c", &opcao );

     printf ("\n Opcao Menu-%c",opcao);
     fflush(stdin);
     return opcao;
}

void mostra()
{
      int t;
      printf ("\n");
      for( t = 0; t < tamOcupado; t++ )
      {
          if (!(strcmp(lista[t].nome, "")==0) )
          {
           printf ( "Nome: %s \n", lista[t].nome);
           printf ( "Rua: %s \n", lista[t].rua);
           printf ( "Cidade: %s \n", lista[t].cidade);
           printf ( "Estado: %s \n", lista[t].estado);
           printf ( "CEP: %s \n", lista[t].cep);
          }
          printf ("\n");
      }
}

void inicia_lista()
{
    int t;
    for (t = 0; t < TAM; t++){
        strcpy(lista[t].nome , "");
    }
}


void cadastra ()
{
     int i;
     printf ("\n\n");
     fflush(stdin);

     if (tamOcupado < TAM){

        for (i = 0; i < 1; i++ )
        {
            printf ( "\nNome: \n" ); fflush(stdin);
            scanf("%s",lista[i].nome );
            printf ( " Rua: \n" ); fflush(stdin);
            scanf("%s", lista[i].rua );
            printf ( "Cidade: \n" ); fflush(stdin);
            scanf("%s", lista[i].cidade );
            printf ( "Estado: \n" );fflush(stdin);
            scanf("%s", lista[i].estado );
            printf ( "CEP: \n" ); fflush(stdin);
            scanf("%s", lista[i].cep );
            tamOcupado++;
        }
     }
}

void salva ()
{
    FILE *fp;
    int i, result;
      printf ("\n \n");
      fp = fopen ("cadastro.txt", "ab");
      if ( fp == NULL )
      {
         printf ( "O arquivo nao pode ser aberto. \n" );
         return;
      }
      for (i = 0; i <= tamOcupado; i++ )
      {
          if ( !(strcmp(lista[i].nome, "")==0) )
          {
           result = fwrite ( &lista[i], sizeof ( struct Elemento ), 1, fp );
           if ( result != 1 )
           {
              printf ( "Erro de escrita no arquivo. \n" );
           }
          }
      }
      fclose (fp);
}

void carrega ()
{
    FILE *fp;
    int i, resp;
    printf ("\n");
    fp = fopen ( "cadastro.txt", "rb" );
    if ( fp == NULL )
    {
           printf ( "O arquivo nao pode ser aberto. \n" );
           return;
     }
     inicia_lista ();
     for (i = 0; i < TAM; i++ )
     {
        resp = fread ( &lista[i], sizeof (struct Elemento), 1, fp );
        if ( resp != 1 )
        {
             if ( feof (fp) )
             {
                break;
             }
        printf ( " Erro de leitura no arquivo. \n" );
        }
    }
    fclose ( fp );
}

int main()
{
     char escolha = 'i';

     while (escolha != 't'){
        escolha = 'i';
        escolha = menu();
        fflush(stdin);

        switch (escolha){
               case 'C':
               case 'c':
                        cadastra();
                        break;
               case 'm':
               case 'M':
                        mostra();
                        break;
               case 's':
               case 'S':
                        salva();
                        break;
               case 'a':
               case 'A':
                        carrega();
                        break;
               case 't':
               case 'T':
                        exit (0);
                        break;
               default:
                        printf ( "Opcao invalida. \n" );
                        break;
          }


        }
        //system ( "Pause" );
        return 0;
}


