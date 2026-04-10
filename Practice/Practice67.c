#include<stdio.h>
void namaste();
void bonjour();

int main(){
printf("Enter f for french & i for indian : ");
char ch;
scanf("%c", &ch);
 namaste ();
    
return 0;
}
void namaste() {
    printf("Namaste\n");
    bonjour();
}
void bonjour(){
    printf("Bonjour\n");
}