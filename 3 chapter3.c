#include<stdio.h>

int main(){

     //-------- Conditional Statements --------//

    /*
    1. if-else statement

    Syntax:

    if(condition){
        do something
    }
    else{
        do something
    }

    Note: if we have only one condition for if and else then we can directly write it without curly bracket

    If we want to add multiple conditions then you can simply add else if

    Syntax:

    if(condition){

    }
    else if(condition){

    }
    else{

    }

    Note: while coming down if any one condition is true then it will not check further conditions.

    If we want that all our conditions should be checked irrespective of them being true or false, then we use only if everytime

    if(){

    }
    if(){

    }


    Eg:
        int number;

  printf("Enter the number");
  scanf("%d", &number);

  if(number >=0){
    printf("Number is positive");
    
    if(number % 2 == 0){
      printf("Number is even");
    }
    else{
      printf("Number is odd");
    }
  }
  else{
    printf("The number is negative");
  }
  




    //-------- Conditional Operators --------//

    a. Ternary Operator
    Used to make the if else code small and easy to read

    Syntax:

    Condition ? doSomething if TRUE : doSomething if FALSE
    (? -> Check karo , : -> nahi to)

    Eg:
    age >=18 ? printf("You are an adult") : printf("You are not adult");



    b. Switch

    Syntax:

    switch(number){
        case 1: do something;
            break;
        case 2: do something;
            break;
        default:
    }

    Note: Break is used to stop the code if the case is matched
          1,2,3 etc. are the constants with which the compiler will match

    Eg:

    int roll;

    printf("Enter your roll Number \n ");
    scanf("%d", &roll);

    switch(roll){

      case 28 : printf("Your name is Anushka");
      break;
      case 32  : printf("Your name is Pranali");
      break;
      case 30 : printf("Your name is Yash");
      break;
      default : printf("We dont know you");
    }

    ---IF you don't put break then the all cases under that case will print irrespective of it being matched to the expression----


    Eg2:

      char day;

    printf("Enter the day \n");
    scanf("%c" , &day);

    switch(day){
        
        case 'm' : printf("Monday \n");
        break;
        case 's' : printf("Sunday \n");
        break;
        default : printf("It is not valid");

    }

    Properties of Switch:

    a) Cases of switch can be in any order
    b) Nested Switch (switch inside a switch) are allowed


    
    //-------- Practice Questions --------//

    Q1. Write a Program if a Student is passed or failed (>30 pass, <=30 is fail)

    int marks;

  printf("Enter your marks \n");
  scanf("%d", &marks);

  if(marks<=30){
    printf("You have failed in exam");
  }
  else if(marks > 30 && marks > 100){
    printf("The marks are invalid");
  }
  else{
    printf("You have passed in exam");
  }

  ----If we want to write in ternary operator form then ----

  marks<= 30 ? printf("You have failed in exam") :  printf("You have passed in exam");


    <--- Very Important Question --->

    Q2. Will this code: give error, print first con. or print second con.

    int a = 2;

    if(a=4){
        printf("x is equal to 1");
    }
    else{
        printf("x is not equal to 1");
    }

    Here first a was 2 and in the if condition we put a=4 which means a has a value of 4 which is true so first statement will print.

    if we put x==4 then it would check the condition and move as we thought

    if we put 0 in if condition then it will be false
    constants in if condition then it will be true


    Q3. Write a program to find if a character entered by user is upper case or not.


      char letter;

  printf("Enter your character");
  scanf("%c", &letter);

  if(letter>='A' && letter<='Z'){
    printf("It is upper case");
  }
  else if(letter >='a' && letter<='z'){
    printf("It is lower case");
  }
    else{
    printf("Your character is incorrect");
    } 


    Q.4. Write a program to check if a given number is Armstrong number or not.

    


    Q5. Write a program to check whether the number is a natural number.

      
















    








    2. Switch Statement
    
    
    
    */


    return 0;
}