/*escreva um algoritmo que solicite  ao usu�rio um n�mero inteiro
e apresente ao final, a somat�ria de todos os inteiros positivos
at� o numero informado.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float SomaAntecessoresNormal(int valor){
    int soma=0;
    for(int i=1; i<=valor;i++)
        soma = soma+i;
    return (soma);
}
float SomaAntecessoresRecursiva(int valor){
    int soma;
    if(valor==1)
        return(1); //condi��o de parada
    else
        soma = valor + SomaAntecessoresRecursiva(valor-1);//chamada recursiva
        return(soma);
}
int main()
{
    setlocale(LC_ALL,"portuguese");
    float Num1;
    printf("Informe o primeiro n�mero: ");
    scanf("%f", &Num1);

    printf("\nA soma dos antecessores normal �: %.2f",SomaAntecessoresNormal(Num1));
    printf("\nA soma dos antecessores recursiva �: %.2f",SomaAntecessoresRecursiva(Num1));
    getch();
}
