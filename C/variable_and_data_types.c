//Variable = A resusable container for a value. Behaves as if it were the value it contains. 
    //int - %d - whole numbers (4 bytes in modern system)
    //float - %f - single-precision decimal number (4 bytes)
    //double - %lf - double-precision decimal number (8 bytes)
    //char - %c - single character (1 byte) (C, %, $, etc.) 
    //char[] - %s - array of characters (size varies)
    //bool - %d - true (1) or false (0) (1 byte, requires <stdbool.h>) 


#include <stdio.h> 
#include <stdbool.h>

int main (){

    char grade = 'A';
    char symbol = '!';
    char currency = '$';

    printf("Your grade is %c\n", grade);
    printf("Your favoirte symbol is %c\n", symbol);
    printf("The currency is %c\n", currency);
    
    //Array of Characters
    char name[] = "Jean Pierre Cespedes";
    char email[] = "JEANPCQ@Random.com";
    
    printf("Hello %s\n", name);
    printf("Your email is %s\n", email);

    //Boolean 
    bool isOnline = 1;
    bool forSale = 0;

    if(isOnline){
        printf("You are ONLINE\n");
    }
    else{
        printf("You are OFLINE\n");
    }

    if(forSale){
        printf("Not for Sale.\n");
    }
    else{
        printf("For Sale.\n");
    }
    return 0;

}
