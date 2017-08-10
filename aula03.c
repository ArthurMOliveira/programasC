#include <stdio.h>

int main(void){

char nome[1024];

gets (nome);
/* outros metodos
gets();
scanf();
fgets(nome,1024,stdio);
*/
puts (nome);

return 0;
}
