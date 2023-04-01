#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int stonepapersciessors(char you,char computer){
    if (you==computer)
    {
        return 0;
    }
    if (you=='s' && computer=='p')
    {
        return -1;
    }
    else if (you=='p'  && computer=='s')
    {
        return 1;
    }
    if (you=='s'  && computer=='r')
    {
        return 1;
    }
    else if (you=='r' && computer=='s')
    {
        return -1;
    }
     if (you=='p'  && computer=='r')
    {
        return -1;
    }
    else if (you=='r' && computer=='p')
    {
        return 1;
    }
    
    
    
    
}
int main()
{
    char you,computer;
    srand(time(0));
    int number=rand()%100+1;
    if (number<33)
    {
        computer='s';
    }
    else if (number>33 && number<66)
    {
        computer='p';
    }
    else{
        computer='r';
    }
    
    
    printf("enter 's' for stone, 'p' for paper and 'r' for sciessors\n");
    scanf("%s",&you);
    int result=stonepapersciessors(you,computer);
    printf("you choose %c and computer choose %c\n",you,computer);
    if (result==0)
    {
        printf("Game draw\n");
    }
    else if (result==1)
    {
        printf("you won\n");
    }
    else{
        printf("you loose\n");
    }
    
    
    return 0;
}