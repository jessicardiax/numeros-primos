//Elabore um programa que solicita e lê um número inteiro, verifica e informa se tal
//número é primo ou não.
#include <stdio.h>
int main(){
    int n,i,resultado=0;
    printf("digite um numero:");
    scanf("%d",&n);
     for (i=2; i<=n/2;i++){
         if (n % i==0){
    resultado++;
    break;
         }
     }
     if (resultado==0){
         printf("%d é numero primo\n",n);
     }
     else{
         printf("%d não é numero primo\n",n);
     }
     return 0;
}
