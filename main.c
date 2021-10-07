#include <stdio.h>
#include <stdlib.h>
#include "arremessop"
#include "ginasticaa"

/******* função principal (main) *******/
int main(void)
{
   // Declarando as variáveis
   int numero;
   int i=1;
   int f=1;

    do{
        // Menu
        printf("\n ================================== \n");
        printf(" \n ***Bem vindo às olimpiadas*** \n");
        printf(" \n Escolha um dos esportes abaixo: \n");
        printf(" \n 1- Arremesso de peso");
        printf(" \n 2- Ginastica Artistica");
        printf(" \n 3- Ir embora \n");
        printf("\n Opção: ");
        scanf("%d", &numero);
        
        //loop
        switch(numero){
            case 1:
                
                    //chama a função e recebe o retorno
                    arremessoPeso();
                
                break;
            case 2:
            
                    //chama a função e recebe o retorno
                    ginasticaArtistica();
                    
                break;
            case 3:
            
                printf("\nObrigado por participar dos jogos Olimpicos. Até a próxima!\n");
                return f=0; // finalizando o loop
                
                break;
            default:
            
                printf("\nDesculpe-nos, mas só conseguimos atletas para dois esportes.\n");
                
        }
    }while (f=1);
}
