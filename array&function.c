#include<stdio.h>

int highest(int a,int num[])
{
    int high=num[0];
    for(int i=0;i<a;i++)
    {
        if(num[i]>high)
        {
            high=num[i];
        }
    }
    return high;
}

int main()
{
    int a;
    int x[100]={a};

    printf("Enter the number ages you wish to enter: ");
    scanf("%d",&a);

    for(int i=0;i<a;i++)
    {

        printf("Enter age %d: ",i+1);
        scanf("%d",&x[i-1]);

    }

    printf("The highest age is %d",highest(a,x));

    return 0;
}
