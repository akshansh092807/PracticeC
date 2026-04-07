#include<stdio.h>
#include<math.h>
int main(){
    // If number is even or odd
// even -> 1
// odd -> 0
int x;

  printf("Enter a number: ");
  scanf("%d", &x);

  printf("%d", x%2 == 0);
    return 0;
}