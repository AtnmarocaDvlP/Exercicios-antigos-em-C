#include <stdio.h>
int main(){
    int class;
    printf ("Digite o numero da classificação: ");
    scanf("%d",&class);
    if (class == 1){
        printf(" Alimento não perecivel");
    }
    else if(class >= 2 && class <= 4){
        printf("Alimeto perecivel");
    }
    else if(class >= 5 && class <= 6){
        printf("Vestuario");
    }
    else if(class == 7){
        printf(" higiene pessoal");
    }
    else if(class >= 8 && class <= 15){
        printf("Limpeza e utensilios domesticos");
    }
    else{
        printf("Comando Invalído!");
    }
    return 0;
}