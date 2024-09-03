#include<stdio.h>
#include "mimi.h"

int main(){

    double number;
    double a =0;
    double b =0;
    double sum;
    double difference;
    double product;
    double qoutient;
    
    printf("enter number from 1-4:");
   scanf("%lf", &number);

    if (number==1){

        printf("enter number for a:");
        scanf("%lf", &a);
        printf("enter number for b:");
        scanf("%lf", &b); 

        double sum = a + b;

        printf("a=%lf,b=%lf,sum=%lf",a,b,sum);
    } else if (number==2){

      printf("enter number for a:");
      scanf("%lf", &a);
      printf("enter number for b:");
      scanf("%lf", &b);

      double difference = a - b;

      printf("a=%lf,b=%lf,difference=%lf",a,b,difference);
    }
    return 0;
}