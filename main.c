#include <stdio.h>
#include <stdlib.h>

void MostraASCII(){
    printf("Codigo ASCII\n\n");
    for(int x = 0; x < 256; x++){
        printf("|-- %d = \'%c\'--|\n",x,x);
    }
    printf("\n\n");

}

char InsereASCII(int y){
    int x = 0;
    char a[256];
    for(x = 0;x < 256;x++){
        a[x] = (char) x;
    }
    return a[y];
}

void status(int pmbraco, int pmperna){

    int locbraco = pmbraco;
    int locperna = pmperna;
    printf("status\n\n");

    if (locbraco == 0){
        if(locperna == 0){
            printf("Parado\n\n");
        }
    }

    if (locbraco == 0){
        if(locperna == 1){
            printf("Andando\n\n");
        }
    }
    if (locbraco == 1){
        if(locperna == 0){
            printf("Minerando\n\n");
        }
    }
    if (locbraco == 1){
        if(locperna == 1){
            printf("Correndo e Minerando\n");
        }
    }
}

void setatribute(int *pmbraco,int *pmperna){
    int opc = 0;
    int locperna = *pmperna;
    int locbraco = *pmbraco;
    while(opc != 99){
        printf("Escolha uma op%c%co:\n\n",InsereASCII(135),InsereASCII(198));
        printf("1 . Setar Bra%co\n",InsereASCII(135));
        printf("2 . Setar Perna\n\n");
        printf("99. Sair\n\n");
        printf("> ");
        scanf("%d",&opc);
        printf("\n\n");
        if(opc == 1){
            printf("Bra%co -> ",InsereASCII(135));
            scanf("%d",&locbraco);
            printf("\n\n");
            printf("Bra%co = %d\n",InsereASCII(135),locbraco);
            *pmbraco = locbraco;
        }
        if(opc == 2){
            printf("Perna -> ");
            scanf("%d",&locperna);
            printf("\n\n");
            printf("Perna = %d\n",locperna);
            *pmperna = locbraco;
        }
        if((opc < 1 && opc != 99) || (opc > 2 && opc != 99))
        {
            printf("OP%c%cO INV%cLIDA\n\n",InsereASCII(128),InsereASCII(199),InsereASCII(181));
        }
    }

}












int main()
{
    int x = 42;
    char a[256];
    a[x] = (char) x;
    printf("a[%d] = %c\n",x,a[x]);
    printf("GOMINE!!!\n A Minetest/craft based game\n\n");
    printf("O Minerador\n\n");
    printf("Bra%cos, Pernas\n\n",InsereASCII(135));

    int braco = 1;
    int perna = 1;

    int opc = 0;

    while(opc != 99){
        printf("Escolha uma op%c%co:\n\n",InsereASCII(135),InsereASCII(198));
        printf("1 . Status\n");
        printf("2 . Setar Atributos\n");
        printf("3 . Tabela ASCII\n");
        printf("99. Sair\n\n");

        printf("> ");
        scanf("%d",&opc);
        printf("\n\n");

        if(opc == 1){
            status(braco, perna);
        }
        if(opc == 2){
            setatribute(&braco,&perna);
        }
        if(opc == 3){
            MostraASCII();
        }
        if((opc < 1 && opc != 99) || (opc > 3 && opc != 99))
        {
            printf("OP%c%cO INV%cLIDA\n\n",InsereASCII(128),InsereASCII(199),InsereASCII(181));
        }

    }
    return 0;
}
