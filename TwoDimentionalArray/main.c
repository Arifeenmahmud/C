#include <stdio.h>
#include <stdlib.h>

//
//  main.c
//  TwoDimentionalArray
//
//  Created by Arifeen Mahmud on 10/1/21.
//  Copyright © 2021 Arifeen Mahmud. All rights reserved.
//

int main(){
int x[4][3];
int i, j;
for(i=0;i<4;i++) {
    for(j=0;j<3;j++){
//x[i][j] = i*j;
    x[i][j] = i * j;
    }
    }


    printf("output of 2D array:\n");
    for(i=0;i<4;i++){
    for(j=0;j<3;j++){
    printf("%4d",x[i][j]);
    }
        printf("\n");
    }
    printf("\n");
return 0;
}
