# include<stdio.h>

int main(){

    //-------- Variables --------//

    int a = 25; 
    a = 30; //Variable Value can be changed
    int A=  30; //They are case sensitive a and A are different
    int a_yash= 99; //Only underscores no spaces or chars
    float price = 100; //Give meaningful names to Variables



    //-------- Data Types --------//
    
    int age = 30; // Used for whole Values
    float pi = 3.14; //Used for Decimal values
    char hashtag = '#'; //Used for Storing special characters
    


    //-------- Constants --------//
    
    //Integer Constants 1,2,3
    //Real Constants 1.0, 2.14 , -2.4
    //Character Constants 'A' '@'



    //-------- Keywords --------//
    
    // int is a keyword
    // if, float etc.  reserved words that cant be used as a keyword



    //-------- Program Structure --------//
    
    /*
    #include<stdio.h>           //Preprocessor Directive (Compulsory)
    
    int main(){                //We write all our code in main function
        printf("Hello World"); //It is a full stop for each line 
        return 0;              //zero errors 
    }    
    */



    //-------- Comments --------//

   //Single Line comment
   
   /*
   Multiple Line Comment
   */



    //-------- Output --------//

    printf("Hello Everyone"); //Print Hello world as output
    printf("Hello Yash\n");  //Print the next part on next line
    
    // Cases
    printf("age is %d",age); //for printing integer values
    printf("value is %f",pi); //for printing real values
    printf("character is %c",hashtag); //for printing character values



    //-------- Input --------//

    scanf("%d",&age); //specify whcih type of value you want to take
                      //then write & (address of variable) and name of variable
   //it will take the input that we give and store it in that variable

    int cost;
    printf("Enter cost");
    scanf("%d",&cost);
    printf("Cost is %d", cost);



    //-------- Practice Program --------//

    int a,b;
    printf("Enter a = ");
    scanf("%d",&a);

    printf("Enter b = ");
    scanf("%d",&b);

    int sum=a+b;
    printf("Sum is = %d",sum);

    //we can also use a trick instead of making sum as a different variable
    printf("Sum is = %d",a+b);



    //-------- Compilation --------//

    /* First it checks whether there is an error. Then it converts the file to a.exe or a.cut */



   //-------- Question 1: Area of Square --------//
    
    /*#include<stdio.h>

    int main(){

    int side;
    printf("Enter the length of side \n");
    scanf("%d" , &side);

    int area = side*side;
    printf("The area of square is \n %d" , area);

    return 0;
    } */
    


//-------- Question 2: Area of Circle --------//

   /* #include<stdio.h>

int main(){

    float pi = 3.14;
    int radius;

    printf("Enter the Radius of Circle \n");
    scanf("%d" , &radius);

    float area = pi*radius*radius;
    printf("Area of circle is \n %f" , area);
    return 0;
}*/

    
    return 0;
}