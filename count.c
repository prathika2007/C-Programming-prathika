#include<stdio.h>
int main() {
    char ch;
    char str1[100];
    int i,count= 0;
    printf("Enter a word:");
    fgets(str1,100,stdin);
    // scanf("%s",&str1);
    printf("Enter a letter:");
    scanf("%c",&ch);
    for(i=0;str1[i] !='\0';i++){
        if(str1[i] == ch){
        count++;
        }
    }
    printf("Occurrence of %c = %d",ch,count);
    return 0;
}