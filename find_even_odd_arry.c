#include<stdio.h>

int main(){
                 int a,i,even=0,odd=0;
                printf("enter the elements : ");
                scanf("%d",&a);
                int arr[a];
                for(i=0;i<a;i++)
                {
                                printf("enter the %d elements : ",i+1);
                                scanf("%d",&arr[i]);
                }
                for(i=0;i<a;i++)
                {
                                if(arr[i]%2==0)
                                {
                                                even++;
                                }
                                else if (arr[i]%2!=0)
                                {
                                                odd++;
                                }
                                
                }
                printf("even number is: %d\n",even);
                printf("odd number is: %d\n",odd);
                                                

return 0;
}