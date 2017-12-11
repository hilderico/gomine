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

void mapa(int esp){
	printf("\n");
	int x = 1;
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
	
}


int main()
{
	mapa(2);
	
	/*
	
	pessoa ps = (8,5,7)
	
	0 2 2 2 2 2 2 2 2 2
	00 2 2 2 2 2 2 2 2 2
	000 2 2 2 2 2 2 2 2 2
	0000 2 2 2 2 2 2 2 2 2
	00000 2 2 2 2 2 2 * 2 2
	000000 2 2 2 2 2 2 2 2 2
	0000000 2 2 2 2 2 2 2 2 2
	00000000 2 2 2 2 2 2 2 2 2
	000000000 2 2 2 2 2 2 2 2 2
	0000000000 1 1 1 1 1 1 1 1 1
	 000*00000 1 1 1 1 1 1 1 1 1
	  00000000 1 1 1 1 1 1 1 1 1
       0000000 1 1 1 1 1 1 1 1 1
		000000 1 1 1 1 1 1 1 1 1
		 00000 1 1 1 1 1 1 1 1 1
		  0000 1 1 1 1 1 1 * 1 1
		   000 1 1 1 1 1 1 1 1 1
			00 1 1 1 1 1 1 1 1 1
			 0 1 1 1 1 1 1 1 1 1
			 
	*/
	
	
	
    return 0;
}

