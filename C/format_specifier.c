//Format specifier = Special tokens that begin with a % symbol followed by a character that specifies the data type.
//                    Followed by a character that specifies the data type and optional modifiers (width, precision, flags).
//                    They control how data is displayed or interpreted.

#include <stdio.h> 

int main (){

// Width 

int num1 = 1;
int num2 = 10;
int num3 = 100;


printf(" \n");
printf("Learning Width\n");
printf("%4d\n", num1); //Including 4 character's starting to left
printf("%-4d\n", num2); //Including 4 character's starting to the right
printf("%04d\n", num3); //Including 4 character's starting to the left contains 0


int num4 = 999;
int num5 = -999;

printf(" \n");
printf("Learning Flags\n");
printf("%+d\n", num4); //Display negative/positive values
printf("%+d\n", num5); //Display negative/positive values


//Precision

float price4 = 19.99;
float price5 = 1.50;
float price6 = -100.00;

printf(" \n");
printf("Learning Precision\n");
printf("%f\n", price4); //Default Display
printf("%.2f\n", price5); //Only show hunderths decimal point. (Will round)
printf("%.3f\n", price6); //Only show thousanths decimal point. (Will round)

float price7 = 15.11;
float price8 = 20.00;
float price9 = -100.00;

printf(" \n");
printf("Combining All Steps\n");
printf("%+7.f\n", price7); //Default Display
printf("%+7.2f\n", price8); //Only show hunderths decimal point. (Will round)
printf("%+7.3f\n", price9); //Only show thousanths decimal point. (Will round)




return 0;



}
