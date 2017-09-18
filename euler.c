#include <stdio.h>
#include <stdlib.h>

int main(){

  // 1
  // counter
  int i;

  // for some reason, if you don't initalize sum, the answer is incorrect?
  int sum = 0;
  for(i = 0; i < 1000; i++){
    // adds the number to the sum if the number is multiple of 3
    if(i % 3 == 0){
      sum += i;
    }
    // only checks if the number isn't a multiple of 3 
    else if(i % 5 == 0){
      sum += i;
    }
  }
  printf("The sum of all the multiples of 3 and 5 less than 1000 is %d.\n", sum);
  // a better approach would have been to start with the multiples of 3 and 5 instead of going through all the numbers,
  // you generate all possible numbers, removing the extra ones
  
  // 6

  // n(n + 1)(2n + 1) / 6
  long sumsquare1_100 = 100 * (100 + 1) * (2 * 100 + 1)/6;
  // n(n + 1) / 2
  long sum1_100 = 100 * (1 + 100)/ 2;
  long diff = sum1_100 * sum1_100 - sumsquare1_100;
  
  printf("The difference between the squares of the first 100 positive integers and the square of the sum of those integers is %ld.\n", diff);
  
  
  return 0;
}
