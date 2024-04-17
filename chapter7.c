#include<stdio.h>

int main(){

/* 

 // ------------------------- Arrays ------------------------- //


 //Definition: Collection of similar data types stored at continuous memory locations

 //Syntax:

 datatype arrayname[size]= {e1,e2,...}

 Elements {5,10,15}
 Index     0, 1, 2


//4 Methods of writing an Array:

int arr[5]={1,2,3,4,5};

int arr[]={1,2,3,4,5};

int arr[5];
int arr[0]=1;
int arr[1]=2; and so on

int arr[5];
for loop (discussed further)


//Designated Initialization

int arr[10]={[0]=1,[5]=10};  (rest all will be zero)


//Q. Write a program to reverse elements in array

int main(){
    int array[4]={1,2,3,4};

    for(int i=3;i>=0;i--){
        printf("%d ",array[i]);
    }
    return 0;
}


 //Input and output

 Input -> scanf("%d", &a[1]);
 Output -> printf("%d", a[1]);



 //Errors

 If array is of a[3] then the index will be 0,1,2
 So if you write &a[3] then it wil show run time error
 Not compile time error (the compiler will not know)



// Bytes and Memory
Each value is stored in a 4 byte location (integer 4 bytes)
So the memory used/reserved is size x 4
Note: Size of char is  1 byte

int arr[10]={1,2,3}
remaining locations will fill with \0 which is null



//Pointer Arithmetic

1. Increment and Decrement
Eg:    

#include<stdio.h>
int main(){
    int age=12;
    int *ptr=&age;
    printf("%d \n", ptr); (we give int so byte increases by 4 if char then inc by 1)
    ptr++;
    printf("%d", ptr);
    return 0;
}
        

2. Subtraction

#include<stdio.h>

int main(){
    int age1=12;
    int *ptr1=&age1;

    int age2=19;
    int *ptr2=&age2;
    
    int sub=ptr2-ptr1;
    printf("%d \n",sub);
    return 0;
}
Note: The pointer data type should be same


3. Comparison

#include<stdio.h>

int main(){
    int age1=12;
    int *ptr1=&age1;

    int age2=19;
    int *ptr2=&age2;
    
    printf("%d \n",ptr1==ptr2);
    return 0;
}



//Array is a Pointer

int *ptr = &arr[0];
int *ptr = arr;
(Both are actually the same, array made is a pointer which points to the first memory location of its size)



// Traverse an array

Inputting and Outputting the whole array

1. Normal Way 

#include<stdio.h>

int main(){
    int array[10];

    for(int i=0;i<3;i++){
        scanf("%d",&array[i]);
    }
    printf("\n");

    for(int j=0;j<3;j++){
        printf("%d \n", array[j]);
    }
}

2. With Pointers




// ------------------------- Arrays ------------------------- //


//Syntax:
int a[3][2]  --> array with 3 rows and 2 columns

Eg:
int a[2][2];
a[0][0]=1;
a[0][1]=2;
a[1][0]=3;
a[1][1]=4;

This will store like -> 1 2
                        3 4

Also we can write it as {{1,2},{3,4}} (1,2 is in first row and 3,4 in second row)

Note: Each row is an array in itself
      Total elements in array are rows x columns -> m x nx

//Scanning and Printing of 2D Arrays

#include<stdio.h>

int main(){
    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n");


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
















*/

    return 0;
}