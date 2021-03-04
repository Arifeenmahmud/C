//
//  main.c
//  Swap Passing By address
//
//  Created by Arifeen Mahmud on 4/3/21.
//  Copyright © 2021 Arifeen Mahmud. All rights reserved.
//

#include <stdio.h>
// Passing By Address...
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

int main()
{
        
    int a,b;
    a=10;
    b=20;
    swap(&a,&b);
    printf("%d %d \n",a,b);
}
