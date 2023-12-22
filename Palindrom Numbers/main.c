//
//  main.c
//  Palindrom Numbers
//
//  Created by Mete Turan on 22.12.2023.
//


#include <stdio.h>
#include <stdbool.h> // bool veri tipi için stdbool.h kütüphanesi eklendi

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    int reversed = 0;
    int temp = x;

    while (temp != 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    return (reversed == x);
}

int main() {
    int number = 12321;
    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }
    return 0;
}
