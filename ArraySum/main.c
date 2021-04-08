//
//  main.c
//  ArraySum
//
//  Created by Arifeen Mahmud on 8/4/21.
//  Copyright © 2021 Arifeen Mahmud. All rights reserved.
//

#include <stdio.h>

int ArraySum(int MyArray[], int size) {
    int sum = 0;

    for(int i=0; i < size; i++) {
        sum = sum + MyArray[i];

}
return sum;
}

int main() {
    int MyNumberArray [7] = {20,30,50,60,10,66,100};
    int sum_of_array = ArraySum(MyNumberArray,7);
    printf("Array Sum = %d \n", sum_of_array);
        
}
