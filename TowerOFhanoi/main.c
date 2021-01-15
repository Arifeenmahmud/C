//
//  main.c
//  TowerOFhanoi
//
//  Created by Arifeen Mahmud on 15/1/21.
//  Copyright © 2021 Arifeen Mahmud. All rights reserved.
//

#include <stdio.h>

void toh(int n, int source, int aux, int dest){
if(n==1){
printf("Move the disk from tower no: %d to tower no: %d \n",source, dest);
return;
}
toh(n-1, source, dest, aux);

toh(1, source, aux, dest);

toh(n-1, aux, source, dest);
}

int main() {
    toh(3, 1, 3, 2);
return 0;
}
