#include<stdio.h>
#include<string.h>
void inputString(char arr[]); 
int main()
{
    char name[50];
    inputString(name);
    puts(name);
return 0;
}
void inputString(char arr[])
{
    char ch;
    int i=0;
    while(ch !='\n')
    {
        scanf("%c",&ch);
        arr[i]=ch;
        i++;
    }
    arr[i]='\0';
}

