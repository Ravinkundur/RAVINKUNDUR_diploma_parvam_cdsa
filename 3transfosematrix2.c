#include<stdio.h>
int main(){
    int arr[3][3]={
        {2,5,6},
        {4,7,8},
        {2,6,10}
    };
    int transpose[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
          transpose[j][i]=-arr[i][j];
        }
    }
    printf("Transpose Matrix: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",transpose[j][i]);
        }
        printf("\n");
    }
    return 0;
}