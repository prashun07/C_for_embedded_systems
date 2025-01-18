/**
 * Create an array using calloc.
 * Size and elements of the array are user input.
 * 
 */

#include <stdio.h>
#include <stdlib.h> //Library for dynamic memory allocation in c

int main()
{ 

    int *arr_ptr; //pointer for first byte of array
    int size; //size of array
    printf("Enter Size of array:");
    scanf("%d", &size);

    //ptr= (cast -type* ) calloc(n,element-size) , n-> no. of element
    // calloc return a pointer of type void which can be cast into
    // a pointer of any form.
    // Initialize each block with the default value 0.
    // Memory allocated in contiguous blocks
    arr_ptr = (int *)calloc(size , sizeof(int));

    // If space is insufficient, allocation fails and returns a NULL pointer
    if (arr_ptr == NULL)
    {
        printf("\nInsufficient memory!!");
        exit(0);
    }
    else
    { // if memory is successfully allocated
        for (int i = 0; i < size; i++)
        {  
            printf("\n Enter array details:");
            int x;
            scanf("%d", &x);
            arr_ptr[i] = x;
        }
    }
    //print the elements of array
    printf("\nElements of array are:");
    for (int i = 0; i < size; i++)
    {
        //printf("%x ", &arr_ptr[i]);
        printf("%d ", arr_ptr[i]);
    }
    // Need to free allocated memory to avoid leaks.
    // malloc cannot deallocate memory itself.
    free(arr_ptr);
    return 0;
}
