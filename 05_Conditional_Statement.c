/*Header files include in the project*/
#include<stdio.h>
#include<stdlib.h>
/**
 * Conditional statement:
 *      * Conditional statement is used to execute a particular code based on the defined conditions.
 *      * Usually the conditional statement are used for check a particular data to execute particular code
 *        on the same sequence of execution.
 * 
 * Types of constional statement:
 *      1. if 
 *      2. if-else
 *      3. if-else ladder
 *      4. Nested if-else
 *      5. switch
 */
/*main routine */
int main()
{
    int varA = 10, varB = 5, varC = 15;

    printf("Conditional statement \n");
    
    printf("Conditional statement operate variable value \n");
    printf("varA : %d,\t varB : %d, \t varC: %d\n",varA, varB, varC);
    /**
     * if conditional statement:
     *          * Single condition to check particular data. if the condition true execute the sample code
     *            particular code or skip block of code in the conditional block.
     * Declaration type:
     *          if(condition){
     *              Conditional block code
     *          }
     */
    printf("if Conditional statement example: if(varA != 0)\n");
    if(varA != 0){
        printf("if Conditional statement true\n");
    }
   /**
     * if-else conditional statement:
     *          * Single condition to check particular data. if the condition true execute the sample code
     *            particular code or execute anaother block code.
     * Declaration type:
     *          if(condition){
     *              Conditional block code for true statement
     *          }
     *          else{
     *              Conditional block code for false statement
     *          }
     */
    printf("if-else Conditional statement example: if(varA > varB)\n");
    if(varA > varB){
        printf("if-else Conditional statement true\n");
    }
    else{
        printf("if-else Conditional statement false\n");
    }
    /**
     * if-else ladder conditional statement:
     *          * Multiple condition to check multiple data. if the condition true execute the sample code
     *            particular code or execute anaother block code.
     * Declaration type:
     *          if(condition){
     *              Conditional block code for true statement of if condition
     *          }
     *          else if(condition){
     *              Conditional block code for true statement of else if conditon
     *          }
     *          else{
     *              Conditional block code for false statement
     *          }
     */
    printf("if-else ladder Conditional statement example: if(varA < varB) else if(varC > varB)\n");
    if(varA < varB){
        printf("if-else ladder Conditional statement true of if condition\n");
    }    
    else if(varC > varB){
        printf("if-else ladder Conditional statement true else if conditon\n");
    }
    else{
        printf("if-else ladder Conditional statement false\n");
    }

    /**
     * nested if-else conditional statement:
     *          * Multiple condition to check multiple data. if the condition true execute the sample code
     *            particular code or execute anaother block code.
     * Declaration type:
     *          if(condition){
     *              Conditional block code for true statement of if condition
     *              if(condition){
     *                  Conditional block code for true statement of else if conditon
     *              }
     *          } 
     *          else{
     *              Conditional block code for false statement
     *          }
     */
    printf("Nested if-else Conditional statement example: if(varA < varB) else if(varC > varB)\n");
    if(varA < varB){
        printf("Nested if-else Conditional statement true of if condition\n");
        if(varC > varB){
            printf("Nested if-else Conditional statement true else if conditon\n");
        }
    }    
    else{
        printf("Nested if-else Conditional statement false\n");
    }
    
    /**
     * Switch statement:
     *          switch statement is multi-branch output single condition conditonal statement in c.
     * Declaration type:
     *          switch(condition){
     *              case 1: brach output code #1; break;
     *              case 2: brach output code #2; break;
     *              case 3: brach output code #3; break;
     *              default: break;
     *          }
     * Note: 1. Each case is seperated by break statement.break statement is used to stop the execution of the code in the particular block.
     *       2. default statement is optional, it will execute only all the case are fails
     */
    printf("Switch Conditional statement example: switch (varA) and varA = 2\n");
    varA = 2;
    switch (varA)
    {
    case 0:printf("Switch Conditional statement : case 0 is executed\n");break;
    case 1:printf("Switch Conditional statement : case 1 is executed\n");break;
    case 2:printf("Switch Conditional statement : case 2 is executed\n");break;
    case 3:printf("Switch Conditional statement : case 3 is executed\n");break;
    default:printf("Switch Conditional statement : default is executed\n");break;
    }    

    /**
     * other conditonal statemets in embedded system is
     *      1. Conditonal operator. 
     *          output = (condition) ? true statement or code block : false statement or code block;
     * 
     *      2. loop as conditon(but this will stop the operation till the condition fails)
     *          for(initialization; iteration check condition; iteration increament);
     *          while(condion);
     * 
     */
    printf("Conditional operator Conditional statement example: (varA!= 0) \n");
    (varA!= 0) ? printf("Conditional operator true statement\n") : printf("Conditional operator false statement\n");

    printf("forloop Conditional statement example: for(int varA = 0; varA < 1000; varA++) \n");
    varA = 0;
    printf("forloop Conditional statement used here as delay operation and i value is : %d\n",varA);
    for(; varA < 1000; varA++);
    printf("forloop Conditional statement used here as delay operation and i value is : %d\n",varA);


    return 0;
}