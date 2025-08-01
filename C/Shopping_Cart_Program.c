//scanf() stops collecting after it identifies a white space


#include <stdio.h> 
#include <string.h>

int main (){

    // SHOPPING CART PROGRAM

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("You have bought %d %s(s) at %c%.2f, totaling to %c%.2f.", quantity, item, currency, price, currency, total);


return 0;

}
