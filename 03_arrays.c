/*Header files include in the project*/
#include<stdio.h>

/**
 * Array is a collection of variables of the same type that are refered throug a common name.\
 * Generally array is clssified under the catagory of data structure.
 * 
 * Types of array:
        1. Single-diamension array
        2. Two-diamensional array
        3. Multi-diamensional array
/
/**
 * Single diamensional array:
 *      This array type have only horizontal diamesion of data storage.
 * 
 * Declaration type:
 *      type_of_var array_name[size] = {Array_index_0_value, Array_index_1_value};
 * 
 *      Note: Declaration can be done with or without size or value datum.
 */
int array1[] = {1, 2};
int array2[10];
/**
 * Two diamensional array:
 *      This array type have only horizontal, vertical diamesion of data storage.
 * 
 * Declaration type:
 *      type_of_var array_name[h_size][v_size] = {{Array_index_00_value, Array_index_01_value},
 *                                                {Array_index_10_value, Array_index_11_value}};
 * 
 *      Note: Declaration can be done with or without size or value datum.
 */
int array3[2][2] = {
    {1, 2},
    {3, 4}
};
/**
 * Multi-diamensional array:
 *      This array type have multiple diamension based on the usage of data storage.
 * 
 * Declaration type:
 *      type_of_var array_name[x_size][y_size][z_size] = {
 *                                                          {
 *                                                             {Array_index_000_value, Array_index_001_value},
 *                                                             {Array_index_010_value, Array_index_011_value}
 *                                                          },
 *                                                          {
 *                                                             {Array_index_100_value, Array_index_101_value},
 *                                                             {Array_index_110_value, Array_index_111_value}
 *                                                          }
 *                                                        };
 * 
 *      Note: Declaration can be done with or without size or value datum.
 */
int array4[2][2][2] = {
                        {
                            {1, 2},
                            {3, 4}
                        },
                        {
                            {5, 6},
                            {7, 8}
                        },
                      };  
/*main routine */
int main()
{
    printf("Single-diamensional array:\n");
    /**Print single diamensioanl array data */
    for(int i = 0; i < 2; i++){
        printf("%d\t", array1[i]);
    }
    printf("\n");

    printf("Two-diamensional array:\n");
    /**Print Two diamensioanl array data */
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d\t", array3[i][j]);
        }
        printf("\n");
    }

     printf("Multi(Three)-diamensional array:\n");
    /**Print Multi(Three) diamensioanl array data */
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for (int k = 0; k < 2; k++){
                printf("%d\t", array4[i][j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}