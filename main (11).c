/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char opcao[10];
    printf("1 - Jogar\n2 - Sair\nEscolha:");
    scanf("%s", opcao);
    if (strcmp(opcao, "1") == 0){
        printf("Iniciando o jogo..\n");
    } else if(strcmp(opcao, "2") == 0){
        printf("Saindo...\n");
    } else {
        printf("Opcao invalida");
    }
    
    return 0;
}
