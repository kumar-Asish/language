#include<stdio.h>

int main(){
    int num,sum=0;
    printf("enter the number : ");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
                if(num%i==0){
                                sum=sum+i;
                }
    }
    if(sum==num){
                printf("input numnber is perfact number");
    }
    else{
                printf("input number is not perfact");
    }
return 0;
}