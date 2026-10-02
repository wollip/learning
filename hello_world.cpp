#include <iostream>

// // Lession 2
// int add(int a, int b) {
//     return a + b;
// }

// // Solution 1.1c
int min(int a, int b) {
    if (a < b) {
        return a;
    }
    // else b should be smaller
    return b;
}

// This is program start
int main(void) {
    // Lesson 1: Hello world;
    // std::cout << "Hello World" << std::endl;

    // Lession 2: Functions
    // std::cout << add(1, 2) << std::endl;

    // Lession 3: (if)/(else if)/(else)
    // int a = 0;
    // int b = 1;
    // if (a < b) {
    //     std::cout << "first branch" << std::endl;
    //     int min = a;
    //     std::cout << min << std::endl;
    // } else if (a == b) {
    //     std::cout << "second branch" << std::endl;
    //     int min = a
    //     std::cout << min << std::endl;
    // } else {
    //     std::cout << "third branch" << std::endl;
    //     int min = b;
    //     std::cout << min << std::endl;
    // }

    // // Homework 1: find min of a, b, c
    // int a = 0;
    // int b = 1;
    // int c = 2;

    // Solution 1.1a
    // if (a < b) {
    //     if (a < c) {
    //         std::cout << a;
    //     }
    // } else if (b < a) {
    //     if (b < c) {
    //         std:: cout << b;
    //     }
    // } else { // c  should be the smallest
    //     std::cout << c;
    // }

    // Solution 1.1aa:
    /*
    int min;
    if (a <= b && b <= c) {
        min = a
    } else if (b <= a && a <= c) {
        min = b
    } else {
        min = c
    }
    */

    // // Solution 1.1b: two stage if/else
    // int tmp;
    // if (a < b) {
    //     tmp = a;
    // } else {
    //     tmp = b;
    // }

    // if (c < tmp) {
    //     std::cout << c << std::endl;
    // } else {
    //     std::cout << tmp << std::endl;
    // }

    // // Solution 1.1c: Using functions
    // int tmp2 = min(b, c);
    // std::cout << min(a, tmp2) << std::endl;

    // std::cout << min(a, min(b, c)) << std::endl;


    // Lession 4: Loops
    // std::cout << "first for loop" << std::endl;
    // for (int i = 0; i < 3; i = i + 1) {
    //     std::cout << i << std::endl;
    // }
    // std::cout << "second for loop" << std::endl;
    // int arr[] = {0, 1, 2};
    // for (const int a : arr) {
    //     std::cout <<  a << std::endl;
    // }
    // std::cout << "while loop" << std::endl;
    // int i = 0;
    // while(i < 3) {
    //     std::cout << i << std::endl;
    //     i = i + 1;
    // }

    // Homework 2:

    // Given a number of rows, print a pyramid. The number of spaces is irrelevant.
    // Row = 3
    // 1
    // 1 2
    // 1
    // Row = 4
    // 1
    // 1 2
    // 1 2
    // 1

    // Solution 2.1.
    int row_count = 6; // Provided row count.
    // Loop through each row.
    for (int row_number = 1; row_number <= row_count; row_number = row_number + 1 ) {
        // Find the reverse row number
        int reverse_row_number = row_count + 1 - row_number;
        // Always start printing from 1
        int start = 1;
        // End at the smallest of row or reverse row number.
        int finish = min(row_number, reverse_row_number);
        for (int j = 1; j <= finish; j++ ) {
            // Print number without new line.
            std::cout << j << " ";
        }
        // Switch to the next row for printing.
        std::cout << std::endl;
    }

    // Solution 2.2
    // int row_count = 5; // Provided row count.
    // Print increasing triangle of half row count
    // int half_row_count = row_count / 2; // Note that dividing intergers also floor the result.
    // for (int i = 1; i <= half_row_count; i++ ) {
    //     for (int j = 1; j <= i; j++) {
    //         std::cout << j << " ";
    //     }
    //     std::cout << std::endl;
    // }
    // // Print the decreasing triangle of half row count.
    // half_row_count = row_count - half_row_count; // Use subtraction to ensure floor integer works.
    // for (int i = half_row_count; i > 0; i--) {
    //     for (int j = 1; j <= i; j++) {
    //         std::cout << j << " ";
    //     }
    //     std::cout << std::endl;
    // }
}
