/*Write a function to compare two strings.*/
#include<stdio.h>
#include<string.h>
void compare(char str1[10],char str2[10])
{
    int i,count=0;
        for(i=0;str1[i]!='\0'|| str2[i]!='\0';i++)
        {
            if(str1[i]!=str2[i])
            {
                if(str1[i]>str2[i])
                {
                    count++;
                    break;
                }
                else if(str1[i]<str2[i])
                {
                    count--;
                    break;
                }
            }
        }
    if(count>0)
        printf("str1 is greater then str2 = %d\n",count);
    else if(count<0)
        printf("str1 is less then str2 = %d\n",count);
    else if(count==0)
        printf("strings are equal = %d\n",count);
}
int main()
{
    char s1[10], s2[10];
    printf("Enter two strings\n");
    gets(s1);
    gets(s2);
    compare(s1,s2);
    return 0;
}