#include<stdio.h>
#include<string.h>
char salting(char arr[],char arr2[])
{
    char newpass[200];
    strcpy(newpass,arr);
    strcat(newpass,arr2);
    puts(newpass);
}
int main()
{
    char str1[100];
    char str2[]="123";
   scanf("%s",&str1);
   salting(str1,str2);
return 0;
}