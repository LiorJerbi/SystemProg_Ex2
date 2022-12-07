#include "my_mat.h"
#include <stdio.h>
#include <math.h>


int main(){
    int mat[10][10] = {{0}}; //constructor of the matrix and initailizing to 0 all indexes.
    char l = '0';  
    while(l != 'D'){  //when the user press D program stops.
        scanf("%c ",&l); //the user enter a letter to decide which function to run.
        if(l == 'A'){ //when the user press A enter here.
            int x,y;
            for(x=0; x<10 ; x++){ //fills the matrix with values.
                for(y=0; y<10; y++){
                    scanf("%d", &mat[x][y]);
                } 
            }
           getMatrix(mat);  //Doing Floyd-Warshall Algorithem on the matrix.
        }
        else if( l == 'B'){ //when the user press B enter here.
            int i ,j;
            scanf("%d",&i);
            scanf(" %d",&j);
            isthereRoute(mat,i,j); //user enter 2 vertices to find if theres a route between them.
        }
        else if(l == 'C'){ //when the user press C enter here.
             int i ,j;
            scanf("%d",&i);
            scanf(" %d",&j);
            theShortestRoute(mat,i,j); //user enter 2 vertices to find the weight of the shortest route between them.

       }
    }
    return 0;
}