#include<stdio.h>

int main(){
                int num,a=0,b=1,c;
                printf("enter the terms : ");
                scanf("%d",&num);
                for(int i=0;i<=num;i++){
                                printf("\t %d",a);
                                c=a+b;
                                a=b;
                                b=c;
                }
return 0;
}