#include <stdio.h>

#define MAX 20

struct Traveler
{
    char name[30];
    float paid;
};

int main()
{
    struct Traveler t[MAX];
    int n, i;
    float budget, transport, hotel, food, other;
    float total, remaining, share;

    printf("================================\n");
    printf("      TRAVEL BUDGET SPLITTER\n");
    printf("================================\n");

    // Choose number of travelers
    printf("Enter number of travelers: ");
    scanf("%d", &n);

    if(n < 1 || n > MAX)
    {
        printf("Invalid number of travelers!\n");
        return 0;
    }

    // Traveler details
    for(i = 0; i < n; i++)
    {
        printf("\nTraveler %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", t[i].name);

        printf("Amount already paid: Rs. ");
        scanf("%f", &t[i].paid);
    }

    // Budget
    printf("\nEnter total budget: Rs. ");
    scanf("%f", &budget);

    // Expenses
    printf("\nEnter transportation expense: Rs. ");
    scanf("%f", &transport);

    printf("Enter hotel expense: Rs. ");
    scanf("%f", &hotel);

    printf("Enter food expense: Rs. ");
    scanf("%f", &food);

    printf("Enter other expenses: Rs. ");
    scanf("%f", &other);

    // Calculations
    total = transport + hotel + food + other;
    remaining = budget - total;
    share = total / n;

    // Output
    printf("\n================================\n");
    printf("          TRIP SUMMARY\n");
    printf("================================\n");

    printf("Total Budget    : Rs. %.2f\n", budget);
    printf("Total Expenses  : Rs. %.2f\n", total);
    printf("Remaining       : Rs. %.2f\n", remaining);
    printf("Per Person Share: Rs. %.2f\n", share);

    printf("\n------ TRAVELERS ------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d. %s - Paid Rs. %.2f",
               i + 1, t[i].name, t[i].paid);

        if(t[i].paid < share)
            printf(" - Pay Rs. %.2f\n",
                   share - t[i].paid);

        else if(t[i].paid > share)
            printf(" - Receive Rs. %.2f\n",
                   t[i].paid - share);

        else
            printf(" - Settled\n");
    }

    if(remaining < 0)
        printf("\nWARNING: Budget Exceeded!\n");
    else
        printf("\nYou are within your budget.\n");

    return 0;
}