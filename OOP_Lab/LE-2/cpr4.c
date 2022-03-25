//4. Write a program to perform the addition of two matrices.  
#include<stdio.h>
void main(){
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int B[3][3]={{9,8,7},{6,5,4},{3,2,1}};
    int ApB[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            ApB[i][j]=A[i][j]+B[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",ApB[i][j]);
        }
        printf("\n");
    }
}