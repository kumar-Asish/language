#include<stdio.h>
#define N 50

int main(){
              int r1,c1,r2,c2,i,j,k,sum;
              int arr[N][N],brr[N][N],crr[N][N];
              printf("enter the no of rows of 1st matrix : ");
              scanf("%d",&r1);
               printf("enter the no of columns of 1st matrix : ");
              scanf("%d",&c1);
              printf("enter the first matrix :\n");
              for(i=0;i<r1;i++)
              {
                for(j=0;j<c1;j++)
                {
                  scanf("%d",&arr[i][j]);
                }
              }
               printf("enter the no of rows of 2nd matrix : ");
              scanf("%d",&r2);
               printf("enter the no of columns of 2nd matrix : ");
              scanf("%d",&c2);
              printf("enter the second matrix :\n");
              for(i=0;i<r2;i++)
              {
                for(j=0;j<c2;j++)
                {
                  scanf("%d",&brr[i][j]);
                }
              }
              if(r1!=r2)
              {
                printf("this two matrix can't multiply\n");
              }
              else
              {
                for(i=0;i<r1;i++)
              {
                for(j=0;j<c2;j++)
                {
                  sum=0;
                  for(k=0;k<r2;k++)
                  {
                    sum=sum+arr[i][k]*brr[k][j];
                  }
                  crr[i][j]=sum;
                }
              }
              printf("matrix multipliction is :\n");
              for(i=0;i<r1;i++)
              {
                for(j=0;j<c2;j++)
                {
                  printf("%d ",crr[i][j]);
                }
                printf("\n");
              }
              }

return 0;
}