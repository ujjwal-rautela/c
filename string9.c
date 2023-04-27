#include<stdio.h>
#include<string.h>
void Cipher(char arr1[]);
int main()
{
    char Original_str[100];
    printf("Enter the string :  ");
    gets(Original_str);
    printf("The ciphered text is :  ");
    Cipher(Original_str);
return 0;
}
void Cipher(char arr[])
{
    char coded[100];
    int i;
    for(i=0;arr[i]!='\0';i++)
    {
        if((arr[i]>='a' && arr[i]<='z') || (arr[i]>='A' && arr[i]<='Z'))
        {
            if(arr[i]=='a')
            {
                coded[i]='z';
            }
            else if(arr[i]=='A')
            {
                coded[i]='Z';
            }
            else
            {
                coded[i]=arr[i]-1;
            }
        }
        else
        {
            coded[i]=arr[i];
        }
    }
    coded[i]='\0';
    puts(coded);
}


