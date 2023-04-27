#include<stdio.h>
#include<string.h>
void Delete_Blank_space(char arr[])
{
    char new[100];
    int len=strlen(arr);
    for(int i=0;i<len;i++)
    {
        if(arr[i]==' ')
        {
            for(int j=i;j<len;j++)
            {
                arr[j]=arr[j+1];
            }
        }
    }
    strcpy(new,arr);
    puts(new);
}
int main()
{
    char org_str[100];
    printf("ENter the string : ");
    gets(org_str);
    Delete_Blank_space(org_str);
return 0;
}