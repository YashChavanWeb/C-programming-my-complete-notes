// 2-D Arrays

// Q.1. Write a program to declare a 3x3 2D array and print it in Matrix Form
// #include <stdio.h>
// int main()
// {
//     // int arr[4][2] = {{1,2}, {3,4}, {5,6},{7,8}};
//                 //or
//     int arr[4][2]= {1,2,3,4,5,6,7,8};
//     printf("The array in matrix form is \n");
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q.2. Write a program to store roll number and marks obtained by 4 students side by side in a matrix.
// #include <stdio.h>
// int main()
// {
//     int arr[4][2];
//     printf("Enter the roll numbers and their marks \n");
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("The roll numbers and marks in matrix form are \n");
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d  ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q.3. WAP to store 10 at every index of a 2D matrix with 5 rows and 5 columns
// #include <stdio.h>
// int main()
// {
//     int arr[5][5];
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             printf("10 ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q.4. WAP to add two matrices
// #include <stdio.h>
// int main()
// {
//     int arr1[3][3], arr2[3][3];
//     printf("Enter the elements in first array \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &arr1[i][j]);
//         }
//     }
//     printf("Enter the elements in second array \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &arr2[i][j]);
//         }
//     }
//     int sum[3][3];
//     printf("The sum of two arrays is \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             sum[i][j] = arr1[i][j] + arr2[i][j];
//             printf("%d ", sum[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q.5. WAP to add two matrices without using extra array
// #include <stdio.h>
// int main()
// {
//     int arr1[2][2], arr2[2][2];
//     printf("Enter the elements in first array \n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             scanf("%d", &arr1[i][j]);
//         }
//     }
//     printf("Enter the elements in second array \n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             scanf("%d", &arr2[i][j]);
//         }
//     }
//     printf("The sum of the array is \n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             arr1[i][j] += arr2[i][j];
//             printf("%d ", arr1[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q.6. WAP to find the sum of a matrix nxm.
// #include <stdio.h>
// int main()
// {
//     int r, c;
//     printf("Enter the number of rows : ");
//     scanf("%d", &r);
//     printf("Enter the number of columns : ");
//     scanf("%d", &c);
//     int arr[r][c];
//     printf("Enter the elements in array \n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     int sum = 0;
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             sum = sum + arr[i][j];
//         }
//     }
//     printf("The sum of the matrix %dx%d is %d", r, c, sum);
//     return 0;
// }

// Q.7. WAP to find the maximum and minimum element in the 2D array and also print it along with its index
// #include <stdio.h>
// int main()
// {
//     int arr[3][3];
//     printf("Enter the elements in array \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     int max = arr[1][1], min = arr[1][1];
//     int a1, a2;
//     int b1, b2;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[i][j] > max)
//             {
//                 int temp1 = arr[i][j];
//                 arr[i][j] = max;
//                 max = temp1;
//                 a1 = i;
//                 a2 = j;
//             }
//             else if (arr[i][j] < min)
//             {
//                 int temp2 = arr[i][j];
//                 arr[i][j] = min;
//                 min = temp2;
//                 b1 = i;
//                 b2 = j;
//             }
//         }
//     }
//     printf("The maximum element is %d with index (%d,%d)", max, a1, a2);
//     printf("The minimum element is %d with index (%d,%d)", min, b1, b2);
//     return 0;
// }

// Q.8. Given a matrix a of dimension nxm and 2 co-ordinates (l1,r1) and (l2,r2). Return the sum of the rectangle from (l1,r1) and (l2,r2).
// #include <stdio.h>
// int main()
// {
//     int r, c;
//     printf("Enter the number of rows: ");
//     scanf("%d", &r);
//     printf("Enter the number of columns: ");
//     scanf("%d", &c);
//     int arr[r][c];
//     printf("Enter the elements in array \n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     int l1, r1, l2, r2;
//     printf("Enter the first co ordinate : ");
//     scanf("%d%d", &l1, &r1);
//     printf("Enter the second co ordinate : ");
//     scanf("%d%d", &l2, &r2);
//     int sum = 0;
//     for (int i = l1; i <= l2; i++)
//     {
//         for (int j = r1; j <= r2; j++)
//         {
//             sum += arr[i][j];
//         }
//     }
//     printf("The sum of the array elements is %d", sum);
//     return 0;
// }

// Q.9. WAP to print the row number having the maximum sum in a given matrix and the maximum sum
// #include <stdio.h>
// int main()
// {
//     int arr[3][3];
//     printf("Enter the elements in array \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     int max = 0;
//     int a;
//     for (int i = 0; i < 3; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             sum += arr[i][j]; // a+=b -> a= a+b
//         }
//         if (max < sum)
//         {
//             max = sum;
//             a = i;
//         }
//     }
//     printf("The maximum sum is %d and its row no. is %d", max, a);
//     return 0;
// }

// Q.10. Given a matrix having only 0-1 only, find the row with the maximum number of 1's.
// #include <stdio.h>
// int main()
// {
//     int arr[3][3];
//     printf("Enter the elements in array \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     int maxcount = 0;
//     int a;
//     for (int i = 0; i < 3; i++)
//     {
//         int max = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[i][j] == 1)
//             {
//                 max++;
//             }
//         }
//         if (maxcount < max)
//         {
//             maxcount = max;
//             a = i;
//         }
//     }
//     printf("There are %d 1's in the %dth row", maxcount, a);
//     return 0;
// }

// Q.11. Write a program to print the transpose if the matrix entered by the user
// #include <stdio.h>
// int main()
// {
//     int r, c;
//     printf("Enter the number of rows : ");
//     scanf("%d", &r);
//     printf("Enter the number of columns : ");
//     scanf("%d", &c);
//     int arr[r][c];
//     printf("Enter the elements in array \n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("The transpose of the matrix is \n");
//     for (int i = 0; i < c; i++)
//     {
//         for (int j = 0; j < r; j++)
//         {
//             printf("%d ", arr[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q.12. Write a program to print the transpose of the matrix entered by the user and store it in a seperate matrix.
// #include <stdio.h>
// int main()
// {
//     int r, c;
//     printf("Enter the number of rows : ");
//     scanf("%d", &r);
//     printf("Enter the number of columns : ");
//     scanf("%d", &c);
//     int arr[r][c];
//     printf("Enter the elements in array \n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     int trans[c][r];
//     for (int i = 0; i < c; i++)
//     {
//         for (int j = 0; j < r; j++)
//         {
//             trans[j][i] = arr[i][j];
//         }
//     }
//     printf("The transpose of the matrix is \n");
//     for (int i = 0; i < c; i++)
//     {
//         for (int j = 0; j < r; j++)
//         {
//             printf("%d ", trans[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q.13. WAP to change the given nxn / square matrix into its transpose in the same matrix.
// #include <stdio.h>
// int main()
// {
//     int arr[3][3];
//     printf("Enter the elements in array \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = i; j < 3; j++) // to avoid repetition j starts from i (Met 1)
//         {
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }
//     printf("The transpose of the matrix is \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q.14. WAP to rotate a matrix 90 degree clockwise
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of rows and columns : ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter the elements in array \n");
    // Taking Array Input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // Finding the Transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++) // to avoid repetition j ends at i (Met 2)
        {
            int temp1 = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp1;
        }
    }
    // Printing the transpose
    printf("The transpose is  \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // Rotate -> Reverse the array elements keeping row constant
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        int k = n - 1;
        while (j != k)
        {
            // swap arr[i][j] and arr[i][k]
            int temp2 = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp2;
            j++;
            k--;
        }
    }
    // Printing the rotation
    printf("The rotated array is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// Q.15. WAP to print the multiplication of two matrices given by the user
// Matrix multiplication is very different and complex from what you think
// Note:
// -> AxB != BxA
// -> Row is dependent of 1st Matrix and column is dependent on 2nd matrix
// a[m][n] x b[p][q]
// -> For multiplication, n should be equal to p (n==p)
// -> Resultant is mxq
// #include <stdio.h>
// int main()
// {
//     // input the rows and columns
//     int r1, c1;
//     printf("Enter the rows and columns for first array\n");
//     scanf("%d%d", &r1, &c1);
//     int r2, c2;
//     printf("Enter the rows and columns for second array\n");
//     scanf("%d%d", &r2, &c2);
//     // Check condition
//     if (c1 != r2)
//     {
//         printf("The matrix cannot be multiplied \n");
//         return 0;
//     }
//     int a[r1][c1], b[r2][c2];
//     // input the elements in array
//     printf("Enter the elements in first array \n");
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c1; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter the elements in second array \n");
//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             scanf("%d", &b[i][j]);
//         }
//     }
//     // Multiplcation
//     int res[r1][c2]; // going by the rule of multiplication
//     int colrow = r2; // it can be r2 / c1
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             // i row of a[][] and j column of b[][]
//             //( a[i][0] , a[i][1]....) * ( b[0][j] , b[1][j]...)
//             res[i][j] = 0;
//             for (int k = 0; k < colrow; k++)
//             {
//                 res[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }
//     // Printing the array elements
//     printf("The multiplied matrix is  \n");
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             printf("%d ", res[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q.16. WAP to print the matrix in form of wave (Type 1 - Opposite S)
// #include <stdio.h>
// int main()
// {
//     int m;
//     printf("Enter the no. of rows : ");
//     scanf("%d", &m);
//     int n;
//     printf("Enter the no. of columns : ");
//     scanf("%d", &n);
//     int arr[n][n];
//     printf("Enter the elements in array \n");
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     // wave print
//     printf("The wave printing elements are \n");
//     for (int i = 0; i < m; i++)
//     {
//         if (i % 2 == 0)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 printf("%d ", arr[i][j]);
//             }
//         }
//         else
//         {
//             for (int j = n - 1; j >= 0; j--)
//             {
//                 printf("%d ", arr[i][j]);
//             }
//         }
//     }
//     return 0;
// }

// Q.17. WAP to print the matrix in form of wave (Type 1 - Vertical S)
// #include <stdio.h>
// int main()
// {
//     int m;
//     printf("Enter the no. of rows : ");
//     scanf("%d", &m);
//     int n;
//     printf("Enter the no. of columns : ");
//     scanf("%d", &n);
//     int arr[m][n];
//     printf("Enter the elements in array \n");
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     // wave print 2
//     printf("The wave printing elements are \n");
//     for (int j = 0; j < n; j++) // columns
//     {
//         if (j % 2 == 0)
//         {
//             for (int i = m - 1; i >= 0; i--) // rows
//             {
//                 printf("%d ", arr[i][j]);
//             }
//         }
//         else
//         {
//             for (int i = 0; i < m; i++) // rows
//             {
//                 printf("%d ", arr[i][j]); // column constant rows change
//             }
//         }
//     }
//     return 0;
// }

// Q.18. Given an nxm matrix 'a'. print all elements of the matrix in spiral order
// Maintain 4 variables -> min row , max row , min col , max col
// Step 1-> Print min row -> from min col to max col -> increment min row
// Step 2 -> print max col -> from min row to max row -> decrement max col
// Step 3 -> Print min row -> from max col to min col (reverse) -> decrement max row
// Step 3 -> Print min col -> from max row to min row (reverse) -> increment min col
// Base Condition -> If min row > max row then break (or) , min col > max col
// More simpler base condition -> store total no of elements. when each no prints, increase the count. Base Condition count < total no of elements
// #include <stdio.h>
// int main()
// {
//     int m;
//     printf("Enter the no. of rows : ");
//     scanf("%d", &m);
//     int n;
//     printf("Enter the no. of columns : ");
//     scanf("%d", &n);
//     int arr[m][n];
//     printf("Enter the elements in array \n");
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     // For rows
//     int minrow = 0;
//     int maxrow = m - 1;
//     // For columns
//     int mincol = 0;
//     int maxcol = n - 1;
//     // For base condition
//     int total_elements = m * n;
//     int count = 0;
//     while (count < total_elements)
//     {
//         // print the minimum row
//         for (int j = mincol; j <= maxcol && count < total_elements; j++)
//         { // Column number is j
//             printf("%d ", arr[minrow][j]);
//             count++;
//         }
//         minrow++;
//         // print the maximum column
//         for (int i = minrow; i <= maxrow && count < total_elements; i++)
//         { // Row number is i
//             printf("%d ", arr[i][maxcol]);
//             count++;
//         }
//         maxcol--;
//         // print the maximum row (in reverse)
//         for (int j = maxcol; j >= mincol && count < total_elements; j--)
//         { // Column number is j
//             printf("%d ", arr[maxrow][j]);
//             count++;
//         }
//         maxrow--;
//         // print the minimum column (in reverse)
//         for (int i = maxrow; i >= minrow && count < total_elements; i--)
//         {
//             printf("%d ", arr[i][mincol]);
//             count++;
//         }
//         mincol++;
//     }
//     return 0;
// }

// Q.19. Given a positive integer n, generate a nxn matrix filled with elements from 1 to n^2 in spiral order
// Find the answer share it with me too !!!!
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     int matrix[n][n];
//     int value = 1;
//     int i, row_start = 0, row_end = n - 1, col_start = 0, col_end = n - 1;
//     while (row_start <= row_end && col_start <= col_end)
//     {
//         // Fill the top row
//         for (i = col_start; i <= col_end; ++i)
//             matrix[row_start][i] = value++;
//         // Fill the right column
//         for (i = row_start + 1; i <= row_end; ++i)
//             matrix[i][col_end] = value++;
//         // Fill the bottom row if it exists
//         if (row_start < row_end)
//         {
//             for (i = col_end - 1; i >= col_start; --i)
//                 matrix[row_end][i] = value++;
//         }
//         // Fill the left column if it exists
//         if (col_start < col_end)
//         {
//             for (i = row_end - 1; i > row_start; --i)
//                 matrix[i][col_start] = value++;
//         }
//         // Update boundaries
//         ++row_start;
//         --row_end;
//         ++col_start;
//         --col_end;
//     }
//     // Print the generated matrix
//     for (i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//             printf("%d\t", matrix[i][j]);
//         printf("\n");
//     }
//     return 0;
// }
