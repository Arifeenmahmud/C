//
//  main.c
//  2DarrayProject
//
//  Created by Arifeen Mahmud on 10/1/21.
//  Copyright © 2021 Arifeen Mahmud. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
    int r,c;

    printf("Enter Number of Sales person: ");
    scanf("%d",&r);
    printf("Enter Number of Items: ");
    scanf("%d",&c);
    printf("\n\n");
    //Declare 2D array
    double saleData [r][c];
    
    //Input saleData into the array.
    int i, j;
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
    printf("sale amt for salesperson no %d item no %d: ", i+1, j+1);
    scanf("%lf", &saleData[i][j]);
    }
    }
    //Display Report.
    printf("-------------------------------\n");
    printf("Sale data\n");
    printf("--------------------------------\n\n");

    double total = 0.0;
    double comm;
    for(i=0;i<r;i++){
    printf("sale data for salesperson no. %d\n",i+1);
    printf("---------\n");
    total = 0.0;
    for(j=0;j<c;j++){
    printf("\t Item %d: $%0.2lf\n", i+1, saleData[i][j]);
    total += saleData[i][j];
    }
    printf("\t Total: $%0.2lf\n", total);
        comm = 0.1 * total;
    printf("\t Commition is: $%0.2lf\n",comm);
    printf("\n\n");
    }
    
    printf("\n\n\n");
    return 0;
}
