#include<stdio.h>

int main(){
  int num,rem,sum=0,c;
  printf("enter the number : ");
  scanf("%d",&num);
  c=num;
  while(num>0){
    rem=num%10;
    num=num/10;
    sum+=(rem*rem*rem);
  }
  if(c==sum)
  {
    printf("input number is amstorng number");
  }
  else
  {
    printf("input number is not amstrong number");
  }
return 0;
}