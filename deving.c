#include <stdio.h>

void imprime(int a){
    int x = 0;
    while(x < a + 1){
       printf("0");
       x++;
    }
}

int main()
{

    imprime(10);

    printf("\n");


    return 0;
}

