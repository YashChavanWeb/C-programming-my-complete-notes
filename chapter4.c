#include<stdio.h>

int main(){

    //-------- Loop Control Instructions --------//

    /* 
    
    1. for loop
    
    Syntax: 
    
    for(initialization; condition; updation){

        do something;
    };

    The code goes like -> initialized, 
                        then checks condition, 
                        if it is true then performs code,
                        then updation , 
                        after that it again checks the condition, 
                        and if it is true then again performs code and then updation, 
                        the intial condition is checked only once.

    Eg:
     
     for(i=1; i<=5;i++){
        printf("Hello World");
     }

     --- If you want to print numbers from 1 to 100 then ----

     for(i=1; i<=100 ; i++){

        printf("%d", i);
     };


     Note; The loop can also run in reverse:

     for(i=10; i<=1; i--){
        printf("%d", i);
     }

    <------ i is called as iterator or counter variable ----->

    
    Increment and Decrement Operators

    1. i++ (Post Increment Operator)
    -> First use the value of i and then increment it
    Eg: int i = 1;
        printf("%d", i++); --- it will print 1  
        printf("%d", i); ---- it will print 2 as i value is incremented

    2. ++i (Pre increment operator) 
    -> First increment the value of i and then use it
    Eg: int i = 1;
        printf("%d", ++i); --- it will print 2  
        printf("%d", i); ---- it will print 2 again

    3. --i (Pre decrement Operator)

    4. i-- (Post decrement Operator)

    
    Loop Counter can be float or even Character

    Eg:
    float i;
    for(i = 1.0 ; i<=5.0; i++){
        printf("Hello World");
    }
    
    Eg:
    char let;
    for (let = 'a' ; let <='z' ; let++){
        printf("%c", let);
    }


    Infinite Loops
    The condition in between is left blank or is always false then this kind of loop occurs.

    Eg:
     for(i=1; i>1; i++){
      printf("I am Infinite");
    }

            OR

     for(i=1; ; i++){
      printf("I am Infinite");
    }

    
    
    2. while loop
    
    Syntax:

    while(condition){

        do something;
    }
    

    Eg;

    int i=1; ------> We intialize the variable outside the while loop

   while(i<=5){  ----------> here we write only the condition
    printf("My name is Yash \n");
    i++;    ---------> Updation is done inside the while loop
   }


   Q. Print the numbers from 0 to n if the value of n is given by user. 

   int i=0;
    int n;

    printf("Enter the value of n");
    scanf("%d", &n);

    while(i<=n){

    printf("%d", i);
    i++;
    
    }



    3. do while loop

    do{
        code

    }while(condition)
    
    
    Eg:
    int i=1;
    do{
        printf("%d",i);
        i++;    //very important to write or the loop will be infinite
    }while(i<=5);



    Q. Print the sum of first n natural numbers where n =4

    int n; int sum=0;

    printf("Enter the number ");
    scanf("%d"n);

    for(i=1;i<=n;i++){
        sum=sum+i;
    }

    printf("The value of sum is %d",sum);


    Q. Print the numbers in reverse order

    for(i=n;i>=1 (or) i==0;i++){
        sum=sum+i;
    }


    Q. Print the sum as well as the numbers in the same loop

    for(i=1; j=n; i<=n; j==0; i++; j--){
        
        sum=sum+i;

        printf("%d",j);
        }

        printf("The sum is %d",sum);


    Q. Print the table of 2

    for(i=1; i<=10 ; i++){
        n = n*i;
        printf("%d",n);

    }



    //-------- Break and Continue --------//   

    1. Break
    Get out of all the loops no matter what (exit from loop)


    Q. Keep taking numbers as input until the user enters an odd number

    
    int num;
   
   do
   {
    printf("Enter a number ");
    scanf("%d", &num);
    
    if (num%2 != 0)
    {
        break;
    }
    
   } while (1);
   printf("You entered an odd number");


    2. Continue
     If we want to skip some lines and then continue the loop then it can be used

     Eg:
     for(i=1; i<=5 ; i++){

        if(i==3){
            continue;  //dont run further and continue loop
        }
        printf("%d",i);
     }



     Q. Print all the numbers from 1 to 10 except 6


     Q. Print all the odd numbers between 5 and 50

     for (int i = 5; i < 50; i++)
    {
    if (i%2!=0)
    {
        printf("%d \n",i);
    } 
   }
   

     Q. Print the factorial of the given number n

      int fact=1;
    int n;

    printf("Enter the value of n");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
    fact=fact*i;
    }

     printf("The factorial is %d",fact);


    Q. Write a program to print prime numbers in range
    

    



    
    */



    return 0;
}