#include <stdio.h>

int main (void){

int i,k=0,j=0;
printf("    ");
for (i=0; i<16; i++){
    printf("%3x",i);
}
for (i=0; i<16; i++){
    printf("\n%3x ",i);
    for (k=j; k<j+16;k++){
        printf("%3c",k<32 ? 32 : k);
    }
    j=k;
}
return 0;
}
