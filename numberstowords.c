#include <stdio.h>
#include <stdbool.h>

const char* ones(int n) {
    switch(n) {
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        default: return "";
    }
}

const char* elevenes(int n) {
    switch(n) {
        case 11: return "eleven";
        case 12: return "twelve";
        case 13: return "thirteen";
        case 14: return "fourteen";
        case 15: return "fifteen";
        case 16: return "sixteen";
        case 17: return "seventeen";
        case 18: return "eighteen";
        case 19: return "nineteen";
        default: return "";
    }
}

const char* tens(int n) {
    switch(n) {
        case 10: return "ten";
        case 20: return "twenty";
        case 30: return "thirty";
        case 40: return "forty";
        case 50: return "fifty";
        case 60: return "sixty";
        case 70: return "seventy";
        case 80: return "eighty";
        case 90: return "ninety";
        default: return "";
    }
}

const char* hundreds(int n) {
    switch(n) {
        case 100: return "one hundred";
        case 200: return "two hundred";
        case 300: return "three hundred";
        case 400: return "four hundred";
        case 500: return "five hundred";
        case 600: return "six hundred";
        case 700: return "seven hundred";
        case 800: return "eight hundred";
        case 900: return "nine hundred";
        default: return "";
    }
}

void printWord(const char* word, bool *printed) {
    if(word && word[0] != '\0') {
        if(*printed) {
            printf(" ");
        }
        printf("%s", word);
        *printed = true;
    }
}

void numberToWords(long long num) {
    if(num == 0) {
        printf("zero");
        return;
    }
    bool printed = false;

    // billions
    if(num >= 1000000000LL) {
        numberToWords(num / 1000000000LL);
        printWord("billion", &printed);
        num %= 1000000000LL;
    }
    // millions
    if(num >= 1000000LL) {
        numberToWords(num / 1000000LL);
        printWord("million", &printed);
        num %= 1000000LL;
    }
    // thousands
    if(num >= 1000LL) {
        numberToWords(num / 1000LL);
        printWord("thousand", &printed);
        num %= 1000LL;
    }
    // hundreds
    if(num >= 100LL) {
        int h = (int)((num / 100LL) * 100);
        printWord(hundreds(h), &printed);
        num %= 100LL;
    }
    // tens
    if(num >= 20LL) {
        int t = (int)(num - (num % 10));
        printWord(tens(t), &printed);
        num %= 10LL;
    }
    // 11 to 19 special case
    if(num >= 11 && num <= 19) {
        printWord(elevenes((int)num), &printed);
        num = 0;
    }
    // ones
    if(num >= 1 && num <= 9) {
        printWord(ones((int)num), &printed);
        num = 0;
    }
}

int main() {
    long long num;
    printf("Enter numbers up to 100 billion and get their word representation.\n");
    printf("To exit, enter -1.\n");
    while(1) {
        printf("\nEnter the number (or -1 to exit): ");
        if(scanf("%lld", &num) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            while(getchar() != '\n'); // clear input buffer
            continue;
        }
        if(num == -1) {
            break;
        }
        if(num < 0 || num > 100000000000LL) {
            printf("Please enter a number between 0 and 100,000,000,000 (100 billion).\n");
            continue;
        }
        numberToWords(num);
        printf("\n");
    }
    return 0;
}
