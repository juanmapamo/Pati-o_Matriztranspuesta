#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    //En esta seccion decimos al ususario que ingrese cuantas filas y cuantas columnas va a desear.
    int a,b;
    printf("Ingrese el tamanio de la fila\n");
    scanf("%d", &a);
    printf("Ingrese el tamanio de la columna\n");
    scanf("%d", &b);
    
    srand (time (NULL));
    int matriz[a][b];
    //En esta seccion llamamos a la matriz para quye nos de numeros aleatorios del 0 al 100.
    for (int i = 0; i < a; i++)
    {
       for (int j = 0; j < b; j++)
       {
        matriz [i][j]=rand()%101;
       }
    }
    // Aqui imprimimos la matriz dependiendo el gusto del usuario.
    printf("Matriz original\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    //En esta seccion vamos a cambiar las variables, para que se intercambien, donde habia filas, ahora serian columnas y donde eran columnas
    //ahora son filas.
    int transpuesta[a][b];
    for (int i = 0; i < b; i++)
    {
       for (int j = 0; j < a; j++)
       {
        transpuesta[i][j]= matriz [j][i];
       }
    }
     // Aqui imprimimos la matriz dependiendo el gusto del usuario, pero ya intercambiado las filas y columnas.
    printf("Matriz transpuesta\n");

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d\t",transpuesta[i][j]);
        }
        printf("\n");
    }

    return 0;
}