#include<stdio.h>
#include<string.h>
void Decrypt(char arr2[]);
int main()
{
    char Ciphered_str[100];
    printf("Enter the string :  ");
    gets(Ciphered_str);
    printf("\nThe decoded text is :   ");
    Decrypt(Ciphered_str);
return 0;
}

void Decrypt(char arr[])
{
    char decoded[100];
    int i;
    for(i=0;arr[i]!='\0';i++)
    {
        if((arr[i]>='a' && arr[i]<='z') || (arr[i]>='A' && arr[i]<='Z'))
        {
            if(arr[i]=='z')
            {
                decoded[i]='a';
            }
            else if(arr[i]=='Z')
            {
                decoded[i]='A';
            }
            else
            {
                decoded[i]=arr[i]+1;
            }
        }
        else
        {
            decoded[i]=arr[i];
        }
    }
    decoded[i]='\0';
    puts(decoded);
}