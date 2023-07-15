/*Header files include in the project*/
#include<stdio.h>
/*Types of function calls in C programming
    1. Funtion without argument and without return data
    2. Funtion with argument and without return data
    3. Funtion without argument and with return data
    4. Funtion with argument and with return data*/
/*Based on the argurment types function classfied into two type
    1. Function argument pass by value
    2. Function argument pass by reference*/

/*Function declerations */
void func1(void);
void func2(int printDataValue);
int  func3(void);
int  func4(int a, int b);
int funArgu1(int c);
int funArgu2(int *d);

/*1. Funtion without argument and without return data
    Usage : Execute any static operation like print statement*/
void func1(void){
    printf("Hello World!!!\n");
}


/*3. Funtion with argument and without return data
    Usage : Execute any dynamic operation like print data, update flags, update operation status*/
void func2(int printDataValue){
    printf("Print Data is %d", printDataValue);
}

/*3. Funtion without argument and with return data
    Usage : Execute any static operation like read constand data or reference value */
int  func3(void){
    int a = 10;
    printf("Returned value is %d", a);
    return a;
}

/*4. Funtion with argument and with return data
    Usage : This is most common function type used for data processing and update data or status*/
int  func4(int a, int b){
    int addValue = 0;
    addValue = a + b;
    return addValue;
}

/* 1. Function argument pass by value
    Usage: Arugument as value psssed in function*/
int funArgu1(int c){
    int returnvalue = 0;
    printf("Function passed value is :%d\n", c);
    c++;
    returnvalue = c;
    return returnvalue;
}

/* 2. Function argument pass by reference
    Usage: Arugument as value psssed in function*/
int funArgu2(int *d){
    printf("Function passed reference value is :%d\n", *d);
    *d += 1;
    return *d;
}

/*main routine */
int main()
{
    int printData = 10;
    int addValue1 = 10, addValue2 = 5;
    int returnValueFunc3 = 0, returnValueFunc4 = 0;
    int printPassedValue = 10, printReferenceValue = 10;
    int returnPassedValue = 10, returnReferenceValue = 10;

    printf("Example #1. Funtion without argument and without return data\n");
    func1();

    printf("\n\nExample #2. Funtion with argument and without return data\n");
    func2(printData);

    printf("\n\nExample #3. Funtion without argument and with return data\n");
    returnValueFunc3 = func3();
    printf("Example #3 return value is %d", returnValueFunc3);

    printf("\n\nExample #4. Funtion with argument and with return data\n");
    returnValueFunc4 = func4(addValue1, addValue2);
    printf("Example #4 return value is %d", returnValueFunc4);

    printf("\n\nExample #5. Function argument pass by value\n");
    printf("Function argument passed value is : %d\n",printPassedValue);
    returnPassedValue = funArgu1(printPassedValue);
    printf("Function argument passed value is : %d, Function argument return value is : %d\n",printPassedValue, returnPassedValue);
    
    
    printf("\n\nExample #6. Function argument pass by reference\n");
    printf("Function argument passed by reference  value is : %d\n",printPassedValue);
    returnPassedValue = funArgu2(&printPassedValue);
    printf("Function argument passed by reference  value is : %d, Function argument return by reference  value is : %d\n",printPassedValue, returnPassedValue);
   

    /*return the value from the method*/
    return 0;

}