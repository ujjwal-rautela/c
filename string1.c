#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    printf("THe number tilll you want the table :  \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("table for %d is : \n",i);
        for(j=1;j<=10;j++)
        {
            printf("%d * %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }

return 0;
}