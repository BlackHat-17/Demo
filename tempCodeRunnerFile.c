
// #include <stdio.h>
// #include <stdlib.h>

// void accept_and_print_array(int *arr, int size) {
//     printf("\nArray elements are: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", *(arr + i));  // Accessing array elements using pointers
//     }
//     printf("\n");
// }

// void dynamic_array_allocation_and_print() {
//     int *arr, size;

//     printf("\nEnter the number of products: ");
//     scanf("%d", &size);

//     // Dynamic memory allocation for array
//     arr = (int *)malloc(size * sizeof(int));

//     if (arr == NULL) {
//         printf("Memory allocation failed!\n");
//         return;
//     }

//     printf("\nEnter the elements of the array: ");
//     for (int i = 0; i < size; i++) {
//         scanf("%d", arr + i);  // Accepting array elements using pointers
//     }

//     accept_and_print_array(arr, size);

//     // Free dynamically allocated memory
//     free(arr);
//     printf("Memory deallocated.\n");
// }

// int main() {
//     int choice, size;

//     do {
//         printf("\nMenu:\n");
//         printf("1. Accept product details and print using pointer\n");
//         printf("2. Accept product details using dynamic memory allocation and print\n");
//         printf("3. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("\nEnter the number of products: ");
//                 scanf("%d", &size);

//                 // Allocate memory dynamically to avoid stack overflow
//                 int *arr = (int *)malloc(size * sizeof(int));
//                 if (arr == NULL) {
//                     printf("Memory allocation failed!\n");
//                     break;
//                 }

//                 printf("\nEnter the elements of the array: ");
//                 for (int i = 0; i < size; i++) {
//                     scanf("%d", arr + i);  // Accepting array elements using pointers
//                 }

//                 accept_and_print_array(arr, size);

//                 // Free memory
//                 free(arr);
//                 break;

//             case 2:
//                 dynamic_array_allocation_and_print();
//                 break;

//             case 3:
//                 printf("\nExiting the program...\n");
//                 break;

//             default:
//                 printf("\nInvalid choice. Please try again.\n");
//         }
//     } while (choice != 3);

//     return 0;
// }