#include <stdio.h>

int MultipleofFive(int input)
{
    if(input%5 == 0)
        return 5;
    else
        return 0;
}

int MultipleofThree(int input)
{
    if(input%3 == 0)
        return 3;
    else
        return 0;
}

int BonusorPenalty(int input)
{
    if(100<=input && input<=200)
        return 50;
    else
        return -50;
}

int main()
{
    int input, score;
    scanf("%d", &input);
    if(input==0 || input<0)
    {
        score = -100;
        printf("%d", score);
    }
    if(input>0)
    {
        score = MultipleofThree(input) + MultipleofFive(input) + BonusorPenalty(input);
        printf("%d", score);
    }
}