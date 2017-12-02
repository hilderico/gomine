#include <stdio.h>
#include <stdlib.h>

void MostraASCII(){
    printf("Codigo ASCII");
    for(int x = 0; x < 255; x++){
        printf("|-- %x = \'%c\'--|",x,x);
    }

}

int main()
{
    char a[10];
    a[0] = '\x87';
    printf("GOMINE!!!\n A Minetest/craft based game\n\n");
    printf("O Minerador\n\n");
    printf("Cabe%ca,Tronco,Bra%cos, Pernas\n\n",a[0],a[0]);

    int braco = 1;
    int perna = 1;

    printf("status\n\n");

    if (braco == 0){
        if(perna == 0){
            printf("Parado\n");
        }
    }

    if (braco == 0){
        if(perna == 1){
            printf("Andando\n");
        }
    }
    if (braco == 1){
        if(perna == 0){
            printf("Minerando\n");
        }
    }
    if (braco == 1){
        if(perna == 1){
            printf("Correndo e Minerando\n");
        }
    }








    return 0;
}
