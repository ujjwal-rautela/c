/*
Write a program in C to remove characters from a string except alphabets. Go to the editor

Test Data :
Input the string : w3resource.com

Expected Output :

After removing the Output String : wresourcecom 
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    printf("Enter the string :  \n");
    fgets(str,40,stdin);
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            continue;
        }
        else
        {
            str[i]=str[i+1];
        }
    }
    puts(str);
return 0;
}