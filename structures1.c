#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    char name[10];
    float salary;
};
int main(){
    struct employee e1,e2;
    e1.code=4511;
    strcpy(e1.name,"raghav");
    e1.salary=45.78;
    printf("%d %f %s",e1.code,e1.salary,e1.name);
    return 0;
}
