// Program: Assigment_03 - Ex03
// Author: Nguyen Van Dung - 20203877
// Date: 12/07/2022

#include <stdio.h>
#include<iostream>
int main (void)
{
    int  ratingCounters[11], i, response, n;
    for ( i = 1;  i <= 10;  ++i ){
        ratingCounters[i] = 0;
	}
	printf("Enter number of responses ");
	scanf("%d", &n);
    printf ("Enter your responses\n");
    for ( i = 1;  i <= n;  ++i ) {
    	if(i == 999) break;
    	else {
    		scanf ("%i", &response);
        	if ( response < 1 || response > 10 )
            	printf ("Bad response: %i\n", response);
       	 	else
           	 	++ratingCounters[response];
		}
    }
    printf ("\n\nRating   Number of Responses\n");
    printf ("------ -------------------\n");
    for ( i = 1;  i <= 10;  ++i )
        printf ("%4i%14i\n", i, ratingCounters[i]);
    return 0;
}