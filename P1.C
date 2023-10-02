#include <stdio.h>
void NumeroInvertido(int Numero);

int main(){
    int NumeroIngresado;
    printf("Ingrese un numero =");
    scanf("%d", &NumeroIngresado);
    NumeroInvertido(NumeroIngresado);
    return 0;
}

void NumeroInvertido(int Numero){
    int NumeroInvertido1 = 0;
    int RestoNumero = 0;
    int contadoImpar = 0;
    while ((Numero % 10) != 0)
    {
        RestoNumero = Numero % 10;
        NumeroInvertido1 = (NumeroInvertido1 * 10) + RestoNumero;
        Numero = Numero / 10;
        if (RestoNumero % 2 != 0)
        {
            contadoImpar++;
        }
        
    }
    printf("Numero impares = %d\n", contadoImpar);
    printf("Numero invertido = %d", NumeroInvertido1);
}