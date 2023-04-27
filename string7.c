/*
5. Develop a C program to read a sentence from the keyboard and transfer the sentence by 
filtering all the occurrence of articles such as ‘a’ ‘an’ and ‘the’ into another array. 
Display the modified sentence stored in the new array to the console.
Sample Input/Output
Input:
Main String: An apple a day keeps the doctor away.
Output:
apple day keeps doctor away
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[60];
    gets(str);
    int i,j;
    for(i=0;str[i]!='\0';i++)
    {
        if((str[0]=='a' || str[0]=='A') && (str[1]==' '))
        {
            for(j=0;str[j]!='\0';j++)
            {
                str[j]=str[j+2];   
            }
        }
        else if((str[0]=='A' || str[0]=='a') && (str[1]=='N' || str[1]=='n') )
        {
            for(j=0;str[j]!='\0';j++)
            {
                str[j]=str[j+3];
            }
        }
        else if((str[0]=='T' || str[0]=='t') && (str[1]=='h') && (str[2]=='e') && (str[3]==' '))
        {
            for(j=0;str[j]!='\0';j++)
            {
                str[j]=str[j+4];
            }
        }
        if(i>0)
        {
            if((str[i]=='a') && (str[i-1]==' ') && (str[i+1]==' '))
            {
               for(j=i;str[j]!='\0';j++)
                {
                    str[j]=str[j+2];
                }
            }

            else if(str[i]=='a' && str[i-1]==' ' && str[i+1]=='n' && str[i+2]==' ')
            {
                for(j=i;str[j]!='\0';j++)
                {
                    str[j]=str[j+3];
                }
            }

            else if(str[i]=='t' && str[i+1]=='h' && str[i+2]=='e' && str[i+3]==' ' && str[i-1]==' ')
            {
                for(j=i;str[j]!='\0';j++)
                {
                    str[j]=str[j+4];
                }
            }
        }
        
    }
    puts(str);
return 0;
}