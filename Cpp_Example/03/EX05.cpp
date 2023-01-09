// Program: Assigment_03 - Ex05
// Author: Nguyen Van Dung - 20203877
// Date: 12/07/2022
#include <stdio.h>
int main (void){ 
       int numbers[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };    
       int  i, j;    for ( j = 0;  j < 10;  ++j )        
       for ( i = 0;  i < j;  ++i )           
        numbers[j]  +=  numbers[i];
    for ( j = 0;  j < 10;  ++j )        
    printf ("%i ", numbers[j]);   
     printf ("\n");    return 0;}
     //output: 1 1 2 4 8 16 32 64 128 256 