#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define scaling_factor 1000000000
#define shifting_factor 5000000000

int highest_base(unsigned int , int);

int highest_base(unsigned int n , int highest)
{
    int digit;
    if(n==0)
        return (highest);
    else
    {
        digit =n %10;
        
        if(digit > highest)
            highest = digit;
        
        n = n/ 10;
        highest = highest_base(n, highest);
    }
    return (highest);

}


int main(void)
{
    long unsigned int n;
    int highest;

    n= rand() % scaling_factor + shifting_factor;
    highest = highest_base(n,0);
    printf("The highest Base of %lu is %d", n , highest  +1);

    return 0;
}