#strcat function concadinates the two strings
#include<stdio.h>
#include<string.h>
int main(){
    char name[23] = "RAGHAV";
    char conc[89] = " hello";
    strcat(name,conc);
    printf("%s",name);
    return 0;
}
