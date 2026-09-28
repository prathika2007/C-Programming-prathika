#include<stdio.h>
int main() {
    char str[100];
    int count=0,i;
    printf("Enter a string:");
    scanf("%s",str);
    for(i=0;str[i] !='\0';i++){
    if((str[i]='a'|| str[i]='z')||(str[i]>='A' ||str[i]<='Z')){    
    if(str[i]=='a'|| str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' ||  str[i]=='I' || str[i]=='O' || str[i]=='U')
    
    {
        count++;
    }
}
    }
    printf("number of consonants=%d",count);
    return 0;
}