#include <stdio.h>

int main()
{
    int a[10], i, j, t;

    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(i=0;i<10;i++)
        for(j=i+1;j<10;j++)
            if(a[i]>a[j])
            {
                t=a[i]; a[i]=a[j]; a[j]=t;
            }

    printf("Second smallest = %d, Index = 1\n", a[1]);
    printf("Second largest = %d, Index = 8\n", a[8]);

    return 0;
}