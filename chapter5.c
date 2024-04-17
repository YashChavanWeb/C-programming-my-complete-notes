//-------- Functions and Recurssions --------//  

/*
Function is a block of code that performs particular task
It can be used multiple times
It increases code reusability




//-------- Syntax for Functions --------//  

1. Function Prototype

void functionname(); -> the () are called paranthesis
-> void means result me value print nahi karega....kaam karega but value return nahi karega

2. Function definition
void functionname(){

    printf("Hello");
}

3. Function call

int main(){

    functionname(); //calling the function statement
    return 0;
}

Eg: Write a program to print hello world using functions

void helloworld();  //function prototype

int main(){

    helloworld();   //function call
   
    return 0;
}

void helloworld(){  //function definition
    printf("Hello World ");
}

 
Q. Write a function that prints namaste if user is Indian and Bonjour if teh user is French

void indian();
void french();

int main(){

    int a;
    printf("Enter 1 if you are Indian and \n 0 if you are a French ");
    scanf("%d", &a);


    if (a==1)
    {
        indian();
    }
    else{
        french();
    }
    
    return 0;
}


void indian(){

    printf("Namaste ");
}

void french(){

    printf("Bonjour ");
}




//-------- Properties of Functions --------//

1. Execution always starts from main function

2. A function gets called directly or indirectly from main
Calling the second function indirectly by calling first

int main(){

    namaste();  //namaste ko call kiya to bonjour bhi indirectly call hoga
}

void namaste(){
    bonjour();
}

3. There can be multiple functions in a program



//-------- Types of Functions --------//

1. Library Functions
Special Functions inbuilt in C
scanf(), printf() -> we can use then due to pre processor directive stdio

2. User Defined Functions
declared and defined by programmer



//-------- Passing Arguments --------//

Functions can take value -> Parameter 
and give some value -> return value

Normal Function -> void printhello ();

No return just print Function -> void printhello (int a);

Return type function -> int sum(int a, int b);


Q. Write a Function to input 2 values and print their sum

int sum(int a, int b){

    // int c = a+b;
    return a+b; //or return c;
}

int main(){

    int x,y;
    printf("Enter the two numbers \n");
    scanf("%d %d", &x,&y);

     printf("The sum is %d ",sum(x,y));
                or
    // int z = sum(x,y);
    // printf("The sum is %d", z);

    return 0;
}


Q. Write a program to print the table of number entered.


void printtable(int n);

int main(){

    int n;
    printf("Enter the number \n");
    scanf("%d",&n);

    printtable(n);  //argument or actual parameter


}

void printtable(int n){  //parameter or formal parameter

    for (int i = 1; i < 11; i++)
    {
        printf("%d" , i*n);
    }
    
}


//-------- Difference between Arguments and Parameters --------//

Argument                        Parameter

values that are                  values in function declaration and definition
passes in function call

used to send value               used to receive value

actual parameter                 formal parameters



Note: Function can only return one value at a time
      
      Changes to paramters in function don't change the value in calling function.  Eg: Swap function
      (because a copy of argument is passed to the function)

Eg:
#include<stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=5,b=10;

    printf("The value of a and b before swapping %d,%d \n",a,b);
    
    swap(&a,&b);
    printf("The value of a and b after swapping %d,%d \n",a,b);
    return 0;
}



Q.1 Use library functions to calculate the square of a number given by user.



Q.2 Write functions to calculate area of square, a circle and a rectangle



//-------- Recursions --------//

When a function calls itself then it is called recursion  

A work that can be done by a loop can also be done by a recursive function
(we have to decide where to use iterations/loops and where to use recursions)

Eg: Print Hello World 5 times

#include<stdio.h>

void count(int x){
    printf("Hello World \n");
    if (x-1==0)
    {
        return;
    }
    count(x-1);   
}
int main(){

    count(5);
    return 0;
}


// Recursion with the help of maths:
f(x) =x^2  which means f(1)=1^2  f(2)=2^2
f(f(x)) = f(x^2) = x^4



//Differnce between normal function and recursive function

Normal Function call:
Main function calls it, function performs operations and returns a value

Recursive Function Call:
Main function call the function, the function calls itself again, it calls itself again then third function gives value to second, second to first and first to the main


//Q. Sum of first n natural numbers

Sum of n natural numbers can be written as sum(n-1)+2
Eg: sum of first 3 nos = sum(3-1)+n =    --> 1+2+3=6

#include<stdio.h>

int sum(int n){
    if (n==1)
    {
        return 1;
    }
    
    int sumofnm1 = sum(n-1);
    int sumofn = sumofnm1 +n;
    return sumofn;
        (or direclty)
    return sum(n-1)+n;

}
int main(){

    printf("%d",sum(5));
    return 0;
}

Explaination:
                    sum(5)
                sum(4)+5
            sum(3)+4
        sum(2)+3
    sum(1)+2
   1   



//Q. Factorial of n

#include<stdio.h>

int fact(int n){
    if (n==1)
    {
        return 1;
    }
    
    return fact(n-1)*n;

}
int main(){

    printf("%d",fact(3));
    return 0;
}

Explaination:

                    fact(5)
                fact(4)x5
            fact(3)x4
        fact(2)x3
    fact(1)x2
    1


// Properties of Recursions

1. Anything that can be done by recursion can be done by iteration and vice versa
2. Recursion can sometimes give the most simple solution
3. Base case is the condition which stops recursion
4. Iteration has infinite loop and recursion has stack overflow (program will class)



//-------- Practice Questions --------//



//Q.1 Write a function to convert celcius to fahrenheit
Formula: F=(C*9/5)+32
Hint: take the values as 9.0 and 5.0 to get float value and exact output


//Q.2 Write a function to calculate Percentage of a student from Marks in Science, Maths and English
Hint: Find the average of 3 and assume that the marks are from 100


//Q.3 Write a function to print n terms of the fibonacci series.
0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 ....
Hint: fib(2) = fib(1)+fib(0)   --> fib(n)=fib(n-1)+fib(n-2)


#include<stdio.h>

int fib(int n){
    if (n==0 || n==1)
    {
        if(n==0)
        return 0;
        
        if(n==1)
        return 1;
    }
    
    return fib(n-1)+fib(n-2);

}
int main(){
    int n=5;
    for (int i = 0; i < n; i++)
    {
    printf("%d , ",fib(i));
    }
    
    return 0;
}


//Q.4 Write a function to find the sum of digits of a number

//Q.5 Write a function to find square root of a number

//Q.6 Write a function to print "Hot or "Cold" depending upon the temperature user enters

//Q.7 Make your own power function
























*/