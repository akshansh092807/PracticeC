#include<stdio.h>
int main(){
  int age;
  printf("Enter age: ");
  scanf("%d", &age);
  if (age >= 18){
    printf("Adult.They can vote.\n");
  } else {
    printf("Not Adult. They can't vote.\n");

  }
  printf("Thank you");
    return 0;
}