/*Header files include in the project*/
#include<stdio.h>

/**
 * Loop statement is used for execute a particular statement in multiple iteration with exit conditon.
 * 
 * Types of loops statement:
 *          1. for loop 
 *          2. while loop
 *          3. do-while loop
 * 
 */
/*main routine */
int main()
{
    int iteration = 0;

    printf("Loop types example \n");
    /**
     * for loop statement:
     *      for loop is entry conditional check loop statement.  
     * Declaration type:
     *      for(conditional operator variable initialize; condition for exit; condition iteration increament)
     * 
     *      Note: Declaration can be done with or without any of the statement. But condtion for exit is must in this.
     */
    for(iteration = 0; iteration < 2; iteration++){
        printf("for loop iteration number :#%d\n",iteration);
    }
    /**
     * while loop statement:
     *      while loop is entry conditional check loop statement. 
     * Declaration type:
     *      while(condition){
     *          iteration increament;
     *      }
     */
    iteration = 0;
    while (iteration < 2)
    {
        printf("while loop iteration number :#%d\n",iteration);
        iteration++;
    }

    /**
     * do-while loop statement:
     *      do-while loop is exit conditional check loop statement. 
     * Declaration type:
     *      do{
     *          iteration increament;
     *      }while(condition)
     */
    iteration = 0;
    do
    {
        /* code */
        printf("do-while loop iteration number :#%d\n",iteration);
        iteration++;
    } while (iteration < 2);

    return 0;
}