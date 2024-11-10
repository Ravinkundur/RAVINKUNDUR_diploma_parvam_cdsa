#include<stdio.h>
int main(){
    int arr[4][4]={
        {2,3},
        {4,5}
        };
    printf("Diagonal Elements:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(i==j){
                printf("%d ",arr[i][j]);//
            }
        }
    }
    return 0;
}