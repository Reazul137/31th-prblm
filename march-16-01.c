#include<stdio.h>
int main()
{
    int x;

    printf("Input an integer : ");
    scanf("%d",&x);

    if (x == 0)
    {
        printf("Positive\n");
    }
    else if (x<0 && x%2 !=0)
    {
        printf("Negative odd\n");
    }
    else if (x<0 && (x%2) == 0)
    {
        printf("Negative even \n");
    }
    else if (x>0 && (x%2) !=0)
    {
        printf("positive odd\n");
    }
    else if (x>0 && (x%2)==0)
    {
        printf("positive even");
    }
    return 0;
}
