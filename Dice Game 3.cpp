#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int x,y,z,sum=0;
        scanf("%d",&x);
        for(int i=1;i<=x;i++)
        {
            if(i%2==0)
            {
                y=6;
            }
            else
            {
                z=1;
            }
            sum=(2*y+z)*x/2;
        }
        printf("%d\n",sum);
    }
}