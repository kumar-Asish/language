#include<stdio.h>

int main(){
                char ch;
                printf("enter the charecter: ");
                scanf("%c",&ch);
                if(ch>=65 && ch<=90)
                {
                                printf("input charcter is uppercase\n");
                                printf("lowercase=%c",ch+32);
                }
                else if (ch>=97 && ch<=122)
                {
                                 printf("input charcter is lowercase\n");
                                printf("uppercase=%c",ch-32);
                }
                else if(ch>=48 &&ch<=57)
                {
                                printf("input charcter is digit\n");
                }
                else{
                                printf("input charcter is special cheracter\n");
                }
return 0;
}