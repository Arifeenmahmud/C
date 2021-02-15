//
//  main.c
//  JudgeTeenager
//
//  Created by Arifeen Mahmud on 15/2/21.
//  Copyright © 2021 Arifeen Mahmud. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
     int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age>=13 && age<=19){
    printf("Yes! Your are a teen ager\n");
    }else
    printf("You are not a Teen ager!\n");
    }
