//
//  main.c
//  C program Based on TWO A.P's
//
//  Created by yogendra singh on 3/3/21.
//  Copyright © 2021 yadavboy. All rights reserved.
//




//Consider the below series:
//0,0,2,1,4,2,6,3,8,4,10,5,12,6,14,7,16,8
//This series is a mixture of 2 series all the odd terms in this series form even numbers in ascending order and every even terms is derived from the previous term using the formula (x/2)
//Write a program to find the nth term in this series.

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int n ,  res ,term;
    printf("Enter a Number \n ");
    scanf("%d" , &n);
// for odd positions : term = (n+1)/2
    if (n%2==1) {
       
        term = (n+1)/2;
        res = 2*(term-1);
        printf(" %d is a nth term of the series \n",res );
        }
    // for even positions : term = n/2
    if (n%2==0) {
   
    term = n/2;
    res = (term-1);
    printf(" %d is a nth term of the series \n",res );
    }
    
    return 0;
}
