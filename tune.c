#include<stdio.h>
#include<string.h>
int palindrome(char str[])
{
    int i,j;
    j=strlen(str)-1;
    for(i=0;i<j;i++, j--);
    {
        if(str[i] !=str[j])
        return 0;
    }
    return 1;
}
int main()
{
    char str[100];
    printf("Enter a string:");
    scanf("%s",str);
    if(palindrome(str))
    printf("Palindrome");
    else
    printf("Not palindrome");
    return 0;
}