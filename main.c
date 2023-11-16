#include <stdio.h>

int main (int argc, char *argv[]) {

    char nombre[3][10];
    char a[10];
/*
    printf("Ingrese una cadena de caracteres: ");
    scanf("%s",&a);
    printf("La cadena ingresada es %s",a);
*/
    for (int i = 0; i < 3; i++)
    {
        printf("Ingrese la cadena de caracteres %d: ",i);
        scanf("%s",&nombre[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("La cadena ingresada en la posicion %d es %s\n",i,nombre[i]);
    }
    

    



    return 0;
}