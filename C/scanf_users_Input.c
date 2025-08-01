//scanf() stops collecting after it identifies a white space


#include <stdio.h> 
#include <string.h>

int main (){

    int age = 0; 
    float gpa = 0.0f; //This tells the user the value should be a floating point number. 
    char grade = '\0' ; //Null Terminator
    char name[30] = ""; 

    printf("Enter your age: ");
    scanf("%d", &age); //& is the address variable. 

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    getchar();
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("My name is %s, I am %d years old and my gpa is %f.\n", name, age, gpa);

return 0;



}
