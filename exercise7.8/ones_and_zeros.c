/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

#include "ones_and_zeros.h"

void populate_ones_and_zeros_matrix(int mat[][MATRIX_SIZE], int size)
{
    int r, c;
    
    for( r = 0; r < size; ++r )
    {
        for( c = 0; c < size; ++c )
        {
            if( r + c == (size -1) )
            {
                mat[r][c] = 0;
            }
            else if( (c + r) < size )
            {
                mat[r][c] = +1;
            }
            else if( (r + c) >= size )
            {
                mat[r][c] = -1;
            }
        }
    }
}

void print_ones_and_zeros(int mat[][MATRIX_SIZE], int size)
{
    for(int r = 0; r < size; ++r)
    {
        for(int c = 0; c < size; ++c)
        {
            printf("%d  ", mat[r][c]);
        }
        printf("\n");
    }
}