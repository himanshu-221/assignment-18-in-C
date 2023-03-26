/*Write a function to check whether a given string is palindrome or not.*/
#include<stdio.h>
#include<string.h>
void palindrome(char str[10])
{
    char temp[10];
    strcpy(temp,str);
    strrev(str);
    if(strcmp(temp,str)==0)
    {
        printf("String is palindrome\n");
    }
    else{
        printf("String is not palindrome\n");
    }
}

int main()
{
    char str[10];
    printf("Enter a string to check palindrome\n");
    gets(str);
    palindrome(str);
    return 0;
}