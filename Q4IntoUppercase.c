/*Write a function to transform string into uppercase
*/
#include<stdio.h>
#include<string.h>
void uppercase(char str[10])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    printf("New string is %s\t",str);

}
int main()
{
    char str[10];
    printf("enter a string in lowercase\n");
    gets(str);
    uppercase(str);
    return 0;
}