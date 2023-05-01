/*
Write a program in C to find the number of times a given word 'the' appears in the given string. Go to the editor

Test Data :
Input the string : The string where the word the present more than once.

Expected Output :

The frequency of the word 'the' is : 3
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    fgets(str,40,stdin);
    int i,count=0;
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]=='T' || str[i]=='t') && str[i+1]=='h' && str[i+2]=='e' && str[i+3]==' ' && str[i-1]==' ')
        {
            count++;
        }
    }
    printf("THE number of 'the' is :  %d",count);

return 0;
}