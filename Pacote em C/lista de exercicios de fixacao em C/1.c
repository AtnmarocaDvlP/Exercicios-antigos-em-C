#include <stdio.h>
#include <math.h>
int main(){
    float not1,not2,not3,total;
    printf("Escreva as 3 notas tiradas: ");
    scanf("%f %f %f", &not1, &not2, &not3);
    total = (not1+not2+not3)/3;
    if(total >= 0 && total <= 3){
        printf("Sua media foi de %.2f",total);
        printf("\nReprovado!");
    }
    else if( total >= 4 && total <= 7){
        printf("Sua media foi de %.2f",total);
        printf("\nVai Fazer o Exame!");
    }
    else if( total >= 8 && total <= 10){
        printf("Sua media foi de %.2f",total);
        printf("\nAprovado!");
    }
    return 0;
}
    