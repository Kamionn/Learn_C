// Crée un petit programme pour demandez l'âge

#include <stdio.h> // Librairies
#include <stdlib.h>  // Librairies

int main() // fonction
{
    //Instruction
    int value = 0; 
    printf("Choisissez un age : ");
    scanf("%d", &value);
    printf("Vous avez choisis l'age : %d", value);
}