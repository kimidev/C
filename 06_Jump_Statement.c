/*Header files include in the project*/
#include<stdio.h>
#include<stdlib.h>
/**
 * Jump statement is used to exit or move the execution from a code block.
 * 
 * Types of jump statements:
 *         1. return
 *         2. go-to
 *         3. break
 *         4. continue
 */
/*main routine */
int main()
{
    printf("Jump statement example: \n");
    printf("input \n\t0. continue\n\t1. break\n\t2. goto\n\t3. return\n\t4. exit\n");
    /**
     * break and continue statement are used along with any one of loop.
     * return and goto statement are used anywhere of the program.
     */
    char done, ch;
    done = 0;
    while(!done){
        ch = getchar();
        if(ch == '0'){
            done = 1;
            printf("Continue statement print \n");
            continue;
        }
        else if(ch == '1'){
            printf("Break statement print \n");
            break;
        }
        else if(ch == '2'){
            goto loop;
        }
        else if(ch == '3'){
            printf("return statement print \n");
            return 1;
        }
        else if(ch == '4'){
            printf("exit statement print \n");
            exit(0);
        }
        else{
            putchar(ch);
        }
    loop:{
        printf("goto statement print \n");  
    }
    }

    return 0;
}