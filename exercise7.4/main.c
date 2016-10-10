/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: mvasanth
 *
 * Created on October 9, 2016, 8:42 PM
 */

#include <stdio.h>
#include <stdlib.h>

#include "pascal.h"

#define MATRIX_SIZE 10

/*
 * This program prints the following triangle, popularly known as the Pascal's triangle
 * 1
 * 1 1
 * 1 2 1
 * 1 3 3 1
 * 1 4 6 4 1
 * 1 5 10 10 5 1
 * 
 */
int main() 
{
    int mat[MATRIX_SIZE][MATRIX_SIZE];
    
    populate_pascal_triangle(mat, MATRIX_SIZE);
    
    print_matrix(mat, MATRIX_SIZE);
    
    return (EXIT_SUCCESS);
}

