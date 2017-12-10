#include <stdio.h>

void Percurso(int origx, int origy, int origz,
              int destx, int desty, int destz)
{
    while((origx != destx) || (origy != desty) || (origz != destz)){
        printf("origx = %d\n",origx);
        printf("origy = %d\n",origy);
        printf("origz = %d\n",origz);
        getchar();
        if(origx < destx){
         origx++;
        }
        if(origx > destx){
         origx--;
        }
        if(origy < desty){
         origy++;
        }
        if(origy > desty){
         origy--;
        }
        if(origz < destz){
         origz++;
        }
        if(origz > destz){
         origz--;
        }
    }
}

