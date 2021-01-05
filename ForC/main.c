//
//  main.c
//  ForC
//
//  Created by Arifeen Mahmud on 5/1/21.
//  Copyright © 2021 Arifeen Mahmud. All rights reserved.
//

#include <stdio.h>


//void print_array(int arr[], int size);

void print_array(int arr[], int size)
{
int i;
for (i=0; i<size; i++)
printf("\t %d", arr[i]);
}
int main() {
    
    int even_nums[5] = {2,4,6,8,10};
    int odd_nums[5] = {1,3,5,7};
    int childrens_age[5] = {4,5,6 };
    int zero_init[5] = {0};
    
    printf("\nStart\n");
    printf("\n Childrens age:\n");
    print_array(childrens_age,5);

    printf("\nEven Number:\n");
    print_array(even_nums,5);
    
    printf("\nOdd Number:\n");
    print_array(odd_nums,5);
    
   
    printf("\n Zero Init:\n");
    print_array(zero_init,5);
    
    return 0;
}



