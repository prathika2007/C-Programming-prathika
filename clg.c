#include<stdio.h>
int main() {
    FILE*fp;
    char name[20],collage[20],address[20],phone[12];
    int age;
    fp=fopen("data.txt","w")
    fprintf(fp,"Prathika bitm  19 bellary 9945759147");
    fp=fopen=("data.txt","r");
    fscanf(fp,"%s %s %d %s %s",name,collage,age,address,phone);
    fprintf("Name: %s\nCollege: %s\nAge: %d\nAddress: %s\nPhone: %s\n",
           name, college, age, address, phone);
    fclose(fp);
    return 0;
    }