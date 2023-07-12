/*Header files include in the project*/
#include<stdio.h>

/*Global variables are defined without any keyword and defined outside of the 
  methos and inside the module*/
int varE = 10;

/*External variables are defined with the keyqord of "extern"*/
int verF = 10;
extern int verF;

/*Types of data types in variables in c*/
int  varG = 10;
char varH = 'a';
float varI = 1.0001;
double varJ = 1.11;

/*main routine */
int main()
{
    /*Auto variable are default format data type or use auto keyword*/
    int varA = 10;
    auto int varB = 10;
    /*static variables are defined with keyword of "static"*/
    static int varC = 10;
    /*Local variables are defined without any keyword inside the any method*/
    int varD = 10;

    /*print string in console */
    printf("Hello world\n");
    /*print char variable in console */
    printf("Char variable value : %c\n",varH);  
    /*print int variable in console */
    printf("Int variable value : %d\n",varG); 
    /*print int variable in console */
    printf("float variable value : %f\n",varI);
    /*print int variable in console */
    printf("Double variable value : %f\n",varJ);

    /*return the value from the method*/
    return 0;

}