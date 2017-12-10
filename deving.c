#include <stdio.h>

void imprime(int a,char b){
    int x = 0;
    while(x < a){
       printf("%c",b);
       x++;
    }
}

void espaco(int a){
	int x = 0;
    while(x < a){
       printf(" ");
       x++;
    }
	
}

void linha(int x){
	int y = 0;
	imprime(x,'0');
	espaco(1);
	while(y < 10){
		imprime(1,'1');
		espaco(1);
		y++;
	}		
}

void linha1(int x){
	int y = 0;
	espaco(x);
	imprime(10 - x,'0');
	while(y < 10){
		espaco(1);
		imprime(1,'1');			
		y++;
	}		
}


int main()
{
	printf("\n");
	int x = 1;
	int esp = 9;
	while(x < 10 + 1){
		espaco(esp);
		linha(x);
		printf("\n");
		x++;
	}
	x = 1;
	while(x < 10){
		espaco(esp);
		linha1(x);
		printf("\n");
		x++;
	}
    return 0;
}

