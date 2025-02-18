#include<stdio.h>
#include<stdlib.h>
int main(){
    //use of malloc
    int *ptr;
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    ptr = (int*)malloc(n*sizeof(int));
    printf("Enter the elements of the array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("The elements of the array are: ");

    for(int i = 0; i < n; i++){
        printf("%d \n", ptr[i]);
    }
    
    //use of calloc
    int *ptr2;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    ptr2 = (int*) calloc(n, sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Enter the element %d of the array: ", i);
        scanf("%d", &ptr2[i]);
    }
    printf("The elements of the array are: ");
    for (int i = 0; i < n; i++)
    {
       printf("%d \n", ptr2[i]);
    }
    
    //use of realloc
    int *ptr3;
    printf("Enter the size of the new array: ");
    scanf("%d", &n);
    ptr3 = (int*) realloc(ptr3, n*sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Enter the element %d of the array: ", i);
        scanf("%d", &ptr3[i]);
    }
    printf("The elements of the array are: ");
    for (int i = 0; i < n; i++)
    {
       printf("%d \n", ptr3[i]);
    }
    //freeing the memory
    free(ptr);



    return 0;
}