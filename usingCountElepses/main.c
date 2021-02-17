//  main.c
//  usingCountElepses
//
//  Created by Arifeen Mahmud on 17/2/21.
//  Copyright © 2021 Arifeen Mahmud. All rights reserved.
/*
This example passes a variable number of arguments to a function,
stores each argument in an array, and prints each argument.
 */
#include <stdio.h>
#include <stdarg.h>
                                                                                
void vout(int max, ...)
{
   va_list arg_ptr;
   int args = 0;
   char *days[7];
                                                                                
   va_start(arg_ptr, max);
   while(args < max)
   {
      days[args] = va_arg(arg_ptr, char *);
      printf("Day:  %s  \n", days[args++]);
      }
   va_end(arg_ptr);
}


int main(void)
{
   vout(3, "Sat", "Sun", "Mon\n");
   vout(5, "Mon", "Tues", "Wed", "Thurs", "Fri");
}
                                                                                
