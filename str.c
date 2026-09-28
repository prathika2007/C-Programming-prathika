#include<stdio.h>
#include<string.h>
int main() {
    char str[700];
    int i,len;
    printf("Enter a  sentence string:");
    scanf("%s",str);
    len=strlen(str);
    printf("Reverse:");
    for(i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}