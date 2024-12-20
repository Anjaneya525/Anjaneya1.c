include <stdio.h>

void checkPalindromeNumber(int num) {
    int originalNum = num;
    int reversedNum = 0;
    int remainder;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the original number and reversed number are the same
    if (originalNum == reversedNum) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkPalindromeNumber(num);
    return 0;
}
