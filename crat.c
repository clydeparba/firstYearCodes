#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int choice = 0;
    int a, b, c, d;
    int sum, difference, product;
    float qoutient;
    
   printf("**************\n");
   printf("* MAIN MENU *\n");
   printf("* 1.Addition *\n");
   printf("* 2.Subtraction *\n");
   printf("* 3.Multiplication *\n");
   printf("* 4.Division*\n");
   printf("* 5.EXIT*\n");
   printf("**************\n");
   printf("Enter your choice:");
   scanf("%d", &choice);

    while (choice != 5)
    {
        switch(choice)
        {
            case 1:
            system("cls");
            printf("welcome to Addition\n\n");

            printf("enter value for a: ");
            scanf("%d", &a);
        
            printf("enter value for b: ");
            scanf("%d", &b);

            sum = a + b;

            printf("the sum of %d and %d is %d", a, b, sum);
            getch();
             break;
        {
            case 2:
            system("cls");
            printf("welcome to Subtraction\n\n");

            printf("enter value for a: ");
            scanf("%d", &a);
        
            printf("enter value for b: ");
            scanf("%d", &b);

            printf("enter value for c: ");
            scanf("%d", &c);

            difference = a - b - c;

            printf("the difference of %d, %d and %d is %d", a, b, c, difference);
            getch();
            default:
            break;
        {
             case 3:
            system("cls");
            printf("welcome to product\n\n");

            printf("enter value for a: ");
            scanf("%d", &a);
        
            printf("enter value for b: ");
            scanf("%d", &b);

            printf("enter value for c: ");
            scanf("%d", &c);

            printf("enter value for d: ");
            scanf("%d", &d);

            product = a * b * c * d;

            printf("the product of %d, %d, %d, and %d is %d", a, b, c, d, product);
            getch();
            break;
            {
             case 4:
            system("cls");
            printf("welcome to Division\n\n");

            printf("enter value for a: ");
            scanf("%d", &a);
        
            printf("enter value for b: ");
            scanf("%d", &b);

            if( b!= 0){
            qoutient =  (float)a / b ;

            printf("the qoutient of %d, and %d, is %.2f\n", a, b,qoutient);
            getch();
            }else{
                printf("error: division by zero is not allowed\n");
                printf("enter value for b: ");
                scanf("%d", &b);

                qoutient = (float)a / b ;

                printf("the qoutient of %d, and %d, is %.2f\n", a, b,qoutient);
                getch();
            }
           
            }
        }
        }
       
    }
        
           
    }
    printf("Goodbye");
    getch();
}