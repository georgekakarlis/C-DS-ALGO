#include <stdio.h>


/* int main() {

    // integer array numbers of size 5
    //if we dont specify the size the compiler would know how much it is
    int numbers[5] = {3, 5, 2,7,1};

    //access element of array
    int firstNumber = numbers[0];

    int i;

    //a simple program that declares an array, initializes it, and prints its elements
    for(i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
} */



//a program to find the sum and average of elements in an array
//prints the sum is 66 and the average is 11.000000
int main(){

    int numbers[6] = {3, 5,7,22,23,6};
    //to get the number of elements we should divide the size of the entire array by the size of one element
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int sum = 0;
    double average;


    //loop to calculate the sum
    for(int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    //calculation of the average. it needs the double type to get a floating point result
    average = (double)sum / size;

    printf("The sum is %d and the average is %lf\n", sum, average);

    return 0;

}