// Time and Space Complexity

// Q.1. Given an array of integers with 1 to n elements and the size of the array is n+1. One element is occuring more than once i.e duplicate number is present. Find the dubicate element
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of the array \n");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements in array \n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i + 1; j < 5; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 printf("The duplicate element is %d", arr[i]);
//                 break;
//             }
//         }
//     }
//     return 0;
// }

// Q.2. Bubble Sort in Ascending / Increasing Order
// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
//     int arr[5] = {5, 4, 3, 2, 1};
//     int n = 5; // size of array
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     // bubble sort
//     for (int i = 0; i < n - 1; i++)
//     {
//         bool flag = true; // array is not sorted yet
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 flag = false;
//             }
//         }
//         if (flag == true)   //optimizing bubble sort with the help of checkmark
//         {
//             break;
//         }
//     }
//     printf("\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// Q.3. Bubble sort in Descending / Decreasing Order
// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
//     int arr[5] = {1, 2, 1, 2, 3};
//     int n = 5; // size of array
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     // bubble sort
//     for (int i = 0; i < n - 1; i++)
//     {
//         bool flag = true; // array is not sorted yet
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (arr[j] < arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 flag = false;
//             }
//         }
//         if (flag == true) // optimizing bubble sort with the help of checkmark
//         {
//             break;
//         }
//     }
//     printf("\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// Q.4. Selection Sort
// #include <stdio.h>
// int main()
// {
//     int arr[5] = {2, 1, 5, 7, 4};
//     int n = 5;
//     printf("The unsorted array is \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     // selection sort
//     for (int i = 0; i < n - 1; i++) // n-1 passes
//     {
//         int min = arr[i];
//         int mindx = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (min > arr[j])
//             {
//                 min = arr[j];
//                 mindx = j;
//             }
//         }
//         // swap the min and first element of the unsorted part
//         // swap mindx and i
//         int temp = arr[mindx];
//         arr[mindx] = arr[i];
//         arr[i] = temp;
//     }
//     printf("\n");
//     printf("The sorted array is \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// Q.5. Given an integer array arr, move all 0's to the end of it while maintaining the relative order of the non-zero elements
// #include <stdio.h>
// int main()
// {
//     int arr[5] = {0, 1, 0, 3, 12};
//     int n = 5;
//     printf("Original array: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     int temp[n];
//     int index = 0;
//     // Traverse the original array
//     for (int i = 0; i < n; i++)
//     {
//         // If the current element is non-zero, store it in the temp array
//         if (arr[i] != 0)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }
//     // Fill the remaining elements of the temp array with zeros
//     while (index < n)
//     {
//         temp[index] = 0;
//         index++;
//     }
//     // Copy the modified temp array back to the original array
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = temp[i];
//     }
//     printf("\nModified array: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// Q.6. Given an integer array arr, move all 0's to the end of it while maintaining the relative order of the non-zero elements wihtout using extra array
// #include <stdio.h>
// int main()
// {
//     int arr[5] = {0, 1, 0, 3, 12};
//     int n = 5;
//     printf("Original array: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     int count = 0;
//     // Traverse the array and move non-zero elements to the front
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != 0)
//         {
//             arr[count] = arr[i];
//             count++;
//         }
//     }
//     // Fill the remaining elements with zeros
//     while (count < n)
//     {
//         arr[count] = 0;
//         count++;
//     }
//     printf("\nModified array: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// Q.7. Given an integer array and an integer k where k <= size of array. We need to return the kth smallest element of the array
// #include <stdio.h>
// int main()
// {
//     int arr[6] = {7, 10, 4, 3, 20, 15};
//     int size = 6;
//     int k = 3;
//     printf("Original Array: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     // Sort the array in ascending order using a simple sorting algorithm
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 // Swap elements if they are in the wrong order
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     // Return the kth smallest element
//     int kthSmallest = arr[k - 1];
//     printf("\nThe %dth smallest element is: %d", k, kthSmallest);
//     return 0;
// }

// Q.8. Given an array of digits (values are from 0 to 9). The task is to find the minimum possible sum of two numbers formed from digits of the array. Please note that all digits of the given array must be used to form two numbers.
// Sort the array in ascending order.
// Initialize two variables, num1 and num2, to 0. These variables will store the formed numbers.
// Iterate over the sorted array from the least significant digit position to the most significant digit position.
// For every even-indexed digit, add it to num1, and for every odd-indexed digit, add it to num2.
// Finally, return the sum of num1 and num2, which will be the minimum possible sum of two numbers formed from the array digits.
// #include <stdio.h>
// int main()
// {
//     int arr[6] = {6, 8, 4, 5, 2, 3};
//     int size = 6;
//     // Sort the array in ascending order
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     int num1 = 0;
//     int num2 = 0;
//     // Form the two numbers
//     for (int i = 0; i < size; i++)
//     {
//         if (i % 2 == 0)
//         {
//             num1 = num1 * 10 + arr[i];
//         }
//         else
//         {
//             num2 = num2 * 10 + arr[i];
//         }
//     }
//     int minSum = num1 + num2;
//     printf("Array: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\nMinimum Sum: %d\n", minSum);
//     return 0;
// }
