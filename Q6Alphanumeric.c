/*Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)*/
#include<stdio.h>
#include<string.h>
void alphanumeric(char str[10])
{
    int i,flag=0;
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>=33 && str[i]<=47)||(str[i]>=58 && str[i]<=64)||(str[i]>=91 && str[i]<=96)||str[i]>=123 && str[i]<=126)
        {
            flag--;
            break;
        }
        else if(str[i]>=48 && str[i]<=57)
        {
            
            flag++;
            break;
        }
    }
    if(flag>0)
    {
        printf("string is alphanumeric\n");
    }
    else if(flag<0)
    {
        printf("string is not alphanumeric\n");
    }
    else if(flag==0)
    {
        printf("string is not alphanumeric\n");
    }
    printf("String is %s\n",str);
}
int main()
{
    char str[10];
    printf("We suppose you enter atleast one charecter into the string\n");
    printf("Enter a string\n");
    gets(str);
    alphanumeric(str);
    return 0;
}