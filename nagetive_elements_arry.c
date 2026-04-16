#include<stdio.h>

int main(){
                int a,i;
                printf("enter the elements : ");
                scanf("%d",&a);
                int arr[a];
                for(i=0;i<a;i++)
                {
                                printf("enter the %d elements : ",i+1);
                                scanf("%d",&arr[i]);
                }
                printf("All nagetive number is : \n");
                for(i=0;i<a;i++)
                {
                                if(arr[i]<0)
                                {
                                                printf("%d\t",arr[i]);
                                }
                }
                
return 0;
}