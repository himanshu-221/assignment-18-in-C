/*Write a function to reverse a string word wise. (For example if the given string is
“iNeuron Education Services” then the resulting string should be “Services Education
iNeuron” )
*/

#include<stdio.h>
#include<string.h>
void revword(char str[])
{
    int l,i,j,k;
    char temp[50]="",flag,word[10];
    // l=strlen(str);
    // for(i=0;i<l/2;i++)
    // {
    //     flag=str[i];
    //     str[i]=str[l-1-i];
    //     str[l-1-i]=flag;
    // }
    //printf("%s\t\n",str);
    strrev(str);
    strcat(str," ");
    j=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            word[j]='\0';
            strrev(word);
            strcat(temp,word);
            strcat(temp," ");
            j=0;
            // strrev(word);
            // break;
        }
        else{
            word[j]=str[i];
            j++;
        }
        
    }
    printf("%s\t",temp);
}
int main()
{
    char s[50];
    printf("Enter a string that contain more then one word\n");
    gets(s);
    revword(s);
    return 0;
}