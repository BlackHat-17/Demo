// #include <stdio.h>

// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int num1, num2, sum;
//     printf("Enter two numbers: ");
    
//     scanf("%d %d", &num1, &num2);
//     sum = num1 + num2;
//     printf("The sum is: %d\n", sum);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
//     if (num1 > num2) {
//         printf("%d is greater.\n", num1);
//     } else if (num2 > num1) {
//         printf("%d is greater.\n", num2);
//     } else {
//         printf("Both numbers are equal.\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int choice;
//     float electricityBill = 0, waterBill = 0, totalBill = 0;
//     float electricityUnits, waterLiters;
//     const float RATE_PER_UNIT = 10.0;
//     const float RATE_PER_LITER = 2.0;

//     do {
//         printf("\nMenu:\n");
//         printf("1. Calculate Electricity Bill\n");
//         printf("2. Calculate Water Bill\n");
//         printf("3. Display Total Bill Amount\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter units of electricity consumed: ");
//                 scanf("%f", &electricityUnits);
//                 if (electricityUnits > 0) {
//                     electricityBill = electricityUnits * RATE_PER_UNIT;
//                     printf("Electricity bill: %.2f\n", electricityBill);
//                 } else {
//                     printf("Invalid input. Units must be greater than 0.\n");
//                 }
//                 break;

//             case 2:
//                 printf("Enter water usage in liters: ");
//                 scanf("%f", &waterLiters);
//                 if (waterLiters > 0) {
//                     waterBill = waterLiters * RATE_PER_LITER;
//                     printf("Water bill: %.2f\n", waterBill);
//                 } else {
//                     printf("Invalid input. Liters must be greater than 0.\n");
//                 }
//                 break;

//             case 3:
//                 totalBill = electricityBill + waterBill;
//                 printf("Total bill amount: %.2f\n", totalBill);
//                 break;

//             case 4:
//                 printf("Exiting the program.\n");
//                 break;

//             default:
//                 printf("Invalid choice. Please select a valid option.\n");
//         }
//     } while (choice != 4);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n = 0, choice, i, minDay, found = 0;
//     float sales[100], totalSales = 0, minSales, searchSales;

//     do {
//         printf("\nMenu:\n");
//         printf("1. Input Daily Sales Data\n");
//         printf("2. Display Sales Data\n");
//         printf("3. Calculate Total Sales\n");
//         printf("4. Find the Day with Lowest Sales\n");
//         printf("5. Search for a Specific Sales Figure\n");
//         printf("6. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter the number of days: ");
//                 scanf("%d", &n);
//                 if (n > 0 && n <= 100) {
//                     printf("Enter sales data for %d days:\n", n);
//                     for (i = 0; i < n; i++) {
//                         printf("Day %d: ", i + 1);
//                         scanf("%f", &sales[i]);
//                     }
//                     printf("Sales data recorded successfully.\n");
//                 } else {
//                     printf("Invalid number of days. Please enter a value between 1 and 100.\n");
//                 }
//                 break;

//             case 2:
//                 if (n > 0) {
//                     printf("Sales data for %d days:\n", n);
//                     for (i = 0; i < n; i++) {
//                         printf("Day %d: %.2f\n", i + 1, sales[i]);
//                     }
//                 } else {
//                     printf("No sales data available. Please input data first.\n");
//                 }
//                 break;

//             case 3:
//                 if (n > 0) {
//                     totalSales = 0;
//                     for (i = 0; i < n; i++) {
//                         totalSales += sales[i];
//                     }
//                     printf("Total sales: %.2f\n", totalSales);
//                 } else {
//                     printf("No sales data available. Please input data first.\n");
//                 }
//                 break;

//             case 4:
//                 if (n > 0) {
//                     minSales = sales[0];
//                     minDay = 1;
//                     for (i = 1; i < n; i++) {
//                         if (sales[i] < minSales) {
//                             minSales = sales[i];
//                             minDay = i + 1;
//                         }
//                     }
//                     printf("Lowest sales is %.2f on Day %d\n", minSales, minDay);
//                 } else {
//                     printf("No sales data available. Please input data first.\n");
//                 }
//                 break;

//             case 5:
//                 if (n > 0) {
//                     printf("Enter sales figure to search: ");
//                     scanf("%f", &searchSales);
//                     found = 0;
//                     for (i = 0; i < n; i++) {
//                         if (sales[i] == searchSales) {
//                             printf("Sales figure %.2f found on Day %d\n", searchSales, i + 1);
//                             found = 1;
//                             break;
//                         }
//                     }
//                     if (!found) {
//                         printf("Sales figure %.2f not found.\n", searchSales);
//                     }
//                 } else {
//                     printf("No sales data available. Please input data first.\n");
//                 }
//                 break;

//             case 6:
//                 printf("Exiting the program.\n");
//                 break;

//             default:
//                 printf("Invalid choice. Please select a valid option.\n");
//         }
//     } while (choice != 6);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char str1[100], str2[100], strcopy[100], concatenated[200];
//     int choice, i, j, length, isequal;

//     do {
//         printf("\nmenu:\n");
//         printf("1. print string length\n");
//         printf("2. print string in reverse order\n");
//         printf("3. copy string and print both\n");
//         printf("4. compare two strings\n");
//         printf("5. concatenate two strings\n");
//         printf("6. exit\n");
//         printf("enter your choice: ");
//         scanf("%d", &choice);
//         getchar();

//         switch (choice) {
//             case 1:
//                 printf("enter a string: ");
//                 fgets(str1, sizeof(str1), stdin);

//                 length = 0;
//                 while (str1[length] != '\0' && str1[length] != '\n') {
//                     length++;
//                 }
//                 printf("length of the string: %d\n", length);
//                 break;

//             case 2:
//                 printf("enter a string: ");
//                 fgets(str1, sizeof(str1), stdin);

//                 length = 0;
//                 while (str1[length] != '\0' && str1[length] != '\n') {
//                     length++;
//                 }

//                 printf("reversed string: ");
//                 for (i = length -1; i >= 0; i--) {
//                     printf("%c", str1[i]);
//                 }
//                 printf("\n");
//                 break;

//             case 3:
//                 printf("enter a string: ");
//                 fgets(str1, sizeof(str1), stdin);

//                 i = 0;
//                 while (str1[i] != '\0') {
//                     strcopy[i] = str1[i];
//                     i++;
//                 }
//                 strcopy[i] = '\0';

//                 printf("original string: %s", str1);
//                 printf("copied string: %s", strcopy);
//                 break;

//             case 4:
//                 printf("enter the first string: ");
//                 fgets(str1, sizeof(str1), stdin);
//                 printf("enter the second string: ");
//                 fgets(str2, sizeof(str2), stdin);

//                 i = 0;
//                 isequal = 1;
//                 while (str1[i] != '\0' && str2[i] != '\0') {
//                     if (str1[i] != str2[i]) {
//                         isequal = 0;
//                         break;
//                     }
//                     i++;
//                 }

//                 if (isequal && str1[i] == '\0' && str2[i] == '\0') {
//                     printf("the strings are equal.\n");
//                 } else {
//                     if (str1[i] > str2[i]) {
//                         printf("the first string is greater.\n");
//                     } else {
//                         printf("the second string is greater.\n");
//                     }
//                 }
//                 break;

//             case 5:
//                 printf("enter the first string: ");
//                 fgets(str1, sizeof(str1), stdin);
//                 printf("enter the second string: ");
//                 fgets(str2, sizeof(str2), stdin);

//                 i = 0;
//                 j = 0;
//                 while (str1[i] != '\0' && str1[i] != '\n') {
//                     concatenated[j++] = str1[i++];
//                 }
//                 i = 0;
//                 while (str2[i] != '\0' && str2[i] != '\n') {
//                     concatenated[j++] = str2[i++];
//                 }
//                 concatenated[j] = '\0';

//                 printf("concatenated string: %s\n", concatenated);
//                 break;

//             case 6:
//                 printf("exiting the program.\n");
//                 break;

//             default:
//                 printf("invalid choice. please try again.\n");
//         }
//     } while (choice != 6);

//     return 0;
// }
// #include <stdio.h>

// // define constants for each sensor (represented by a single bit)
// #define door_sensor 1       // 0001 in binary
// #define window_sensor 2     // 0010 in binary
// #define motion_sensor 4     // 0100 in binary
// #define glass_sensor 8      // 1000 in binary

// // function to check if a specific sensor is active
// int check_sensor_status(int sensor_status, int sensor_mask) {
//     return sensor_status & sensor_mask;  // if the result is non-zero, the sensor is active
// }

// // function to activate a specific sensor by setting the corresponding bit
// int update_sensor_status(int sensor_status, int sensor_mask) {
//     return sensor_status | sensor_mask;  // activates the sensor by setting the corresponding bit
// }

// // function to shift sensor data to the left
// int shift_sensor_data_left(int sensor_status, int shift_count) {
//     return sensor_status << shift_count;
// }

// // function to shift sensor data to the right
// int shift_sensor_data_right(int sensor_status, int shift_count) {
//     return sensor_status >> shift_count;
// }

// int main() {
//     int sensor_status = 0;  // initialize all sensors as inactive

//     // example: activate the motion sensor (bit 2)
//     sensor_status = update_sensor_status(sensor_status, motion_sensor);
//     printf("sensor status after activating motion sensor: %d\n", sensor_status);

//     // check if the motion sensor is active
//     if (check_sensor_status(sensor_status, motion_sensor) != 0) {
//         printf("motion sensor is active.\n");
//     } else {
//         printf("motion sensor is inactive.\n");
//     }

//     // shift sensor data to the right by 1
//     sensor_status = shift_sensor_data_right(sensor_status, 1);
//     printf("sensor status after right shift: %d\n", sensor_status);

//     // shift sensor data to the left by 1
//     sensor_status = shift_sensor_data_left(sensor_status, 1);
//     printf("sensor status after left shift: %d\n", sensor_status);

//     return 0;
// }

// #include <stdio.h>

// // function to input a matrix
// void input_matrix(int matrix[10][10], int rows, int cols) {
//     printf("enter elements of the matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("enter element at [%d][%d]: ", i, j);
//             scanf("%d", &matrix[i][j]);
//         }
//     }
// }

// // function to print a matrix
// void print_matrix(int matrix[10][10], int rows, int cols) {
//     printf("matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// // function to add two matrices
// void add_matrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             result[i][j] = matrix1[i][j] + matrix2[i][j];
//         }
//     }
// }

// // function to multiply two matrices
// void multiply_matrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int rows1, int cols1, int cols2) {
//     for (int i = 0; i < rows1; i++) {
//         for (int j = 0; j < cols2; j++) {
//             result[i][j] = 0;
//             for (int k = 0; k < cols1; k++) {
//                 result[i][j] += matrix1[i][k] * matrix2[k][j];
//             }
//         }
//     }
// }

// // function to find the transpose of a matrix
// void transpose_matrix(int matrix[10][10], int result[10][10], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             result[j][i] = matrix[i][j];
//         }
//     }
// }

// // main function
// int main() {
//     int choice;
//     int rows1, cols1, rows2, cols2;
//     int matrix1[10][10], matrix2[10][10], result[10][10];

//     // display menu
//     printf("matrix operations menu:\n");
//     printf("1. matrix addition\n");
//     printf("2. matrix multiplication\n");
//     printf("3. matrix transpose\n");
//     printf("enter your choice: ");
//     scanf("%d", &choice);

//     if (choice == 1) {
//         // matrix addition
//         printf("enter rows and columns for the matrices: ");
//         scanf("%d %d", &rows1, &cols1);
//         printf("enter elements of first matrix:\n");
//         input_matrix(matrix1, rows1, cols1);
//         print_matrix(matrix1, rows1, cols1);
        
//         printf("enter elements of second matrix:\n");
//         input_matrix(matrix2, rows1, cols1);
//         print_matrix(matrix2, rows1, cols1);
        
//         add_matrices(matrix1, matrix2, result, rows1, cols1);
//         printf("result of matrix addition:\n");
//         print_matrix(result, rows1, cols1);
//     }
//     else if (choice == 2) {
//         // matrix multiplication
//         printf("enter rows and columns for the first matrix: ");
//         scanf("%d %d", &rows1, &cols1);
//         input_matrix(matrix1, rows1, cols1);
//         print_matrix(matrix1, rows1, cols1);

//         printf("enter rows and columns for the second matrix: ");
//         scanf("%d %d", &rows2, &cols2);
//         if (cols1 != rows2) {
//             printf("error: columns of first matrix must match rows of second matrix.\n");
//             return 0;
//         }
//         input_matrix(matrix2, rows2, cols2);
//         print_matrix(matrix2, rows1, cols1);

//         multiply_matrices(matrix1, matrix2, result, rows1, cols1, cols2);
//         printf("result of matrix multiplication:\n");
//         print_matrix(result, rows1, cols2);
//     }
//     else if (choice == 3) {
//         // matrix transpose
//         printf("enter rows and columns for the matrix: ");
//         scanf("%d %d", &rows1, &cols1);
//         input_matrix(matrix1, rows1, cols1);
//         print_matrix(matrix1, rows1, cols1);

//         transpose_matrix(matrix1, result, rows1, cols1);
//         printf("transpose of the matrix:\n");
//         print_matrix(result, cols1, rows1);
//     }
//     else {
//         printf("invalid choice.\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// // function to calculate power using recursion
// int power(int base, int exponent) {
//     if (exponent == 0)
//         return 1;
//     return base * power(base, exponent - 1);
// }

// // function to check if a number is prime
// int is_prime(int num) {
//     if (num < 2)
//         return 0;
//     for (int i = 2; i <= sqrt(num); i++) {
//         if (num % i == 0)
//             return 0;
//     }
//     return 1;
// }

// // function to display all prime numbers in an interval
// void display_primes(int lower, int upper) {
//     printf("prime numbers between %d and %d: ", lower, upper);
//     for (int num = lower; num <= upper; num++) {
//         if (is_prime(num)) {
//             printf("%d ", num);
//         }
//     }
//     printf("\n");
// }

// // function to convert decimal to binary using recursion
// void decimal_to_binary(int num) {
//     if (num > 1){
//         decimal_to_binary(num / 2);
//     }
//     printf("%d", num % 2);   
// }

// int main() {
//     int choice, base, exponent, lower, upper, num;

//     while (1) {
//         // display the menu
//         printf("\nmenu:\n");
//         printf("1. calculate power of a number (recursion)\n");
//         printf("2. display all prime numbers in an interval\n");
//         printf("3. convert decimal number to binary\n");
//         printf("4. exit\n");
//         printf("enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 // power calculation
//                 printf("enter base: ");
//                 scanf("%d", &base);
//                 printf("enter exponent: ");
//                 scanf("%d", &exponent);
//                 printf("result: %d^%d = %d\n", base, exponent, power(base, exponent));
//                 break;
                
//             case 2:
//                 // prime numbers in a range
//                 printf("enter lower bound: ");
//                 scanf("%d", &lower);
//                 printf("enter upper bound: ");
//                 scanf("%d", &upper);
//                 display_primes(lower, upper);
//                 break;
                
//             case 3:
//                 // decimal to binary
//                 printf("enter a decimal number: ");
//                 scanf("%d", &num);
//                 printf("binary representation: ");
//                 decimal_to_binary(num);
//                 printf("\n");
//                 break;
                
//             case 4:
//                 // exit the program
//                 printf("exiting the program...\n");
//                 return 0;
                
                
//             default:
//                 // invalid choice
//                 printf("invalid choice! please enter a valid option.\n");
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// // function to calculate the length of the string using pointers
// int string_length(char *str) {
//     int length = 0;
//     while (*str != '\0') {
//         length++;
//         str++;
//     }
//     return length;
// }

// // function to copy the string from source to destination using pointers
// void string_copy(char *source, char *destination) {
//     while (*source != '\0') {
//         *destination = *source;
//         source++;
//         destination++;
//     }
//     *destination = '\0';  // null terminate the destination string
// }

// int main() {
//     char str1[100], str2[100];

//     // input the string
//     printf("enter a string: ");
//     fgets(str1, sizeof(str1), stdin);  // reading input with spaces
//     str1[string_length(str1) - 1] = '\0';  // remove the newline character

//     // calculate the length of the string
//     int length = string_length(str1);
//     printf("length of the string is: %d\n", length);

//     // copy the string from str1 to str2
//     string_copy(str1, str2);

//     // display the original and copied strings
//     printf("original string: %s\n", str1);
//     printf("copied string: %s\n", str2);

//     return 0;
// }

// #include <stdio.h>

// void convert_amount(float *amount1, float exchange_rate, float *amount2) {
//     *amount2 = *amount1 * exchange_rate;
// }

// void swap_amounts(float *amount1, float *amount2) {
//     float temp = *amount1;
//     *amount1 = *amount2;
//     *amount2 = temp;
// }

// int main() {
//     float amount1, amount2, exchange_rate;

//     printf("enter the amount in the first currency (e.g., usd): ");
//     scanf("%f", &amount1);

//     printf("enter the exchange rate (e.g., 1 usd = x eur): ");
//     scanf("%f", &exchange_rate);

//     convert_amount(&amount1, exchange_rate, &amount2);

//     printf("\namount in the first currency (e.g., usd): %.2f\n", amount1);
//     printf("converted amount in the second currency (e.g., eur): %.2f\n", amount2);

//     swap_amounts(&amount1, &amount2);

//     printf("\nafter swapping:\n");
//     printf("amount in the first currency (e.g., usd): %.2f\n", amount1);
//     printf("amount in the second currency (e.g., eur): %.2f\n", amount2);

//     return 0;
// }

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

// #include <stdio.h>
// #include <string.h>

// struct Employee {
//     int emp_id;
//     char name[50];
//     float salary;
// };

// int main() {
//     int n, i, modify_id, found = 0;
    
//     printf("Enter the number of employees: ");
//     scanf("%d", &n);
    
//     struct Employee employees[n];
    
//     // Insert employee records
//     for (i = 0; i < n; i++) {
//         printf("\nEnter details for employee %d:\n", i + 1);
//         printf("Employee ID: ");
//         scanf("%d", &employees[i].emp_id);
        
//         printf("Employee Name: ");
//         getchar(); // Consume the leftover newline
//         fgets(employees[i].name, sizeof(employees[i].name), stdin);
//         employees[i].name[strcspn(employees[i].name, "\n")] = '\0'; // Remove newline
        
//         printf("Employee Salary: ");
//         scanf("%f", &employees[i].salary);
//     }
    
//     // Display all employee records
//     printf("\nEmployee Records:\n");
//     for (i = 0; i < n; i++) {
//         printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].emp_id, employees[i].name, employees[i].salary);
//     }
    
//     // Modify a particular employee record
//     printf("\nEnter the Employee ID to modify: ");
//     scanf("%d", &modify_id);
    
//     for (i = 0; i < n; i++) {
//         if (employees[i].emp_id == modify_id) {
//             found = 1;
//             printf("Enter new name for employee with ID %d: ", modify_id);
//             getchar(); // Consume the newline
//             fgets(employees[i].name, sizeof(employees[i].name), stdin);
//             employees[i].name[strcspn(employees[i].name, "\n")] = '\0';
            
//             printf("Enter new salary for employee with ID %d: ", modify_id);
//             scanf("%f", &employees[i].salary);
//             break;
//         }
//     }
    
//     if (found) {
//         printf("\nModified Employee Record:\n");
//         printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].emp_id, employees[i].name, employees[i].salary);
//     } else {
//         printf("\nEmployee record with ID %d not found.\n", modify_id);
//     }
    
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book {
    char title[100];
    char author[100];
    char isbn[20];
};

void createfileandinsertrecords() {
    FILE *file = fopen("books.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    getchar(); // Consume newline character

    for (int i = 0; i < n; i++) {
        struct book book;
        printf("\nEnter details for book %d:\n", i + 1);
        printf("Title: ");
        fgets(book.title, sizeof(book.title), stdin);
        book.title[strcspn(book.title, "\n")] = '\0';

        printf("Author: ");
        fgets(book.author, sizeof(book.author), stdin);
        book.author[strcspn(book.author, "\n")] = '\0';

        printf("ISBN: ");
        fgets(book.isbn, sizeof(book.isbn), stdin);
        book.isbn[strcspn(book.isbn, "\n")] = '\0';

        fprintf(file, "%s\n%s\n%s\n", book.title, book.author, book.isbn);
    }

    fclose(file);
}

void readanddisplayrecords() {
    FILE *file = fopen("books.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    struct book book;
    printf("\nBook records:\n");
    while (fscanf(file, "%[^\n]\n%[^\n]\n%[^\n]\n", book.title, book.author, book.isbn) != EOF) {
        printf("\nTitle: %s\nAuthor: %s\nISBN: %s\n", book.title, book.author, book.isbn);
    }

    fclose(file);
}

void insertnewrecord() {
    FILE *file = fopen("books.txt", "a");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return;
    }

    struct book book;
    printf("\nEnter details for the new book:\n");
    getchar(); // Consume newline character
    printf("Title: ");
    fgets(book.title, sizeof(book.title), stdin);
    book.title[strcspn(book.title, "\n")] = '\0';

    printf("Author: ");
    fgets(book.author, sizeof(book.author), stdin);
    book.author[strcspn(book.author, "\n")] = '\0';

    printf("ISBN: ");
    fgets(book.isbn, sizeof(book.isbn), stdin);
    book.isbn[strcspn(book.isbn, "\n")] = '\0';

    fprintf(file, "%s\n%s\n%s\n", book.title, book.author, book.isbn);

    fclose(file);
}

void deleterecord() {
    char isbntodelete[20];
    printf("\nEnter ISBN of the book to delete: ");
    getchar(); // Consume newline character
    fgets(isbntodelete, sizeof(isbntodelete), stdin);
    isbntodelete[strcspn(isbntodelete, "\n")] = '\0';

    FILE *file = fopen("books.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    FILE *tempfile = fopen("temp.txt", "w");
    if (tempfile == NULL) {
        printf("Error opening temporary file for writing.\n");
        fclose(file);
        return;
    }

    struct book book;
    int found = 0;
    while (fscanf(file, "%[^\n]\n%[^\n]\n%[^\n]\n", book.title, book.author, book.isbn) != EOF) {
        if (strcmp(book.isbn, isbntodelete) != 0) {
            fprintf(tempfile, "%s\n%s\n%s\n", book.title, book.author, book.isbn);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(tempfile);

    if (found) {
        remove("books.txt");
        rename("temp.txt", "books.txt");
        printf("Record with ISBN %s deleted successfully.\n", isbntodelete);
    } else {
        remove("temp.txt");
        printf("Record with ISBN %s not found.\n", isbntodelete);
    }
}

void modifyrecord() {
    char isbntomodify[20];
    printf("\nEnter ISBN of the book to modify: ");
    getchar(); // Consume newline character
    fgets(isbntomodify, sizeof(isbntomodify), stdin);
    isbntomodify[strcspn(isbntomodify, "\n")] = '\0';

    FILE *file = fopen("books.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    FILE *tempfile = fopen("temp.txt", "w");
    if (tempfile == NULL) {
        printf("Error opening temporary file for writing.\n");
        fclose(file);
        return;
    }

    struct book book;
    int found = 0;
    while (fscanf(file, "%[^\n]\n%[^\n]\n%[^\n]\n", book.title, book.author, book.isbn) != EOF) {
        if (strcmp(book.isbn, isbntomodify) == 0) {
            found = 1;
            printf("\nEnter new details for the book:\n");
            printf("Title: ");
            fgets(book.title, sizeof(book.title), stdin);
            book.title[strcspn(book.title, "\n")] = '\0';

            printf("Author: ");
            fgets(book.author, sizeof(book.author), stdin);
            book.author[strcspn(book.author, "\n")] = '\0';

            printf("ISBN: ");
            fgets(book.isbn, sizeof(book.isbn), stdin);
            book.isbn[strcspn(book.isbn, "\n")] = '\0';
        }
        fprintf(tempfile, "%s\n%s\n%s\n", book.title, book.author, book.isbn);
    }

    fclose(file);
    fclose(tempfile);

    if (found) {
        remove("books.txt");
        rename("temp.txt", "books.txt");
        printf("Record with ISBN %s modified successfully.\n", isbntomodify);
    } else {
        remove("temp.txt");
        printf("Record with ISBN %s not found.\n", isbntomodify);
    }
}

int main() {
    int choice;
    do {
        printf("\nLibrary Management System\n");
        printf("1. Create file and insert records\n");
        printf("2. Read and display records\n");
        printf("3. Insert new record\n");
        printf("4. Delete record\n");
        printf("5. Modify record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createfileandinsertrecords();
                break;
            case 2:
                readanddisplayrecords();
                break;
            case 3:
                insertnewrecord();
                break;
            case 4:
                deleterecord();
                break;
            case 5:
                modifyrecord();
                break;
            case 6:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
