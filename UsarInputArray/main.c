//
//  main.c
//  UsarInputArray
//
//  Created by Arifeen Mahmud on 9/1/21.
//  Copyright © 2021 Arifeen Mahmud. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    printf("Enter Size of array: ");
    scanf("%d", &n);

    int x[n];
    int i;
    for(i=0;i<n;i++){
    printf("Enter element to index %d:", i);
    scanf("%d",&x[i]);
    };
    
    printf("Content of array: \n");
    for(i=0;i<n;i++){
        
    printf("x[%d] = %d \n",i,x[i]);
    };
    
    return 0;
}
