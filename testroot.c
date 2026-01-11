//gcc -o testroot testroot.c
#include <stdio.h>
#include <stdlib.h>
int main(int argc , char *argv[]){
    int n=0;
    FILE *f1;
    f1=fopen("/bin/testroot","w");
    if (f1!=NULL){
        fclose(f1);
        printf("device is root \n");
    }else printf("device is not root \n");
    printf("\n");
    return 0;
}
