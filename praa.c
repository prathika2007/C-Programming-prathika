#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, smallest, secondSmallest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    smallest = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
            largest = a[i];

        if(a[i] < smallest)
            smallest = a[i];
    }

    secondSmallest = largest;

    for(i = 0; i < n; i++)
    {
        if(a[i] > smallest && a[i] < secondSmallest)
            secondSmallest = a[i];
    }

    printf("Largest number = %d\n", largest);
    printf("Second smallest number = %d", secondSmallest);

    return 0;
}