//                                                        session-3  
// (task 1) 
// Even or Odd

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;

  printf("Enter your number:");
  scanf(" %d",&num);
  if(num%2){
    printf("%d is odd",num);
  }else{
    printf("%d is even",num);
}


    return 0;
}
 
 *********************************************************
 // (task 2 )
 //  Determine the student's score
 #include <stdio.h>
 #include <stdlib.h>

int main()
{
 int deg;
 printf("Enter the student's grade: ");
 scanf("%d",&deg);
 if(deg<50&&deg>=0){
    printf("F");
 }else if(deg<60&&deg>=50){
     printf("D");
 }else if(deg<70&&deg>=60){
     printf("C");
 } else if(deg<80&&deg>=70){
     printf("B");
 } else if(deg<=100&&deg>=80){
     printf("A");
 }else{
    printf("ERROR");
 }

    return 0;
}
