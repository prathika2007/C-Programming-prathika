#include <stdio.h>
#include <string.h>

struct Policy {
    char name[50];
    int age;
    float sumAssured;
    int termYears;
    float annualPremium;
};

float calculatePremium(float sumAssured, int age, int termYears) {
    float baseRate;

    if (age <= 25) baseRate = 0.012;
    else if (age <= 35) baseRate = 0.015;
    else if (age <= 45) baseRate = 0.020;
    else baseRate = 0.030;

    return sumAssured * baseRate / termYears;
}

void createPolicy(struct Policy *p) {
    printf("\nEnter customer name: ");
    scanf(" %[^\n]", p->name);

    printf("Enter age: ");
    scanf("%d", &p->age);

    printf("Enter Sum Assured (₹): ");
    scanf("%f", &p->sumAssured);

    printf("Enter Term (years): ");
    scanf("%d", &p->termYears);

    p->annualPremium = calculatePremium(p->sumAssured, p->age, p->termYears);

    printf("\nPolicy Created Successfully!\n");
    printf("Annual Premium = ₹%.2f\n", p->annualPremium);
}

void viewPolicy(struct Policy p) {
    printf("\n----- POLICY DETAILS -----\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Sum Assured: ₹%.2f\n", p.sumAssured);
    printf("Term: %d years\n", p.termYears);
    printf("Annual Premium: ₹%.2f\n", p.annualPremium);
}

void maturityValue(struct Policy p) {
    float totalPaid = p.annualPremium * p.termYears;

    printf("\n----- MATURITY INFO -----\n");
    printf("Total Premium Paid: ₹%.2f\n", totalPaid);
    printf("Maturity Amount (Sum Assured): ₹%.2f\n", p.sumAssured);
}

int main() {
    struct Policy p;
    int choice;

    while (1) {
        printf("\n===== TERM LIFE INSURANCE SYSTEM =====\n");
        printf("1. Create New Policy\n");
        printf("2. View Policy Details\n");
        printf("3. Check Maturity Value\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createPolicy(&p);
                break;
            case 2:
                viewPolicy(p);
                break;
            case 3:
                maturityValue(p);
                break;
            case 4:
                printf("\nThank you!\n");
                return 0;
            default:
                printf("Invalid Option!\n");
        }
    }
}