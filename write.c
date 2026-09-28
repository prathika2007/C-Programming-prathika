
#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("aboutme.txt", "w");
    if (fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }
    fprintf(fp, "My name is Prathika.\n");
    fprintf(fp, "I am an engineering student.\n");
    fprintf(fp, "I am learning C programming.\n");
    fprintf(fp, "I like learning new technologies.\n");
    fclose(fp);
    printf("Information written to file successfully.");
     return 0;
}