#include <stdio.h> 


// a program to print Fahrenheit-Celsius table

/* prints : 
0       -17
20      -6
40      4
60      15
80      26
100     37
120     48
140     60
160     71
180     82
200     93
220     104
240     115
260     126
280     137
300     148 */

                    //version 1
/* main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;  //lower limit of temp table
    upper= 300; // upper limit
    step= 20; //step size

    fahr = lower;
    while (fahr <= upper){
        celsius = 5 * (fahr-32) / 9; //the reason we multiply by 5 and then divide by 9 instead of just multiplying by 5/9 
                                    // is that in C integer division truncates: any fractional part is discarded. 
                                    // since 5 and 9 are integers, 5/9 would be truncated to zero and so all the Celsius temps would be reported as zero
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
} */

                //version 2 more accurate
                //because we have float variables to handle decimal values
/* main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;  
    upper= 300; 
    step= 20; 


    // a header before the loop
    printf("Fahr  Celsius\n");
    printf("----  -------\n");

    fahr = lower;
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0); 
        printf("%3.0f %6.1f\n", fahr, celsius); //here %3.0f says that a floating-point number is to be printed AT LEAST 3 characters wide, with no decimal point and no fraction digits.
                                                //the %6.1f describes another number that is to be printed AT LEAST 6 characteers wide, with 1 digit after the decimal point.
        fahr = fahr + step;
    }
} */

        // EXERCISE :
        //write a program to print the corresponding Celsius to Fahrenheit with a for loop
main() {
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}