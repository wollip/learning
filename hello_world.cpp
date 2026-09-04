#include <iostream>

// Lession 2
int add(int a, int b) {
    return a + b;
}

// Solution 1c
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

    // Homework 1: find min of a, b, c
    int a = 0;
    int b = 1;
    int c = 2;

    // Solution 1a
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

    // Solution 1aa:
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

    // Solution 1b: two stage if/else
    int tmp;
    if (a < b) {
        tmp = a;
    } else {
        tmp = b;
    }

    if (c < tmp) {
        std::cout << c << std::endl;
    } else {
        std::cout << tmp << std::endl;
    }

    // solution 1c: Using functions
    int tmp2 = min(b, c);
    std::cout << min(a, tmp2) << std::endl;

    std::cout << min(a, min(b, c)) << std::endl;


    // Lession 4: For
    int numbers[] = {1,2,3,4};
    int tmp3;
    for (int i = 0; i < 3; i++) {
        tmp3 = min(tmp3, numbers[i]);
    }
    std::cout << tmp3 << std::endl;
}