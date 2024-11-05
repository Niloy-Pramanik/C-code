// // // #include <stdio.h>
// // // #include <math.h>

// // // int convBase(int num);
// // // int sumOfDigits(int num);
// // // int isPrime(int num);
// // // int primeChecker(int* a, int* b);

// // // int main() {
// // //     int num;
// // //     printf("Enter a number: ");
// // //     scanf("%d", &num);

// // //     // Condition 1 Check
// // //     int baseSix = convBase(num);
// // //     int sum = sumOfDigits(baseSix);
// // //     if(sum % 5 != 0) {
// // //         printf("NO\n");
// // //         return 0;
// // //     }

// // //     // Condition 2 Check
// // //     int firstDigit = num / 10;
// // //     int lastDigit = num % 10;
// // //     int digitsSum = firstDigit + lastDigit;
// // //     int count = 0;
// // //     int primes[digitsSum];
// // //     for(int i = 0; i < digitsSum; i++) {
// // //         if(isPrime(i)) {
// // //             primes[count] = i;
// // //             count++;
// // //         }
// // //     }
// // //     if(primeChecker(primes, &count) <= lastDigit) {
// // //         printf("YES\n");
// // //         return 0;
// // //     }
// // //     printf("NO\n");

// // //     return 0;
// // // }

// // // int convBase(int num) {
// // //     if(num == 0) {
// // //         return 0;
// // //     }
// // //     return (num % 6) + 10 * convBase(num / 6);
// // // }

// // // int sumOfDigits(int num) {
// // //     if(num == 0) {
// // //         return 0;
// // //     }
// // //     return (num % 10) + sumOfDigits(num / 10);
// // // }

// // // int isPrime(int num) {
// // //     if(num < 2) {
// // //         return 0;
// // //     }
// // //     for(int i = 2; i <= sqrt(num); i++) {
// // //         if(num % i == 0) {
// // //             return 0;
// // //         }
// // //     }
// // //     return 1;
// // // }

// // // int primeChecker(int* a, int* b) {
// // //     int count = 0;
// // //     for(int i = 0; i < *b; i++) {
// // //         if(a[i] <= *b) {
// // //             count++;
// // //         }
// // //     }
// // //     return count;
// // // }

// // #include <stdio.h>

// // void printFibonacci(int n) {
// //     int first = 0, second = 1, next;

// //     for (int i = 0; i < n; i++) {
// //         if (i != n - 1) {
// //             if (first == 0)
// //                 printf("%d & ", first);
// //             else if (first % 2 == 0)
// //                 printf("%d $ ", first);
// //             else
// //                 printf("%d # ", first);
// //         } else {
// //             if (first == 0)
// //                 printf("%d", first);
// //             else if (first % 2 == 0)
// //                 printf("%d", first);
// //             else
// //                 printf("%d", first);
// //         }

// //         if (i != n - 1) {
// //             next = first + second;
// //             first = second;
// //             second = next;
// //         }
// //     }
// // }

// // int main() {
// //     int n;

// //     printf("Enter the value of n: ");
// //     scanf("%d", &n);

// //     printf("Fibonacci sequence up to the %dth number:\n", n);
// //     printFibonacci(n);

// //     return 0;
// // }


// #include <stdio.h>

// int factorial(int num) {
//     if (num == 0)
//         return 1;
//     else
//         return num * factorial(num - 1);
// }

// int isStrongNumber(int num) {
//     int originalNum = num;
//     int sum = 0;

//     while (num != 0) {
//         int digit = num % 10;
//         sum += factorial(digit);
//         num /= 10;
//     }

//     return (sum == originalNum);
// }

// void printStrongNumbersInRange(int start, int end) {
//     printf("Strong numbers between %d and %d:\n", start, end);

//     for (int i = start; i <= end; i++) {
//         if (isStrongNumber(i))
//             printf("%d ", i);
//     }

//     printf("\n");
// }

// int main() {
//     int start, end;

//     printf("Enter the range (start end): ");
//     scanf("%d %d", &start, &end);

//     printStrongNumbersInRange(start, end);

//     return 0;
// }
#include <stdio.h>
#include <math.h>

int checkerFunc1(int num) {
    int evenSum = 0, oddSum = 0;
    int digit;

    while (num != 0) {
        digit = num % 10;

        if (digit % 2 == 0)
            evenSum += digit;
        else
            oddSum += digit;

        num /= 10;
    }

    return (oddSum < evenSum) ? 1 : -1;
}

int factorial(int num) {
    int fact = 1;

    while (num > 0) {
        fact *= num;
        num--;
    }

    return fact;
}

int checkerFunc2(int num) {
    int originalNum = num;
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum != originalNum && sum == num) ? 1 : -1;
}

int primeChecker(int num) {
    if (num <= 1)
        return -1;

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return -1;
    }

    return 1;
}

int defectiveChecker(int num) {
    return (primeChecker(num) == 1 && checkerFunc2(num) == -1) ? 1 : -1;
}

int DemogorgonNumber(int num) {
    return (checkerFunc1(num) == 1 && defectiveChecker(num) == 1) ? 1 : -1;
}

void printDemogorgonNumbersInRange(int start, int end) {
    printf("Demogorgon numbers between %d and %d:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (DemogorgonNumber(i))
            printf("%d ", i);
    }

    printf("\n");
}

int main() {
    int start, end;

    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    printDemogorgonNumbersInRange(start, end);

    return 0;
}
