/*escreva um algoritmo que solicite  ao usuário um número inteiro
e apresente ao final, a somatória de todos os inteiros positivos
até o numero informado.*/
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
        return(1); //condição de parada
    else
        soma = valor + SomaAntecessoresRecursiva(valor-1);//chamada recursiva
        return(soma);
}
int main()
{
    setlocale(LC_ALL,"portuguese");
    float Num1;
    printf("Informe o primeiro número: ");
    scanf("%f", &Num1);

    printf("\nA soma dos antecessores normal é: %.2f",SomaAntecessoresNormal(Num1));
    printf("\nA soma dos antecessores recursiva é: %.2f",SomaAntecessoresRecursiva(Num1));
    getch();
}
