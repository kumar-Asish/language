#include<stdio.h>

int main(){
                int num1,num2,p=1;
                printf("enter the first number : ");
                scanf("%d",&num1);
                 printf("enter the second number : ");
                scanf("%d",&num2);
                for(int i=1;i<=num2;i++){
                                p=num1*p;
                }
                printf("%d",p);
return 0;
}