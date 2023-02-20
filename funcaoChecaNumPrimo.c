#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int checaNumPrimo(int numInserido) {
    int primo = TRUE;
    if (numInserido <= 1) primo = FALSE;
    for (int divisor = 2; (divisor < numInserido) && (primo); divisor++)
        if (numInserido % divisor == 0) primo = FALSE;
    return primo;
}

void main () {
    
    int numInserido;
    printf("\t\tVerificačão de número primo:\nInsira o número que deseja saber se é primo ou não: ");
    scanf("%d", &numInserido);
    numInserido = abs(numInserido);
    if (checaNumPrimo(numInserido))
        printf("%d é primo!", numInserido);
    else
        printf("%d não é primo!", numInserido);
}
