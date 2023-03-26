/*Write a function to find the repeated character in a given string.*/

#include<stdio.h>
#include<string.h>
void frequency(char str[],char ch)
{
    int i,hash[123]={0};
    for(i=0;str[i]!='\0';i++)
    {
        hash[str[i]]++;
    }
    printf("\nRepeated charecters in the given string are\n");
    for(i=0;i<123;i++)
    {
        if(hash[i]>1)
        {
            printf("%c\t",i);
        }
    }
}
int main()
{
    char str[50],c;
    printf("Enter a string\n");
    gets(str);
    //printf("Enter a charecter to count frequency\n");
    frequency(str,c);
    return 0;
}