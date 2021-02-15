//
//  main.c
//  ifElse
//
//  Created by Arifeen Mahmud on 15/2/21.
//  Copyright © 2021 Arifeen Mahmud. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,max;
    printf("Enter First Number");
    scanf("%d",&a);
    printf("Enter Second number: ");
    scanf("%d", &b);
    if (a>b) {
    max = a;
    }
    else{
    max = b;
    }
    printf("Maximum is %d\n", max);

    return 0;
}
