#include <stdio.h>
#define STRINGLEN 110
#define CharacterSIZE 26

int main()
{
    char str[STRINGLEN];
    int charac[CharacterSIZE]={0};
    int i = 0,size;
    while (1)
    {
        scanf("%c",&str[i]);
        if(str[i]=='\n')
            break;
        i++;
    }
    str[i]='\0';
    size = i;
    printf("%s\n",str);
    for (int i = 0; i < size; i++)
    {
        int temp = 0;
        if(65<=str[i] && str[i]<=90)
            {
                temp = (str[i]-65)%CharacterSIZE;
                charac[temp] ++; 
            }
        else if(97<=str[i] && str[i]<=122)
            {
                temp = (str[i]-97)%CharacterSIZE;
                charac[temp] ++; 
            }
    }
    for (int i = 0; i < CharacterSIZE; i++)
        printf("%d\n", charac[i]);
}