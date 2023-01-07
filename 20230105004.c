#include <stdio.h>
#include <stdlib.h>

int fat(int n){
    int i,nf = 1;
    for (i = 1; i <= n ;i++){
        nf = nf*i;
    }
    return nf;
}



int main(){

  int num,y;
  scanf("%d",&num);
  y = fat(num);
  printf("Fatorial de %d = %d", num,y);
}
