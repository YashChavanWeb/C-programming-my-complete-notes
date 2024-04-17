#include<stdio.h>

int main(){

    //-------- Instructions --------//

    /*Instructions are statements in a program


    1. Declaration Instructions
    Declaring a varible along with its type before using it 
    Eg: int a = 1;
    Valid Statement -->  int d = 1, e (declared d and assigned 1 and also declared e no value given)
    We can't use and declare at the same time, first declare then use


    2. Arithmetic Instructions
    a+b (a,b are operands and + is an operator)
    Note: Single variable on LHS (all that we operate "gets stored" on LHS so we assign one variable there)
    
    a. Multiplication: a*b
   
    b. Division: a/b  (the quotient will be the answer)
   
    c. Power: pow(b,c) --> It will give b raised to c ---[ Also add header file #include<math.h> ]
   
    d. Modular Operator: 3%2 = 1 (It gives remainder as the output)
        Note: Modular Operator does not run on float values
              If we want negative remainder so write negative numerator
   
    e. Type Conversion
    int operates with int -> Int Output
    float operates with float -> float output
    int operates with float -> float Output
        Note: If we want exact value then -> printf("f", 2.0/3); -> [make any one no. float]
    
    Converting a big value to small
    int a = (int) 1.99999;  (Converting double to integer)
    printf("%d \n",a);
    Implicit Conversion-> Compiler does for us
    Explicit Conversion-> We tell the compiler to do it
        Note: Compiler ignores all the decimals and gives output as 1

    f. Operator Precedence
    It is the priority order for performing operations
    Top -> * , / , %   then -> + , -    at last -> = (assignment operator)

    Operations if the precendence is same
    Associativity rule: Left to Right -> 4*3/6*2 = 12/6*2 = 4


    //-------- Practice Questions --------//
    
    i. 5*2 - 2*3
    Same Precedence so left rule 
    10 - 6 = 4

    ii. 5*2/2*3
    Same Precedence so left rule
    (10/2)*3)= 5*3

    iii. 5*(2/2)*3
    If we get a bracket then first solve bracket and then move ahead
    5*1*3 = 15

    iv) 5+2/2*3
    5+((2/2)*3) = 8



    
    3. Control Instructions
    It is used to determine the flow of the program
    a. Sequence Control
    b. Decision Control -> if else
    c. Loop Control -> for while
    d. Case Control



    //-------- Operators --------//

    1. Arithmetic Operators -> +, -, *, /, %
    
    2. Relational Operators
    a) a == b 
    Asking if a is equal to b, and single = means we put value of b in a
        Note: If the statement is true (equal) then output 1 otherwise zero
               True: 1 , False: 0
    b) > , > =
    c) < , < =
    d) ! =  (Not equal to)

    3. Logical Operators
    a) && (AND) -> All the outputs should be true then only final output is true
        Eg: printf("%d \n" 4>3 && 5>2)
    b) || (OR)
    If only one output from all is true, then the final output is true
    c) ! (NOT)
    Whatever the output is we get the opposite of it
    Eg: !(3>4) = 1 -> True
        !((5>2) && (0>1))  = 1 -> True

    Operator Precedence Order
    !
    * , / , %
    +,-
    < , > , <= , >=
    == , !=
    &&
    ||


    4. Assignment Operators
    a) = (assigns right value to the left)
    b) += (short hand operator)
    When LHS and RHS have same variable, we can make it small
        a = a+b can be written as a += b
    c) -= 
    d) *=
    e) \= 


    //-------- Practice Questions --------//
    
    ---Write a program to check whether the number is divisible by 2---
    int a;
    printf("Enter the number \n ");
    scanf("%d",&a);

    printf("The output is \n %d",a%2==0);

    ---Which are valid---
    int x ; int y=x; --> It is valid
    char='**'  -> Invalid , we can add only one character constant value

    ---Print true if a number is greater than 9 and less than 100---
    int a;
    printf("Enter a Number \n ");
    scanf("%d", &a);

    printf("The output is \n %d" , a>9 && a<100);
            Note: We are actually checking whether the number is a 2 digit a number

    ---Write a program to check whether a given character is a digit or not---


    5. Ternary Operators
    6. Bitwise Operators




*/

    return 0;
}