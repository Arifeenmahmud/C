//
//  main.c
//  RecursiveFunction
//
//  Created by Arifeen Mahmud on 14/1/21.
//  Copyright © 2021 Arifeen Mahmud. All rights reserved.
//

#include <stdio.h>


void printMsg(unsigned int n) {
if (n==0)
return;

printf("Hello World \n");
n--;
printMsg(n);
}



int main(int argc, const char * argv[]) {
    
    printMsg(5);
    return 0;
}
