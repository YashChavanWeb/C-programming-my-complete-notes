// Pattern Printing

// 1. Star Rectangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)  //for no of rows
//     {
//         for (int j = 0; j < n; j++)  //for no of columns
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 2. Number Square
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) // for no of rows
//     {
//         for (int j = 1; j <= n; j++) // for no of columns
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 3. Star Triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 4. Inverted Star Triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     int a = n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= a; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//         a--;
//     }
//     return 0;
// }

// 5. Number Triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 6. Inverted Number Triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     int a = n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= a; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//         a--;
//     }
//     return 0;
// }

// 7. Odd Number Triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         int a = 1;
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", a);
//             a = a + 2;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 8. Alphabet Square
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         int a = 65;
//         for (int j = 0; j < n; j++)
//         {
//             printf("%c ", a);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 9. Alphabet Triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         int a = 65;
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%c ", a);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 10. Alphabet and Number Triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     int a; // for characters
//     int b; // for numbers
//     for (int i = 1; i <= n; i++)
//     {
//         a = 65;
//         b = 1;
//         for (int j = 1; j <= i; j++)
//         {
//             if (i % 2 == 0)
//             {
//                 printf("%c ", a);
//             }
//             else
//             {
//                 printf("%d ", b);
//             }
//             a++;
//             b++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 11. Star Plus (n should be odd always)
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (j == (n / 2) + 1 || i == (n / 2) + 1)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 12. Hollow Rectangle
// #include <stdio.h>
// int main()
// {
//     int n,c;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     printf("Enter the number of columns \n");
//     scanf("%d", &c);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= c; j++)
//         {
//             if (i==1 || i==n || j==1 || j==c)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 13. Star Cross (n should be odd always)
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == j || i + j == n + 1)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 14. Floyd's Triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     int a = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", a);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 15. Odd Floyd's Triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     int a = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", a);
//             a=a+2;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 16. 0 and 1 triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if ((i + j) % 2 == 0)
//             {
//                 printf("1 ");
//             }
//             else
//             {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 17. Right Star Triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){   //for spaces
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 18. Star Rhombus
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){   //for spaces
//             printf(" ");
//         }
//         for(int k=1;k<=n;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 19. Right ALphabet Triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){   //for spaces
//             printf(" ");
//         }
//         int a=65;
//         for(int k=1;k<=i;k++){
//             printf("%c",a);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 20. Star Pyramid
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         { // for spaces
//             printf(" ");
//         }
//         for (int k = 1; k <= (2 * i - 1); k++)
//         {
//             // or k<=nst and nst+2 after completing k loop
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 21. Number Pyramid
//  #include <stdio.h>
//  int main()
//  {
//      int n;
//      printf("Enter the number of rows \n");
//      scanf("%d", &n);
//      for (int i = 1; i <= n; i++)
//      {
//          for (int j = 1; j <= n - i; j++)
//          { // for spaces
//              printf(" ");
//          }
//          for (int k = 1; k <= (2 * i - 1); k++)
//          {
//              // or k<=nst and nst+2 after completing k loop
//              printf("%d",k);
//          }
//          printf("\n");
//      }
//      return 0;
//  }

// 22. Alphabet Pyramid
//  #include <stdio.h>
//  int main()
//  {
//      int n;
//      printf("Enter the number of rows \n");
//      scanf("%d", &n);
//      for (int i = 1; i <= n; i++)
//      {
//          for (int j = 1; j <= n - i; j++)
//          { // for spaces
//              printf(" ");
//          }
//          int a=65;
//          for (int k = 1; k <= (2 * i - 1); k++)
//          {
//              // or k<=nst and nst+2 after completing k loop
//              printf("%c",a);
//          a++;
//          }
//          printf("\n");
//      }
//      return 0;
//  }

// 23. Unique Number Pyramid
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             printf("%d", k);
//         }
//         int a = i - 1;
//         for (int l = 1; l <= i - 1; l++)
//         {
//             printf("%d", a);
//             a--;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 24. Unique Alphabet Pyramid
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }
//         int a = 65;
//         for (int k = 1; k <= i; k++)
//         {
//             printf("%c", a);
//             a++;
//         }
//         int b = 63 + i;
//         for (int l = 1; l <= i - 1; l++)
//         {
//             printf("%c", b);
//             b--;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 25. Star Diamond
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows \n");
    scanf("%d", &n);
    int nsp = n / 2;
    int nst = 1;
    int ml = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++)
        {
            printf("*");
        }
        if (i < ml)
        {
            nsp--;
            nst = nst + 2;
        }
        else
        {
            nsp++;
            nst = nst - 2;
        }
        printf("\n");
    }
    return 0;
}

// 26. Right Inverted Star Triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     int a = n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i - 1; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= a; k++)
//         {
//             printf("*");
//         }
//         a--;
//         printf("\n");
//     }
//     return 0;
// }

// 27. Double Star Triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     int nst = n;
//     int nsp = 1;
//     for (int i = 1; i <= ((2 * n) + 1); i++)
//     {
//         printf("*");
//     }
//     printf("\n");
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= nst; j++)
//         {
//             printf("*");
//         }
//         for (int k = 1; k <= nsp; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= nst; j++)
//         {
//             printf("*");
//         }
//         nst--;
//         nsp = nsp + 2;
//         printf("\n");
//     }
//     return 0;
// }

// 28. Double Number Triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     int nst = n;
//     int nsp = 1;
//     for (int i = 1; i <= ((2 * n) + 1); i++)
//     {
//         printf("%d", i);
//     }
//     printf("\n");
//     for (int i = 1; i <= n; i++)
//     {
//         int a = 1;
//         for (int j = 1; j <= nst; j++)
//         {
//             printf("%d", a);
//             a++;
//         }
//         for (int k = 1; k <= nsp; k++)
//         {
//             printf(" ");
//             a++;
//         }
//         for (int j = 1; j <= nst; j++)
//         {
//             printf("%d", a);
//             a++;
//         }
//         nst--;
//         nsp = nsp + 2;
//         printf("\n");
//     }
//     return 0;
// }

// 29. Double Alphabet Triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     int nst = n;
//     int nsp = 1;
//     int m=65;
//     for (int i = 1; i <= ((2 * n) + 1); i++)
//     {
//         printf("%c", m);
//         m++;
//     }
//     printf("\n");
//     for (int i = 1; i <= n; i++)
//     {
//         int a = 65;
//         for (int j = 1; j <= nst; j++)
//         {
//             printf("%c", a);
//             a++;
//         }
//         for (int k = 1; k <= nsp; k++)
//         {
//             printf(" ");
//             a++;
//         }
//         for (int j = 1; j <= nst; j++)
//         {
//             printf("%c", a);
//             a++;
//         }
//         nst--;
//         nsp = nsp + 2;
//         printf("\n");
//     }
//     return 0;
// }

// 30. Double Unique Number Triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     int nst = n;
//     int nsp = 1;
//     int a = n;
//     for (int i = 1; i <= ((2 * n) + 1); i++)
//     {
//         if (i > n + 1)
//         {
//             printf("%d", a);
//             a--;
//         }
//         else
//         {
//             printf("%d", i);
//         }
//     }
//     printf("\n");
//     for (int i = 1; i <= n; i++)
//     {
//         int b = 1;
//         for (int j = 1; j <= nst; j++)
//         {
//             printf("%d", b);
//             b++;
//         }
//         for (int k = 1; k <= nsp; k++)
//         {
//             printf(" ");
//         }
//         int c = b - 1;
//         for (int j = 1; j <= nst; j++)
//         {
//             printf("%d", c);
//             c--;
//         }
//         nst--;
//         nsp = nsp + 2;
//         printf("\n");
//     }
//     return 0;
// }

// 31. Number Zoom
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     int min = 0;
//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         for (int j = 1; j <= 2 * n - 1; j++)
//         {
//             int a = i;
//             if (a > n)
//             {
//                 a = 2 * n - i;
//             }
//             int b = j;
//             if (b > n)
//             {
//                 b = 2 * n - j;
//             }
//             if (a < b)
//             { // To find minimum of two numbers
//                 min = a;
//             }
//             else
//             {
//                 min = b;
//             }
//             printf("%d ", min);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 32. Reverse Number Zoom
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows \n");
//     scanf("%d", &n);
//     int min = 0;
//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         for (int j = 1; j <= 2 * n - 1; j++)
//         {
//             int a = i;
//             if (a > n)
//             {
//                 a = 2 * n - i;
//             }
//             int b = j;
//             if (b > n)
//             {
//                 b = 2 * n - j;
//             }
//             if (a < b)
//             { // To find minimum of two numbers
//                 min = a;
//             }
//             else
//             {
//                 min = b;
//             }
//             printf("%d ", n+1-min);
//         }
//         printf("\n");
//     }
//     return 0;
// }
