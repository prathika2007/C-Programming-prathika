#include <stdio.h>
int main()
{
    FILE *fp;
    char name[50];
    char college[50];
    char address[50];
    char phone[15];
    int age;
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter College: ");
    scanf("%s", college);
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Address: ");
    scanf("%s", address);
    printf("Enter Phone: ");
    scanf("%s", phone);
    fp = fopen("data.txt", "w");
    fprintf(fp, "%s\n", name);
    fprintf(fp, "%s\n", college);
    fprintf(fp, "%d\n", age);
    fprintf(fp, "%s\n", address);
    fprintf(fp, "%s\n", phone);
    fclose(fp);
    fp = fopen("data.txt", "r");
    fscanf(fp, "%s", name);
    fscanf(fp, "%s", college);
    fscanf(fp, "%d", &age);
    fscanf(fp, "%s", address);
    fscanf(fp, "%s", phone);
    fclose(fp);
    printf("Name: %s\n", name);
    printf("College: %s\n", college);
    printf("Age: %d\n", age);
    printf("Address: %s\n", address);
    printf("Phone: %s\n", phone);
    return 0;
}