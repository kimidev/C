/*Header files include in the project*/
#include<stdio.h>
/**
 * Pointer:
 *      Pointer is a variable holding the memory address.
 * 
 * Declaration type:
 *      variable_type *variableName;
 *     
 *      * There are two special pointer operators: '*' and '&'. '&' used to read the memory address of variable.         
 */
/**
 * Pointer function
 *      Store and retrive address of function
 * 
 * Declaration type:
 *      returnType (*pointerName)(Passing argument or value);
 * 
 *  * Return type and arguments may be in pointer type
 */
int (*fp)(int a, int b);

/**
 * local function declearation in module
 */
int add(int c, int d);
int sub(int e, int f);
int mul(int g, int h);
int div(int i, int j);

int add(int c, int d){
    return c + d;
}
int sub(int e, int f){
    return e - f;
}
int mul(int g, int h){
    return g * h;
}
int div(int i, int j){
    return i / j;
}
/**
 * Pointer array function
 *      Store and retrive address of array of function
 * 
 * Declaration type:
 *      returnType (*pointerName[])(Passing argument or value) = {
 *          Function_1,
 *          Function_2,
 *        };
 * 
 *  * Return type and arguments may be in pointer type
 */

int (*fpArray[])(int a, int b) = {
    add,
    sub,
    mul,
    div,
};

int main(void)
{
    printf("Pointer example:\n");

    int varA = 10,varB = 5;
    int *ptr1, *ptr2;
    /**
     * Assign value for the pointer
     */
    ptr1 = &varA;
    ptr2 = &varB;
    printf("Pointer to read vaule from address:\n");
    printf("\tptr1 = &varA\t varA : %d \t *ptr1 : %d\n", varA,*ptr1);
    printf("\tptr2 = &varB\t varB : %d \t *ptr2 : %d\n", varB,*ptr2);
    /**
     * adding of two number pointer value 
     */
    *ptr1 = *ptr1 + *ptr2;
    printf("Pointer to radding of two number from address: *ptr1 = *ptr1 + *ptr2\n");
    printf("\tAddition value of two pointer address value : %d\n", *ptr1);
    /**
     * Pointer to addressing
     */
    printf("Pointer to addressing: ptr1 address : %d\n", ptr1);
    ptr1++;
    printf("Pointer to addressing: ptr1++ address : %d\n", ptr1);
    ptr1--;
    printf("Pointer to addressing: ptr1-- address : %d\n", ptr1);
    /**
     * Pointer to access char array
     */
    printf("Pointer to access char array: char varC[] = Hello World\n");
    char varC[] = "Hello World";
    char *ptr3;
    ptr3 = varC;
    while(*ptr3){ 
        printf("Pointer to addressing: ptr1-- address : %d \t value : %c\n", ptr3,*ptr3);
        ptr3++;
    }
    /**
     * Pointer function call
     */
    printf("Pointer function call: fp = add\n");
    fp = add;
    printf("Pointer function call: addition operation value \n\t2\n\t3\n return value is:%d\t\n",fp(2, 3));
    /**
     * Pointer array of function call
     */
    printf("Pointer array of function call\n");
    for(int index = 0; index < 4; index ++)
    {
        switch (index)
        {
        case 0:
            printf("Pointer function call: addition operation value \n\t2\n\t3\n return value is:%d\t\n",fpArray[index](2, 3));
            break;
        case 1:
            printf("Pointer function call: subraction operation value \n\t2\n\t3\n return value is:%d\t\n",fpArray[index](2, 3));
            break;
        case 2:
            printf("Pointer function call: multiplication operation value \n\t2\n\t3\n return value is:%d\t\n",fpArray[index](2, 3));
            break;
        case 3:
            printf("Pointer function call: division operation value \n\t2\n\t3\n return value is:%d\t\n",fpArray[index](2, 3));
            break;
        default:
            break;
        }
    }
    
    return 0;
}
