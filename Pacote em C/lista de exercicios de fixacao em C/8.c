#include <stdio.h>
int main(){
    int class;
    printf("digite o numero de classificacao do produto: ");
    scanf("%d",&class);
    switch(class){
      case 1:
            printf("\nAlimento nao perecivel");
        break;
      case 2:
      case 3:
      case 4:
            printf("\nAlimento perecivel");
        break;
      case 5:
      case 6:
            printf("\nVestuario");
        break;
      case 7:
            printf("\nHigiene Pessoal");
        break;
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
            printf("\nLimpeza e utenilios domesticos");
        break;
      default:
            printf("\nComando Invalido");
    }
    return 0;
}