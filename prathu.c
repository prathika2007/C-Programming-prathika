#include <stdio.h>
int main()
{
    FILE *fp;
    char name[20], college[20], address[20], phone[15];
    int age;
    fp = fopen("data.txt", "w");
    fprintf(fp, "Prathika BITMCollege 19 Bellary 9945759147");
    fclose(fp);
    fp = fopen("data.txt", "r");
    fscanf(fp, "%s %s %d %s %s",
           name, college, &age, address, phone);
    printf("Name: %s\nCollege: %s\nAge: %d\nAddress: %s\nPhone: %s\n",
           name, college, age, address, phone);
    fclose(fp);
    return 0;
}