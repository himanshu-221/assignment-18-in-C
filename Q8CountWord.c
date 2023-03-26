/*Write a function to count words in a given string*/
#include<stdio.h>
#include<string.h>
void countword(char str[10])
{
    int i,count=1;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==32)  //ascaii value of space
        {
            count++;
        }
    }
    printf("Number of words in given string is %d",count);
}

int main()
{
    char str[30];
    printf("Enter a string more then one word\n");
    gets(str);
    countword(str);
    return 0;
}