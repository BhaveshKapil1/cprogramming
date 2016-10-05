/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: mvasanth
 *
 * Created on October 2, 2016, 8:09 PM
 */

#include <stdio.h>
#include <stdlib.h>

#include "ones_and_zeros.h"

/*
 * Prints the following matrix
 *      +1  +1  +1  +1  0
 *      +1  +1  +1  0   -1
 *      +1  +1  0   -1  -1
 *      +1  0   -1  -1  -1
 *      0   -1  -1  -1  -1
 */


#define MATRIX_SIZE 5

int main(int argc, char** argv) 
{ 
    (void)(argc);
    (void)(argv);
    
    int mat[MATRIX_SIZE][MATRIX_SIZE];
    
    populate_ones_and_zeros_matrix(mat, MATRIX_SIZE);
    
    print_ones_and_zeros(mat, MATRIX_SIZE);
    
    return (EXIT_SUCCESS);
}

