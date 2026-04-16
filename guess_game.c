#include<stdio.h>
#include<stdbool.h>
#include<time.h>
#include<stdlib.h>

int main(){
                printf("\t\t\t\t\t\t**WELCOME**\n\t\t\t\t***Play and enjoy the guessing game***\n");
                int guess,win,count=1;
                srand(time(NULL));
                win=rand()%100+1;
                //   printf("the number is:%d\n",win);
                printf("enter the you number between 1 and 100:\n");
                do{
                                scanf("%d",&guess);
                
               
                                if(win<guess){
                                                printf("your typing number is higher\n");
                                                printf("guess again\n");             
                                }
                                 else if(win>guess)
                                 {
                                                printf("your typing number is lower\n");
                                                printf("guess again\n");             
                                }
                                else{
                                                printf("you guess the number\n");
                                                printf("you guess the number in %d attemps\n",count);
                                }
                                count++;

                

                }while(guess!=win);
                
return 0;
}