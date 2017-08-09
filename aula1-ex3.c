#include <stdio.h>

int main (void){

int i,k=1,j=16;

for (i=1; i<16; i++){
    printf("%2x",i);
}
for (i=1; i<16; i++){
    printf("\n%x ",i);
    for (k=j; k<j+16;k++){
        printf("%2c",k);
    }
    j=k;
}
return 0;
}
