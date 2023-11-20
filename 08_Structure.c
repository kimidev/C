
/*Header files include in the project*/
#include<stdio.h>
/**
 * Structure:
 *     Structure is a collection fo variablesnreferneced under one name, providing a convenient means of keeping related information together.
 * 
 * Declaration type:
 *      struct struture_name;
 *     
 *      Structure are decelared by using the keyword called "strcut". 
 *     
 * */
struct addVar
{
    /* data */
    int a;
    int b;
};

/**
 * Structure bit fields
 *          Is method to define and customize the structure variables size in the scale of bits
 * 
 * Note : Mostly bitfield are used in bit operations like flags, communicaiton protocols.
 * */
struct bitfield{
    int var1    : 1; //limiting the integer variable range as 1 bit
    char var2   : 4; //limiting the char variable range as 2 bit
    long var3   : 5; //limiting the long variable range as 3 bit
};
/**
 * Strcture padding
 *          the process of adding one or more empty bytes between the different data types to align data in memory
 * */
struct structPad
{
    /* data */
    int var1;
    char var2;
    long var3;
};
/*attribute method to structure padding */
struct structPad_Attribute
{
    /* data */
    int var1;
    char var2;
    long var3;
}__attribute__((packed));;
/*pragme pack method to structure padding */
#pragma pack(1)
struct structPad_pragma
{
    /* data */
    int var1;
    char var2;
    long var3;
}__attribute__((packed));;

/**
 * local function declearation in module
 */
int add(int c, int d);
int sub(struct addVar *inputStruct);
/**
 * local function definition in module
 */
int add(int c, int d){
    return c + d;
}
int sub(struct addVar *inputStruct){
    return inputStruct->a - inputStruct->b;
}

int main(void)
{
    printf("Pointer example:\n");

    /*Strcture variables are access only by objects*/
    struct addVar addStrctObj;
    struct structPad structPad;
    struct structPad_Attribute structPad_Attribute;
    struct structPad_pragma structPad_pragma;

    /*Assign value to the strcture members*/
    addStrctObj.a = 20;
    addStrctObj.b = 10;
    printf("Struture variables are a = %d, b = %d", addStrctObj.a, addStrctObj.b);

    /*Adding two strcture variables*/
    printf("Addition of two strcture variables is : %d\n", add(addStrctObj.a, addStrctObj.b));

    /*Passing structure through into a function*/
    printf("Subtraction of two strcture variables by passing structure to the function : %d\n", sub(&addStrctObj));
    
    /*Struture padding example*/
    printf("Structure padding Normal strcture size: %d\n", sizeof(structPad));
    printf("Structure padding attribute strcture size: %d\n", sizeof(structPad_Attribute));
    printf("Structure padding pragma pack strcture size: %d\n", sizeof(structPad_pragma));

    return 0;
}