#include "my_mat.h"
#include <stdio.h>
#include <math.h>


void getMatrix(int mat[10][10]){
    int k,i,j;
    for( k=0;  k < 10 ; k++){
        for( i=0 ; i < 10 ; i++){
            for( j=0 ; j < 10; j++){
                if(i != j){
                    if(mat[i][j] == 0 && mat[i][k] != 0 && mat[k][j] != 0){
                        mat[i][j] = mat[i][k] + mat[k][j];
                    }
                    else if(mat[i][j] != 0 && mat[i][k] != 0 && mat[k][j] != 0) {
                        mat[i][j]=(int)fmin((double)mat[i][j],((double)mat[i][k]+mat[k][j]));
                    }
                }

            }
        } 
    }
}

void isthereRoute(int mat[10][10],int i,int j){
    if( mat[i][j] > 0 ){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}
void theShortestRoute(int mat[10][10],int i,int j){
    if(mat[i][j] == 0){
        printf("%d\n",-1);
    }
    else{       
    printf("%d\n",mat[i][j]);
    }
} 



