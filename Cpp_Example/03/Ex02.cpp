// Program: Assigment_03 - Ex02
// Author: Nguyen Van Dung - 20203877
// Date: 12/05/2022
#include<stdio.h>
int main() {
    int values[10];
    int index;
         for(index = 0; index < 10; index++) values[index] = 0;
        for ( index = 0;  index < 10;  ++index )      
            printf ("values[%i] = %i\n", index, values[index]);
    return 0;
}