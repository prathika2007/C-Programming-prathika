#include<stdio.h>
int main() {
    FILE*fp;
    fp=fopen ("aboutme.txt","w");
    if(fp==NULL)
    {
        printf("File could not be opened.");
        return 1;
    }
    fprintf(fp,"My name is Prathika.\n");
    fprintf(fp,"I am an engineering student in bitm.\n");
    fprintf(fp,"I am currently in the course of c programming.\n");
    fprintf(fp,"I am stronger in communcation and have a good connection with every one.\n");
    fclose(fp);
    printf("Information written to file sucessfully.");
    return 0;
}