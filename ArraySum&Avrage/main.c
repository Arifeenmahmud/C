//
//  main.c
//  ArraySum&Avrage
//
//  Created by Arifeen Mahmud on 9/1/21.
//  Copyright © 2021 Arifeen Mahmud. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, const char * argv[]) {


    int n;
    printf("Enter Require Numbers: ");
    scanf("%d",&n);

    int x[n];
    int i;

    //    srand(time(NULL));
    srand( (unsigned int) time(NULL) );
    for(i=0;i<n;i++){
    x[i] = rand() % 100;
    };
    printf("Content of the array: \n");
    int sum = 0;
    for(i=0;i<n;i++){
    printf("%4d \t",x[i]);
    sum = sum + x[i];
    };

    printf("sum is= %d\n", sum);


    double avg = (double)sum / n;
    printf("Avarage of the array: %lf",avg);
    
    
    printf("\n \n");
    return 0;
}
