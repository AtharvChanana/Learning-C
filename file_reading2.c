#to read any character in a file
#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("raghav.txt","r");
    char c = fgetc(ptr);
    printf("%c",c);
    return 0 ;
}
