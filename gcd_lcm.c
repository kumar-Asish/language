#include<stdio.h>

int main(){
                int num1,num2,gcd,lcm;
                printf("enter the first number: ");
                scanf("%d",&num1);
                 printf("enter the second number: ");
                scanf("%d",&num2);
                for(int i=1;i<num1 && i<num2;i++){
                                if(num1%i==0 && num2%i==0){
                                                 gcd=i;
                                                 lcm=((num1*num2)/gcd);
                                }
                }
                printf("the value of GCD is :%d \n",gcd);
                printf("the value of lcm is : %d",lcm);
return 0;
}