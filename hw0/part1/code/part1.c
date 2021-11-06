//
// Created by Snir on 11/1/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "part1.h"


void printSizeMsg();
void printNumbersMsg();
void printResults(int num, int m,int num_array[], int power_array[]);

int isPowerOfTwo(int num); //power of two, -1 o/w

int main ()
{
    int num, idx, m=0;
    printSizeMsg();
    scanf("%d", &num);
    if( num <  1 )
    {
        printf("Invalid size\n");
        return 0;
    }
    //printf("num is %d \n", num);
    int num_array[num];
    int power_array[num];
    printNumbersMsg();
    int i;
    for(i =0; i<num; i++)
        if(!scanf( "%d", &num_array[i] ))
        {
            printf("Invalid number\n");
            return 0;
        }
    //for(i =0; i<num; i++)
    //    printf( "%d\n", num_array[i] );
    for(i=0;i<num;i++)
    {
        idx = isPowerOfTwo(num_array[i]);
        power_array[i] = idx;
        if(idx != -1)
            m += idx;
    }
    printResults(num, m, num_array, power_array);

    return 0;
}

void printSizeMsg()
{
 printf("Enter size of input:\n");
}
void printNumbersMsg()
{
    printf("Enter numbers:\n");
}
int isPowerOfTwo(int num)
{
    if ( num < 0)
        return -1;
    int exp, counter ;
    exp = 0 ;
    counter = 1;
    while ( counter < num )
    {
        ++exp;
        counter *= 2;
    }
    if( counter == num )
        return exp;
    return -1;
}
void printResults(int num, int m,int num_array[], int power_array[])
{
    for(int i =0; i<num; i++)
    {
        if( power_array[i] != -1)
        {
            printf("The number %d is a power of 2: %d = 2^%d\n", num_array[i], num_array[i], power_array[i]);
        }
    }

    printf("Total exponent sum is %d\n", m);
}