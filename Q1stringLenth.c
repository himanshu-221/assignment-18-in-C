/*Write a function to calculate length of the string*/
#include<stdio.h>
#include<string.h>
int strlent(char str[20])
{
    int len=0,i;
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    return len;
}
int main()
{
    char s1[20];
    printf("enter a string to calculate the lenght\n");
    gets(s1);
    int size;

    size=strlent(s1);
    printf("Lenght of the string is=%d\n",size);
    return 0;
}