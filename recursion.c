// Recursion

// Q.1. Factorial using recursive Function
// #include <stdio.h>
// int fact(int n)
// {
//     if (n == 1 || n == 0) // base case
//     {
//         return 1; // if this case is true then further statements will not run
//     }
//     return n * fact(n - 1);
// }
// int main()
// {
//     int n;
//     printf("Enter the number \n");
//     scanf("%d", &n);
//     int result = fact(n);
//     printf("%d factorial is %d", n, result);
//     return 0;
// }

// Q.2. Print Good Morning n times using recursive Function
// #include <stdio.h>
// void greet(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     printf("Good Morning \n");
//     greet(n - 1);
//     return;
// }
// int main()
// {
//     int n;
//     printf("Enter the number \n");
//     scanf("%d", &n);
//     greet(n);
//     return 0;
// }

// Q.3. Print n to 1 using recursive Function
// #include <stdio.h>
// void decrease(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     printf("%d \n", n);
//     decrease(n - 1);
//     return;
// }
// int main()
// {
//     int n;
//     printf("Enter the number \n");
//     scanf("%d", &n);
//     printf("\n");
//     decrease(n);
//     return 0;
// }

// Q.4. Print 1 to n using recursive Function
// Met 1 : Using Extra Parameter
// #include <stdio.h>
// void increase(int x, int n)
// {
//     if (x > n)
//     {
//         return;
//     }
//     printf("%d\n", x);
//     increase(x + 1, n);
//     return;
// }
// int main()
// {
//     int n;
//     printf("Enter the number \n");
//     scanf("%d", &n);
//     printf("\n");
//     increase(1, n);
//     return 0;
// }
// Met 2 : Using After Recursive call
// #include <stdio.h>
// void increase(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     increase(n - 1);
//     printf("%d \n", n);
//     return;
// }
// int main()
// {
//     int n;
//     printf("Enter the number \n");
//     scanf("%d", &n);
//     printf("\n");
//     increase(n);
//     return 0;
// }

// Q.5. Print n to 1 first and then n to 1 again (decreasing + increasing)
//  #include<stdio.h>
//  void decrease(int n){
//      if(n==0){
//          return;
//      }
//      printf("%d\n",n);
//      decrease(n-1);
//      return ;
//  }
//  void increase(int n){
//      if(n==0){
//          return;
//      }
//      increase(n-1);
//      printf("%d\n",n);
//      return ;
//  }
//  int main(){
//      int n;
//      printf("Enter the number \n");
//      scanf("%d",&n);
//      printf("\n");
//      decrease(n);
//      increase(n);
//      return 0;
//  }

// Q.6. WAP to find sum of 1 to n using recursion (using parameters)
// #include <stdio.h>
// void sum(int n, int s)
// {
//     if (n == 0)
//     {
//         printf("%d", s);
//         return;
//     }
//     sum(n - 1, s + n);
//     return;
// }
// int main()
// {
//     int n;
//     printf("Enter the number \n");
//     scanf("%d", &n);
//     sum(n, 0);
//     return 0;
// }

// Q.7. WAP to find sum of 1 to n using recursion (using return type)
// we solve this like factorial with just + sign
// #include <stdio.h>
// int sum(int n)
// {
//     if (n==1 || n == 0)
//     {
//         return n;
//     }
//     return n + sum(n - 1);
// }
// int main()
// {
//     int n;
//     printf("Enter the number \n");
//     scanf("%d", &n);
//     int result = sum(n);
//     printf("The sum of 1 to %d is %d", n, result);
//     return 0;
// }

// Q.8. Make a function which calculates 'a' raised to the power 'b' using recursive function.
// #include <stdio.h>
// int power(int a, int b)
// {
//     if (b == 0)
//     {
//         return 1;
//     }
//     else if (b == 1)
//     {
//         return a;
//     }
//     return a * power(a, b - 1);
// }
// int main()
// {
//     int a, b;
//     printf("Enter the number \n");
//     scanf("%d", &a);
//     printf("Enter the power \n");
//     scanf("%d", &b);
//     int result = power(a, b);
//     printf("%d raised to power %d is %d", a, b, result);
//     return 0;
// }

// Q.9. WAP to calculate the nth Fibonacci Number using Recursion
//  #include<stdio.h>
//  int fib(int n){
//      if(n==1 || n==2){
//          return 1;
//      }
//      else if(n<=0){
//          return 0;
//      }
//      return fib(n-1)+fib(n-2);
//  }
//  int main(){
//      int n;
//      printf("Enter the number \n");
//      scanf("%d",&n);
//      int result=fib(n);
//      printf("The %dth Fibonacci Number is %d",n,result);
//      return 0;
//  }

// Q.10. Calculate the number of ways of climbing a stair path till nth stair
//(single and double steps are only considered) using recursive function
// #include <stdio.h>
// int stair(int n)
// {
//     if (n == 1 || n == 2)
//     {
//         return n;
//     }
//     int totalways = stair(n - 1) + stair(n - 2);
//     return totalways;
// }
// int main()
// {
//     int n;
//     printf("Enter the number \n");
//     scanf("%d", &n);
//     int ways = stair(n);
//     printf("No. of ways is %d", ways);
//     return 0;
// }

// Q.11. Calculate the number of ways of climbing a stair path till nth stair
//(single,double and triple steps are only considered) using recursive function
// #include <stdio.h>
// int stair(int n)
// {
//     if (n == 1 || n == 2)
//     {
//         return n;
//     }
//     else if (n == 3)
//     {
//         return n + 1;
//     }
//     int totalways = stair(n - 1) + stair(n - 2) + stair(n - 3);
//     return totalways;
// }
// int main()
// {
//     int n;
//     printf("Enter the number \n");
//     scanf("%d", &n);
//     int ways = stair(n);
//     printf("No. of ways is %d", ways);
//     return 0;
// }

// Q.12. WAP to find a raised to b using recursive function (using logarithmic)
//(we do this for code simplification and reduction of steps Eg: 2 raised to 100)
// #include <stdio.h>
// int powerlog(int a, int b)
// {
//     // base case
//     if (b == 1)
//     {
//         return a;
//     }
//     else if (b == 0)
//     {
//         return 1;
//     }
//     int ans = powerlog(a, b / 2);
//     if (b % 2 == 0)
//     { // even case
//         return ans * ans;
//     }
//     else
//     { // odd case
//         return ans * ans * a;
//     }
// }
// int main()
// {
//     int a, b;
//     printf("Enter the number \n");
//     scanf("%d", &a);
//     printf("Enter the power \n");
//     scanf("%d", &b);
//     int result = powerlog(a, b);
//     printf("%d raised to power %d is %d", a, b, result);
//     return 0;
// }

// Q.13. Maze Path (Conditions: only can go down and right , one step at a time) using recursive function
// (using 4 parameters)
// #include <stdio.h>
// int maze(int cr, int cc, int er, int ec)
// {
//     int rightways = 0;
//     int downways = 0;
//     if (cr == er || cc == ec)
//     {
//         return 1;
//     }
//     else if (cr == er)
//     {                                          // only rightways call
//         rightways += maze(cr, cc + 1, er, ec); // a+=b -> a = a+b
//     }
//     else if (cc == ec)
//     { // only downwards call
//         downways += maze(cr + 1, cc, er, ec);
//     }
//     else if (cr < er && cc < ec)
//     {
//         rightways += maze(cr, cc + 1, er, ec);
//         downways += maze(cr + 1, cc, er, ec);
//     }
//     int totalways = rightways + downways;
//     return totalways;
// }
// int main()
// {
//     int n; // Rows
//     printf("Enter the number of rows of maze \n");
//     scanf("%d", &n);
//     int m; // Columns
//     printf("Enter the number of columns of maze \n");
//     scanf("%d", &m);
//     int noofways = maze(1, 1, n, m);
//     printf("The number of ways are %d", noofways);
//     return 0;
// }

// Q.14. Maze Path (Conditions: only can go down and right , one step at a time) using recursive function
// #include <stdio.h>
// int maze(int n, int m)
// {
//     int rightways = 0;
//     int downways = 0;
//     if (n == 1 && m == 1)
//     {
//         return 1;
//     }
//     else if (n == 1)
//     { // cannot go down
//         rightways += maze(n, m - 1);
//     }
//     else if (m == 1)
//     { // cannot go right
//         downways += maze(n - 1, m);
//     }
//     else if (n > 1 && m > 1)
//     {
//         rightways += maze(n, m - 1);
//         downways += maze(n - 1, m);
//     }
//     int totalways = rightways + downways;
//     return totalways;
// }
// int main()
// {
//     int n; // Rows
//     printf("Enter the number of rows of maze \n");
//     scanf("%d", &n);
//     int m; // Columns
//     printf("Enter the number of columns of maze \n");
//     scanf("%d", &m);
//     int noofways = maze(n, m);
//     printf("The number of ways are %d", noofways);
//     return 0;
// }

// Q.15. WAP displaying pre,in and post concept using recursive function
// #include <stdio.h>
// void preinpost(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     printf("Pre %d \n", n);
//     preinpost(n - 1);
//     printf("In %d \n", n);
//     preinpost(n - 1);
//     printf("Post %d \n", n);
//     return;
// }
// int main()
// {
//     int n;
//     printf("Enter the number \n");
//     scanf("%d", &n);
//     preinpost(n);
//     return 0;
// }

// Q.16. Print Zig-Pattern using recursive function
//  Input       Output
//  1           111
//  2           211121112
//  3           321112111232111211123
// #include <stdio.h>
// void zigzag(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     printf("%d \n", n);
//     zigzag(n - 1);
//     printf("%d \n", n);
//     zigzag(n - 1);
//     printf("%d \n", n);
//     return;
// }
// int main()
// {
//     int n;
//     printf("Enter the number \n");
//     scanf("%d", &n);
//     printf("\n");
//     zigzag(n);
//     return 0;
// }

// Q.17. WAP to print tower of HANOI using recursive function
// #include <stdio.h>
// void tower(int n, char s, char h, char d)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     tower(n - 1, s, d, h);
//     printf("%c -> %c \n", s, d);
//     tower(n - 1, h, s, d);
//     return;
// }
// int main()
// {
//     int n;
//     printf("Enter number of discs \n");
//     scanf("%d", &n);
//     tower(n, 'A', 'B', 'C');
//     return 0;
// }


