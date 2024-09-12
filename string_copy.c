#to make a copy of a string
#include<stdio.h>
#include<string.h>
int  main(){
    char st[]="raghav";
    char cpy[39];
    strcpy(cpy,st);
    printf("%s %s",cpy,st);
    return 0;
}
