#include<stdio.h>
add(){
    printf("enter the numbers: %d");
    //declare num1 and num2 to hold the given numbers
    int num1, num2;

    //Taking the input
    scanf("%d %d", &num1, &num2);

    //Calculating the sum of num1 and num2
    int sum = num1 + num2;
   
    //Printing the addition of two numbers in C
    printf("The sum of the given numbers is: %d \n\n", sum);

   // return 0;
}
