#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("raghav.txt","a");
    int num = 100;
    fprintf(fptr,"%d",num);//this function appends something in a file
    // it appends at the end of file without removing the original content of file
    fclose(fptr);
    return 0;
}
