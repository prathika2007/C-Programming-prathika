#include<stdio.h>
struct employ {
    int id ;
    char name[20];
    float salary;
};
int main(){
    struct employ s1[4]={
        {1,"prathika",20000},
        {2,"amogha",23000},
        {3,"megha",45000},
        {4,"aparna",67000}
    };
    s1[1].salary +=10000;
    for(int i=0;i<4;i++){
        printf("id:%d\n",s1[i].id);
        printf("name:%s\n",s1[i].name);
        printf("salary:%.1f\n\n",s1[i].salary);
    }
    return 0;
}


