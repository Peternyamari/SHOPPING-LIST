#include <stdio.h>
#include <stdlib.h>

int main()
{
    double quantity;
    double cost;
    double total;
    double Mtotal;
    double Ntotal;

    printf("===================\n");
    printf("MY SHOPPING LIST\n");
    printf("===================\n");

    printf("LIST OF ITEMS TO BUY\n");
    printf("1.2KG SALT\n");
    printf("2.5KG FLOUR\n");
    printf("3.2LTR C.OIL\n");
    printf("4.300GRMS SOAP\n");
    printf("TOTAL CASH AT HAND KSH 10000\n");

    printf("1.SALT\n");
    printf("ENTER QUANTITY IN KG: ");
    scanf("%lf",&quantity);
    printf("ENTER COST PER KG: ");
    scanf("%lf",&cost);

    printf("COST : %f\n" ,cost*quantity);

    printf("2.SOAP\n");
    printf("ENTER QUANTITY PER KG: ");
    scanf("%lf",&quantity);
    printf("ENTER COST IN KSH: ");
    scanf("%lf",&cost);
    printf("COST : %f\n" ,cost*quantity);

    printf("3.FLOUR\n");
    printf("ENTER QUANTITY PER KG: ");
    scanf("%lf",&quantity);
    printf("ENTER COST IN KSH: ");
    scanf("%lf",&cost);
    printf("COST : %f\n" ,cost*quantity);

    printf("ENTER TOTAL CASH AT HAND: ");
    scanf("%lf",&Mtotal);
    printf("ENTER TOTAL SPENT :");
    scanf("%lf",&Ntotal);
    printf("TOTAL COST : %f" ,Mtotal-Ntotal); //THIS IS THE CALCULATION OF TOTAL COST OF ITEMS TO BUY AND THE SUB TOTAL/*




    return 0;
}
