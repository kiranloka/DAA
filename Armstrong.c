#include<stdio.h>
#include<math.h>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int isArmstrong(int num) {
    int originalNumber = num;
    int n = countDigits(num);
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }
    return (originalNumber == sum);
}

int main() {
    int num;
    printf("Enter a number to check Armstrong or not: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong Number!\n", num);
    } else {
        printf("%d is not an Armstrong Number\n", num);
    }

    return 0;
}
