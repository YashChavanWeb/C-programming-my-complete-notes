// Structure

// Q.1. Write a program to declare, intialize and Accessing a structure
// #include <stdio.h>
// int main()
// {
//     // Declaration of structure
//     struct student
//     {
//         char sign;
//         int rollno;
//         float fees;
//         int id;
//     } yash1, kamal, sarth; // 3 students are also declared here itself
//     // Initialization of structure
//     // Direct Declaration
//     struct student yash;
//     yash.sign = 'A';
//     yash.rollno = 30;
//     yash.fees = 70000;
//     // Input Declaration
//     yash.id;
//     printf("Enter the student id ");
//     scanf("%d", &yash.id);
//     // Printing of Structure
//     printf("The sign of student is %c \n", yash.sign);
//     printf("The roll no of student is %d \n", yash.rollno);
//     printf("The fees paid is %.2f \n", yash.fees);
//     printf("The student id is %d", yash.id);
//     return 0;
// }

// Q.2. Discuss and solve the problem for declaration of character array in structure
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char ch1[13] = "Yash"; // This will not show error
//     char ch[13];
//     // ch = "Yash";  //This will show error as it is not valid
//     // To solve this we use the string copy function
//     strcpy(ch, "yash chavan");
//     printf("%s", ch);
//     return 0;
// }

// Q.3. Explain the concept of Typedef by writing a program
// Syntax: typedef oldname newname;
// typedef int integer;
// typedef float decimal;
// #include <stdio.h>
// int main()
// {
//     // using typedef in every sense
//     integer a = 5;
//     decimal b = 2.3;
//     printf("%d  ", a);
//     printf("%.2f  ", b);
//     // using typedef in structure
//     typedef struct book
//     {
//         int pages;
//         char name[100];
//         float price;
//     } done;
//     // initialization using typedef
//     done b1;
//     done b2;        // short declaration
//     struct book b3; // long declaration
//     return 0;
// }

// Q.4. How to solve multiple pointer declaration problem using typedef
// typedef int *pointer;
// #include <stdio.h>
// int main()
// {
//     // This type of declaration we all know
//     int x = 3;
//     int y = 4;
//     int *a = &x;
//     int *b = &y;
//     printf("%p \n", a);
//     printf("%p \n", b);
//     printf("\n");
//     // This type of declaration is not allowed for pointers
//     int m = 3, n = 4;    // this is allowed
//     // int *p = &m, q = &n; // this is not allowed
//     int *p = &m, q = n;  // this is allowed because computer thinks q is an integer
//     printf("%p \n", p);
//     printf("%p \n", q); // invalid
//     printf("%d \n", q); // valid
//     // Using typedef this problem is solved
//     pointer l = &m, z = &n;
//     printf("%p \n", l);
//     printf("%p \n", z);
//     return 0;
// }

// Q.5. WAP showing the basic use of Structure array
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     typedef struct student
//     {
//         int roll;
//         int id;
//         char name[100];
//     } student;
//     student arr[3];
//     // declaration of array elements
//     arr[0].roll = 30;
//     arr[0].id = 1;
//     strcpy(arr[0].name, "Yash");
//     arr[1].roll = 31;
//     arr[1].id = 2;
//     strcpy(arr[1].name, "Kamal");
//     arr[2].roll = 32;
//     arr[2].id = 3;
//     strcpy(arr[2].name, "Sarth");
//     // Printing of structure array
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Roll No : %d \n", arr[i].roll);
//         printf("Id : %d \n", arr[i].id);
//         printf("Name : %s \n", arr[i].name);
//         printf("\n");
//     }
//     return 0;
// }

// Q.6. A record contains name of cricketer, his age, number of test matches that he has played and the average runs that he has scored in each test match. Create an array of structure to hold records of 20 such cricketer and then write a program to read these records
// #include <stdio.h>
// int main()
// {
//     typedef struct cricketer
//     {
//         char name[50];
//         int age;
//         int not ;
//         float avgruns;
//     } match;
//     match arr[20];
//     // Input the values of the cricketer
//     for (int i = 0; i < 20; i++)
//     {
//         printf("Name : ");
//         scanf("%s", arr[i].name); // there will be no & when we input string
//         printf("Age : ");
//         scanf("%d", &arr[i].age);
//         printf("Number of test matches : ");
//         scanf("%d", &arr[i].not );
//         printf("Average Runs : ");
//         scanf("%f", &arr[i].avgruns);
//     }
//     printf("\n");
//     // Printing of the values
//     for (int i = 0; i < 20; i++)
//     {
//         printf("Name of of %dth cricketer is %s \n", i, arr[i].name);
//         printf("Age of %dth cricketeris %d \n", i, arr[i].age);
//         printf("No of test matches of %dth cricketeris %d \n", i, arr[i].not );
//         printf("Average runs of %dth cricketerare %.2f \n", i, arr[i].avgruns);
//     }
//     return 0;
// }

// Q.7. Explain the concept of Copying entire structure to another variable
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     struct book
//     {
//         int price;
//         int pages;
//         int size;
//         char name[50];
//     };
//     struct book b1, b2, b3;
//     b1.price = 311;
//     b1.pages = 320;
//     b1.size = 3300;
//     strcpy(b1.name, "book 1");
//     // Game changer copying of elements of one variable to another
//     b2 = b1;   //this is a deep copy -> changes in b will not affect a and vice versa
//     printf("%d", b2.pages);
//     return 0;
// }

// Q.8. Create a structure date that contains three members namely date, month and year. Create 2 structure variables with different dates and now compare the two. If the dates are equal then display message as equal otherwise unequal.
// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
//     struct date
//     {
//         int day;
//         int month;
//         int year;
//     } a, b;
//     // First date
//     a.day = 8;
//     a.month = 2;
//     a.year = 2005;
//     // Second date
//     a.day = 7;
//     a.month = 7;
//     a.year = 2007;
//     // declaring the counter
//     bool flag = true;
//     if (a.day != b.day)
//         flag = false;
//     if (a.month != b.month)
//         flag = false;
//     if (a.year != b.year)
//         flag = false;
//     // Checking final condition
//     if (flag == true)
//         printf("The dates are same");
//     else
//         printf("The dates are different");
//     return 0;
// }

// Q.9. WAP showing the nesting of structures using an example
// #include <stdio.h>
// int main()
// {
//     struct chess
//     {
//         int piece;
//         int elo;
//         int age;
//     };
//     struct legendchess
//     {
//         struct chess brainy; // this represents the entire structure of chess
//         float salary;
//         char name[100];
//     };
//     struct godchess
//     {
//         struct legendchess really;
//         int subscriber;
//         int likes;
//     };
//     // Initializing the legend chess datatypes
//     struct legendchess magnus;
//     magnus.brainy.elo = 3000; // brainy acts as a connector for the included structure
//     magnus.salary = 30000.12;
//     // Initializing the god chess data types
//     struct godchess gotham;
//     gotham.likes = 10000;
//     gotham.really.brainy.elo = 2300; // this is the ultimate connector
//     return 0;
// }

// Q.10. WAP to explain the concept of pass by value using an example
// #include <stdio.h>
// typedef struct book
// {
//     int price;
//     int pages;
//     int no;
// } book;
// void print(book yash1){   //function of structure
//     yash1.price = 2000;   //the price will not change in main as it is pass by value and copy is formed in the function
//     printf("%d \n",yash1.price);
//     printf("%d \n",yash1.pages);
//     printf("%d \n",yash1.no);
// }
// int main()
// {
//     book yash1;
//     yash1.price = 1000;
//     yash1.pages = 200;
//     yash1.no = 1;
//     print(yash1);   //pass by value
//     return 0;
// }

// Q.11. WAP explaining the concept of pointers in structure
// #include <stdio.h>
// #include <string.h>
// struct pokemon
// {
//     int height;
//     int power;
//     char name[100];
// } pikachu, charizard;
// void change(struct pokemon *p)
// {
//     // (*p).height = 18;
//     p->height = 18;   // this is used instead of * and () for pointers in structure
//     //(*x).something = x->something
//     (*p).power = 88;
//     strcpy((*p).name, "Lizard");
// }
// int main()
// {
//     // Eg. of pointer is int* x = &a;
//     // Using pointers in structure
//     struct pokemon *x = &pikachu;
//     struct pokemon *y = &charizard;
//     printf("%p \n", x);               // address of pointer = address of first member
//     printf("%p \n", &pikachu.height); // address of first member
//     printf("%p \n", &pikachu.power);
//     printf("%p \n", pikachu.name); // no need to write & while printing string address / taking string output
//     // Accessing the structure variables using pointers
//     (*x).height = 19; // putting bracket here is necessary
//     printf("The height is %d \n", pikachu.height);
//     // This is same as that of function
//     int a = 7;
//     int *b = &a;
//     *b = 10; // a = 10;
//     // Using Call by reference in structures
//     pikachu.height = 12;
//     pikachu.power = 100;
//     strcpy(pikachu.name, "charizard");
//     printf("The values before changing \n");
//     printf("%d \n", pikachu.height);
//     printf("%s \n", pikachu.name);
//     printf("%d \n", pikachu.power);
//     change(&pikachu);
//     printf("The values after changing \n");
//     printf("%d \n", pikachu.height);
//     printf("%s \n", pikachu.name);
//     printf("%d \n", pikachu.power);
//     //Initializing the structure members in single go
//     struct pokemon pikachu = {20,"Yash",1000};   //here things should be orderwise
//                         //  height name power
//     //We can declare half things in braces and half things seperate like before provided they are in the ending only
//     return 0;
// }
