#include<stdio.h>
int main()
{
    int t;
    printf("Enter the number of terms:");
    scanf("%d",&t);
    while(t--)
    {
        int n,i,flag=0,len;
        printf("Enter the size of string:");
        scanf("%d",&len);
        n=len/2;
        char a[len];
        printf("Enter the string:");
        scanf("%s",&a);
        for(i=0;i<n;i++)
        {
            if(a[i]!=a[i+n])
                flag+=1;
        }
        if(flag!=0)
            printf("No\n");
        else
            printf("Yes\n");
    }
}