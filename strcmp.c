#include<stdio.h>
#include<string.h>
int main(){
    int a=strcmp("hello","bye");
    int b=strcmp("bye","hello");
    printf("%d\n",a);//output is 1
    printf("%d\n",b);//output is -1
    return 0;
}
