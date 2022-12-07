#include "my_mat.h"
#include <stdio.h>
#include <math.h>


int main(){
    int mat[10][10] = {{0}};
    char l = '0';
    while(l != 'D'){
        scanf("%c ",&l);
        if(l == 'A'){
            int x,y;
            for(x=0; x<10 ; x++){
                for(y=0; y<10; y++){
                    scanf("%d", &mat[x][y]);
                } 
            }
           getMatrix(mat);  
        }
        else if( l == 'B'){
            int i ,j;
            scanf("%d",&i);
            scanf(" %d",&j);
            isthereRoute(mat,i,j);
        }
        else if(l == 'C'){
             int i ,j;
            scanf("%d",&i);
            scanf(" %d",&j);
            theShortestRoute(mat,i,j);

       }
    }
    return 0;
}