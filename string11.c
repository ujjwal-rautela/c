#include<stdio.h>
#include<string.h>
int main()
{
    int num,flag=0,count=0;
    printf("Enter the number of students you want :  \n");
    scanf("%d",&num);
    char name[num][30];
    char student[20];
    int i=0,j;
    printf("Enter the names :  \n");
    for(i=0;i<num;i++)
    {
        scanf("%s",&name[i]);
    }    
    printf("\n The names of students are : \n");
    for(i=0;i<num;i++)
    {
        printf("%s",name[i]);
        printf("\n");
    }
    printf("Enter the student you want to search :  ");
    scanf("%s",&student);
    int len=strlen(student);
    for(i=0;i<num;i++)
    {
        flag++;
        for(j=0;student[j]!='\0';j++)
        {
            if(name[i][j]==student[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if(count==len)
        {
            printf("%s is found on %d position",student,i+1);
            flag=1;
        }
        count=0;
        flag=0;
    }
    if(flag!=1)
    {
        printf("%s is not found",student);
    }
    return 0;
}