#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generaterandom(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()
{
    system("color e");
    
    start:
    printf("-------------------------------------------\n");
    printf("|    WELCOME TO ROCK PAPER SCISSOR GAME    |\n");
    printf("-------------------------------------------\n");
    printf("Choose 1 for Rock, 2 for Paper and 3 for Scissor\n");

    int countplayer = 0, countcomp = 0;
    for (int i = 1; i <= 3; i++)
    {
        int temp, comp;
        char a[] = {'0','R', 'P', 'S'};

        ln:
        printf("Your Turn\n");
        scanf("%d", &temp);
        if (temp == 1)
        {
            printf("You Choose Rock\n");
        }
        else if (temp == 2)
        {
            printf("You Choose Paper\n");
        }
        else if (temp == 3)
        {
            printf("You Choose Scissor\n");
        }
        else if(temp>3){
            printf("Invalid Number\n");
            goto ln;
        }
        printf("\nComputer Turn\n");

        comp = generaterandom(3) + 1;
        if (comp == 1)
        {
            printf("Computer Choose Rock\n");
            printf("\n");
        }
        else if (comp == 2)
        {
            printf("Computer Choose Paper\n");
            printf("\n");
        }
        else if (comp == 3)
        {
            printf("Computer Choose Scissor\n");
            printf("\n");
        }

        if (a[temp] == 'R' && a[comp] == 'P')
        {
            countcomp=countcomp+1;
        }
        else if (a[temp] == 'P' && a[comp] == 'R')
        {
            countplayer++;
        }
        else if (a[temp] == 'R' && a[comp] == 'S')
        {
            countplayer++;
        }
        else if (a[temp] == 'S' && a[comp] == 'R')
        {
            countcomp=countcomp+1;
        }
        else if (a[temp] == 'S' && a[comp] == 'P')
        {
            countplayer++;
        }
        else if (a[temp] == 'P' && a[comp] == 'S')
        {
            countcomp=countcomp+1;
        }
        else if (a[temp] == 'P' && a[comp] == 'P')
        {
            countplayer += 0;
            countcomp += 0;
        }
        else if (a[temp] == 'R' && a[comp] == 'R')
        {
            countplayer += 0;
            countcomp += 0;
        }
        else if (a[temp] == 'S' && a[comp] == 'S')
        {
            countplayer += 0;
            countcomp += 0;
        }
    }
    
    printf("---------------------\n");
    printf("|    Your Point: %d   |\n", countplayer);
    printf("| Computer Point: %d  |\n", countcomp);
    printf("---------------------\n");

    if (countplayer > countcomp){
        printf("-----------------------\n");
        printf("|   Congrats You Won   |\n");
        printf("-----------------------\n");
    }
    else if (countcomp > countplayer)
    {
        printf("--------------------------------------\n");
        printf("| Computer Won, Better Luck Next Time |\n");
        printf("--------------------------------------\n");
    }
    else
    {
        printf("------------\n");
        printf("| Game Draw |\n");
        printf("------------\n");
        
    }

    int ch;
    printf("Press 1 for Play Again and 2 for Exit\n");
    scanf("%d", &ch);
    if (ch==1)
    {
        goto start;
    }
    else if(ch==2){
        printf("\nThank You\n");
    }  

    
    return 0;
}
