// Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>
int main(){

    int row,colm,sum = 0;
    printf("Enter no of rows followed by no of columns: ");
    scanf("%d%d",&row,&colm);

    int arr[row][colm];

    for(int i = 0;i<row;i++){

        for(int j = 0;j<colm;j++){
            printf("Enter %d%d element in array: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i = 0; i< row; i++){
        // for(int j = 0; j<colm; j++){
        //     sum += arr[j][j]
        // }
        sum += arr[i][i];
    }

    printf("%d\n",sum);
    return 0;
}