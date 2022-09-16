#include <stdio.h>
int SumofSquare(int input)
{
    if(input==1)
    {
        return 1*1;
    }
    else
    {
        return input*input + SumofSquare(input-1);
    }
}

int main()
{
    int input, output;
    scanf("%d", &input);
    output = SumofSquare(input);
    printf("%d", output);
}