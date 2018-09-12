#include <stdio.h>
#include <stdlib.h>

/*
 * Exemplo de escrita em arquivo de texto em C utilizando fprintf
 *
 * */
int main()
{
    int num;
    FILE *fptr;
    fptr = fopen("program.txt","w");

    if(fptr == NULL) {
        printf("Error!");
        exit(1);
    }

    printf("Digite um número: ");
    scanf("%d",&num);

    fprintf(fptr,"%d",num);
    fclose(fptr);

    return 0;
}