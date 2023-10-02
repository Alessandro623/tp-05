#include <stdio.h>
#include <ctype.h>
void MostrarFraseModificada(char frase);

int main(){
    char frase;
    printf("Ingrese una frase terminada en un . =");
    scanf("%c", &frase);
    MostrarFraseModificada(frase);
    return 0;
}

void MostrarFraseModificada(char frase){
    int CantVocal = 0 ,CantDigito = 0;
    while (frase != '.')
    {
        if (isalpha(frase)){

            if(frase == 'a' || frase == 'e' || frase == 'i' || frase == 'o' || frase == 'u'){
                CantVocal++;
            }

            if (frase == 'a'){
                frase = putchar('@');
            } else if (frase == 'o'){
                frase = putchar('#');
            } else {
                frase = putchar(frase);
            }
        } else if(isdigit(frase)) {
            CantDigito++;
        }
        frase = getchar();
    }
    printf("\n Cantidad de vocales %d", CantVocal);
    printf("\n Cantidad de digitos %d", CantDigito);
}