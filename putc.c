#this fucntion writes a new character
#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("atharv.txt","w");
    fputc('c',ptr);
    return 0;
}
