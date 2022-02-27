#include <stdio.h>
#include <stdlib.h>

void main()

{
/*
int a,b,c;

 printf("Enter the 3 numbers:");

scanf("%d\n%d\n%d\n",&a,&b,&c);

if((a>b)&&(a>c))

printf("%d is the largest",a);

else if(b>c)

printf("%d is the largest",b);

else

printf("%d is the largest",c);

if((a<b)&&(a<c))

printf("%d is the smallest",a);

else if(b<c)

printf("%d is the smallest",b);

else

printf("%d is the smallest",c);

getch();
*/

int num1=20, num2=30, num3=40;


int min_number;
        if (num1 <= num2 && num1 <= num3) {
            min_number = num1;
        }
        else if (num2 <= num1 && num2 <= num3) {
            min_number = num2;
        }
        else {
            min_number = num3;
        }
        printf("min %d", min_number);

        int max;
        if (num1 >= num2 && num1 >= num3) {
            min_number = num1;
        }
        else if (num2 >= num1 && num2 >= num3) {
            min_number = num2;
        }
        else {
            min_number = num3;
        }
        printf("min %d", max);

}
