//this programm belong to calculate the average marks for 5 subject
#include <stdio.h>

int main(void) {

  int marks=0,total=0;
  //get the five marks from user 
  for(int i=0;i<5;i++){
    printf("Enter your marks - 0%d : ",i+1);
    scanf("%d",&marks);
    total+=marks;
  }
  printf("-------------------------------------\n");
  printf("Your average is : %.2f",(total/5.0));
  return 0;
}