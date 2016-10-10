/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "pascal.h"

#include <stdio.h>

void populate_pascal_triangle(int* p_mat, int size)
{
    int (*mat)[size] = (int (*)[size])p_mat; 
    
    int i, j;
    
    for(i = 0; i < size; ++i)
    {
        for(j = 0; j < size; ++j)
        {
            if(i == j || j == 0)
            {
                mat[i][j] = 1;
            }
            else
            {
                if(j > i)
                {
                    break;
                }
                else
                {
                    mat[i][j] = mat[i-1][j-1] + mat[i-1][j];
                }
            }
        }
    }
}

void print_matrix(int* matp, int size)
{
    int (*mat)[size] = (int (*)[size])matp; 
    
    for(int r = 0; r < size; ++r)
    {
        for(int c = 0; c < size; ++c)
        {
            if(c <= r)
            {
                printf("%d     ", mat[r][c]);
            }
        }
        printf("\n");
    }
}