/*Write a function to transform a string into lowercase*/
#include<stdio.h>
#include<string.h>

void lowecase(char str[10])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=91)
        {
            str[i]+=32;
        }
    }
    printf("New string is %s",str);
    
}
int main()
{
    char str[10];
    printf("enter a string into uppercase\n");
    gets(str);
    lowecase(str);
    return 0;

}