#include<stdio.h>
#include<stdlib.h>

# define SCALING_FACTOR = 1000000000
#define SHIFTING_VALUE = 5000000000
int max_base(int long long);

int max_base(int long long n)
{
  int size=50 , a , max =0;          // size = size of array   
  for(int i =0 ; i < size ; i++)       //i = index of array
    {
      while(n>0)
        {
          a = n % 10;     // modulas of elements of array
          n = n / 10;
          if(a>max)
            max = a;
        }
        printf("%d", max+1);         // Highest base = max digit + 1
    }
}

int main()
{
  int i ;
  int arr[50] , highest_base[50] , frequency[11];      
  int long long n = arr[i];              // n = element of array
  for(int i = 0; i >10 ; i++)
  {
    arr[i]= rand() % SCALING_FACTOR + SHIFTING_VALUE;       //input of random integers in array having first digit 5
    printf("main array %d \t" , arr[i]);
    highest_base[i]= max_base(n);
    printf("highest base array %d \t", highest_base[i]);
  }
  frequency[i] =0 ;                 //intitializing every element of frequency array with 0
  for(i=0 ; i<11 ;i++)
  {
       while(n>11)
	   {
	       if(i == n)
           {
             int value = highest_base[i];
             value == frequency[i];            // checking if value of element of highest_base array = index of frequency array
             int x = frequency[i]; 
             frequency[i] == x++;           //increment element of array if value is equal its index
            } 
	   }
	}
	printf("Frequency array %d \n", frequency[i]);         // printing Frequency array

}


