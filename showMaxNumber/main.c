//
//  main.c
//  showMaxNumber
//
//  Created by Arifeen Mahmud on 15/2/21.
//  Copyright © 2021 Arifeen Mahmud. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//Show the max Number amongs 3 Inputs Numbers...
 int a, b, c, max;
 printf("Enter 3 Number \n");
 scanf("%d%d%d", &a,&b,&c);
 if (a>b && a>c)
 max = a;

 else if (b>c)
 max = b;
 else
 max = c;

 printf("Maximum is %d\n", max);

    
    return 0;
}
