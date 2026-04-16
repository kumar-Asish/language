//reverse of any number.like-54321->->->->12345
#include<stdio.h>

int main(){
                int num,rem,sum=0;
                printf("enter the number : ");
                scanf("%d",&num);
                while(num>0){
                                rem=num%10;
                                num=num/10;
                                sum=(sum*10)+rem;
                }
                printf("%d",sum);
return 0;
}