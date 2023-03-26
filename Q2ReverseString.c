/*Write a function to reverse a string.*/
#include<stdio.h>
#include<string.h>
void reverse(char str[20])
{
    int i,l;
    l=strlen(str);
    char temp;
    for(i=0;i<l/2;i++)
    {
        temp=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=temp;
    }
    printf("reverse string is = %s",str);
}
int main()
{
    char s[20];
    printf("enter a string to reverse it\n");
    gets(s);
    reverse(s);
    return 0;
}