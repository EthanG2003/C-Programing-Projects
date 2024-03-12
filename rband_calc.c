/**************************************************************
 * Ethan Gerard
 * CSCI 109
 * Lab 10 - Strings n Resistance Bands
 * 4/27/2023
 *
 * Purpose: Calculate the resistance given 3 resistance bands.
 *
 ********************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//---------------------------------------------------------------------
//-- Function to Calculate Resistance from Color Bands
double rband_calc(char *FrstB, char *SecndB, char *ThrdB) {

    double Sig1, Sig2, Mul;
    double Res;

//if(strcmp(FrstB, "Black") == 0 || strcmp(FrstB, "Brown") == 0 || strcmp(FrstB, "Red") == 0 || strcmp(FrstB, "Orange") == 0 || strcmp(FrstB, "Yellow") == 0 || strcmp(FrstB, "Green") == 0 || strcmp(FrstB, "Blue") == 0 || strcmp(FrstB, "Violet") == 0 || strcmp(FrstB, "Grey") == 0 || strcmp(FrstB, "White") == 0)
//{
     if(strcmp(FrstB, "Black") == 0) {
        Sig1 = 0;
     }
    else if(strcmp(FrstB, "Brown") == 0) {
        Sig1 = 10;
    }
    else if(strcmp(FrstB, "Red") == 0) {
        Sig1 = 20;
    }
    else if(strcmp(FrstB, "Orange") == 0) {
        Sig1 = 30;
    }
    else if(strcmp(FrstB, "Yellow") == 0) {
        Sig1 = 40;     
    }
    else if(strcmp(FrstB, "Green") == 0) {
        Sig1 = 50;
    }
    else if(strcmp(FrstB, "Blue") == 0) {
        Sig1 = 60;
    }
    else if(strcmp(FrstB, "Violet") == 0) {
        Sig1 = 70;
    }
    else if(strcmp(FrstB, "Grey") == 0) {
        Sig1 = 80;
    }
    else if(strcmp(FrstB, "White") == 0) {           // This is White
        Sig1 = 90;
    } 
//}
    else {
        Sig1 = 99999999.9;
    }
    
//if(strcmp(SecndB, "Black") == 0 || strcmp(SecndB, "Brown") == 0 || strcmp(SecndB, "Red") == 0 || strcmp(SecndB, "Orange") == 0 || strcmp(SecndB, "Yellow") == 0 || strcmp(SecndB, "Green") == 0 || strcmp(SecndB, "Blue") == 0 || strcmp(SecndB, "Violet") == 0 || strcmp(SecndB, "Grey") == 0 || strcmp(SecndB, "White") == 0)
//{
     if(strcmp(SecndB, "Black") == 0) {
        Sig2 = 0;
     }
    else if(strcmp(SecndB, "Brown") == 0) {
        Sig2 = 1;
    }
    else if(strcmp(SecndB, "Red") == 0) {
        Sig2 = 2;
    }
    else if(strcmp(SecndB, "Orange") == 0) {
        Sig2 = 3;
    }
    else if(strcmp(SecndB, "Yellow") == 0) {
        Sig2 = 4;     
    }
    else if(strcmp(SecndB, "Green") == 0) {
        Sig2 = 5;
    }
    else if(strcmp(SecndB, "Blue") == 0) {
        Sig2 = 6;
    }
    else if(strcmp(SecndB, "Violet") == 0) {
        Sig2 = 7;
    }
    else if(strcmp(SecndB, "Grey") == 0) {
        Sig2 = 8;
    }
    else if(strcmp(SecndB, "White") == 0) {           // This is White
        Sig2 = 9;
    } 
//}
    else {
        Sig2 = 0;
    }    
//if(strcmp(ThrdB, "Black") == 0 || strcmp(ThrdB, "Brown") == 0 || strcmp(ThrdB, "Red") == 0 || strcmp(ThrdB, "Orange") == 0 || strcmp(ThrdB, "Yellow") == 0 || strcmp(ThrdB, "Green") == 0 || strcmp(ThrdB, "Blue") == 0 || strcmp(ThrdB, "Violet") == 0 || strcmp(ThrdB, "Grey") == 0 || strcmp(ThrdB, "White") == 0)
//{
     if(strcmp(ThrdB, "Black") == 0) {
        Mul = 1;
     }
    else if(strcmp(ThrdB, "Brown") == 0) {
        Mul = 10;
    }
    else if(strcmp(ThrdB, "Red") == 0) {
        Mul = 100;
    }
    else if(strcmp(ThrdB, "Orange") == 0) {
        Mul = 1000;
    }
    else if(strcmp(ThrdB, "Yellow") == 0) {
        Mul = 10000;     
    }
    else if(strcmp(ThrdB, "Green") == 0) {
        Mul = 100000;
    }
    else if(strcmp(ThrdB, "Blue") == 0) {
        Mul = 1000000;
    }
    else if(strcmp(ThrdB, "Violet") == 0) {
        Mul = 10000000;
    }
    else if(strcmp(ThrdB, "Grey") == 0) {
        Mul = 100000000;
    }
    else if(strcmp(ThrdB, "White") == 0) {          // This is White
        Mul = 1000000000;
    } 
//}
    else {
        Sig2 = 1;
    }

    Res = ((Sig1 + Sig2) * Mul);
 
   return Res;
}



int main(void) {

    char    FrstB[8];
    char    SecndB[8];
    char    ThrdB[8];
    double  RValue;

    printf("\nWelcome to the Resistor Color Band Calculator!\n\n");
    
    printf("\tEnter your band 1 color: ");
    fgets(FrstB, sizeof(FrstB), stdin);
    FrstB[strlen(FrstB)-1] = '\0';
    
    printf("\tEnter your band 2 color: ");
    fgets(SecndB, sizeof(SecndB), stdin);
    SecndB[strlen(SecndB)-1] = '\0';
    
    printf("\tEnter your band 3 color: ");
    fgets(ThrdB, sizeof(ThrdB), stdin);
    ThrdB[strlen(ThrdB)-1] = '\0';

    printf("\n\tBased on your color of: %s, %s, %s\n", FrstB, SecndB, ThrdB);
    RValue = rband_calc(FrstB, SecndB, ThrdB);
    printf("\tYour resistance is %0.2lf Ohms\n\n", RValue);


    return 0;
}



