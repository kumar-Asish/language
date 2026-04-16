#include<stdio.h>

int main(){
                int num,rem,sum=0,base=1;
                printf("enter the number : ");
                scanf("%d",&num);
                while(num>0){
                                rem=num%8;
                                num=num/8;
                                sum=sum+(rem*base);
                                base=base*10;
                }
                printf("%d",sum);
return 0;
}