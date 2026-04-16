#include<stdio.h>

int main(){
                char ch;
                float a,b;
                printf("enter the sign: ");
                scanf("%c",&ch);
                 printf("enter the value of a:\n");
                scanf("%f",&a);
                printf("enter the value of b:\n");
                scanf("%f",&b);
                switch (ch)
                {
                                case '+':
                                printf("sum is: %f",a+b);
                                break;
                                case '-':
                                printf("sub is: %f",a-b);
                                break;
                                case '*':
                                printf("multiplicaiion is : %f",a*b);
                                break;
                                case '/':
                                printf("division is : %f",a/b);
                                break;
                                default:
                                printf("wrong input");
                                break;
                }


                
return 0;
}