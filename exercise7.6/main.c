/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: mvasanth
 *
 * Created on October 3, 2016, 8:41 PM
 */

#include <stdio.h>
#include <stdlib.h>

#include "merge.h"

/*
 * This program takes two sorted arrays as the input and merges them into a single sorted array.
 * Note: if both the arrays contain the same element, then two occurances of the element are stored
 * in the merged array.
 * TODO:
 *     1) user inputs the array sizes and arrays
 *     2) check to see if the user has entered a sorted array, end the program with a message otherwise
 *     3) utility functions to get a single number as well as arrays from the user
 *     4) move the print_array function to the utilities folder and include that folder in this project 
 */
int main() 
{
    int arr1[] = {3, 5, 7, 8, 9};
    int size1 = 5;
    int arr2[] = {7, 8, 9};
    int size2 = 3;
    
    int merged_arr[size1 + size2];

    merge_sorted_arrays(arr1, size1, arr2, size2, merged_arr, size1 + size2);
    
    print_array(arr1, size1);
    
    print_array(arr2, size2);
    
    print_array(merged_arr, size1 + size2);
    
    return (EXIT_SUCCESS);
}

