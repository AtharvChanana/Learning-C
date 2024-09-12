#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    char name[80];
    float salary;
};
int main(){
    struct employee facebook[120];
    facebook[0].code = 12;
    strcpy(facebook[1].name,"raghav");
    facebook[2].salary = 21.897;
    printf("%d %s %f",facebook[0].code,facebook[1].name,facebook[2].salary);
    return 0;
}
