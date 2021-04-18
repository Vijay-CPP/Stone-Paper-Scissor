#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random();
int result(char comp, char player);

int main()
{
    char comp, player;

    printf("\n\n==========<-> Stone <-> Paper <-> Scissor <->==========\n");
    printf("\nEnter s for stone, p for paper or z for scissors : ");
    scanf("%c", &player);

    if(random() < 33)
        comp = 's';
    
    else if(random() > 33 && random() < 66)
        comp = 'p';
    
    else if(random() > 66 && random() < 100)
        comp = 'z';
    
    printf("\nYou : %c", player);
    printf("\nComputer : %c", comp);

    if(result(comp, player)==1)
        printf("\nYou Won!");

    else if(result(comp, player)==0)
        printf("\nYou lose!");

    else if(result(comp, player)==-1)
        printf("\nDraw!");

    printf("\n\n");
    return 0;
}

int random()
{
    srand(time(0));
    return (rand() % 100);
}

int result(char comp, char player)   // stone - s paper - p scissor - z
{
    if(comp == player)
        return -1;

    if(comp == 'p' && player == 's' )
        return 1;

        else if(comp == 's' && player == 'p' )
            return 0;

    if(comp == 'p' && player == 'z' )
        return 1;

        else if(comp == 'z' && player == 'p' )
            return 0;

    if(comp == 'z' && player == 's' )
        return 1;

        else if(comp == 's' && player == 'z' )
            return 0;
}