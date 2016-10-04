/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>

#include "merge.h"

void merge_sorted_arrays(int arr1[], int size1, int arr2[], int size2, int merged_arr[], int size_merged)
{
    int k = 0;
    int i = 0;
    int j = 0;
    
    while((i < size1) && (j < size2))
    {
        if(arr1[i] <= arr2[j])
        {
            merged_arr[k] = arr1[i];
            ++i;
        }
        else
        {
            merged_arr[k] = arr2[j];
            ++j;
        }

        ++k;
    }
           
    while(i < size1)
    {
        merged_arr[k] = arr1[i];
        ++i;
        ++k;
    }

    while(j < size2)
    {
        merged_arr[k] = arr2[j];
        ++j;
        ++k;
    }
}

void print_array(int arr[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}