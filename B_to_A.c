#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    while(n<=m)
    {
        printf("%d ",m);
        m--;
    }
}