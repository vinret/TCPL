#include<stdio.h>
#include<ctype.h>
void int_to_string(int n) {
    switch (n) {
    case 0:
        printf("%s", "ling");
        break;
    case 1:
        printf("%s", "yi");
        break;
    case 2:
        printf("%s", "er");
        break;
    case 3:
        printf("%s", "san");
        break;
    case 4:
        printf("%s", "si");
        break;
    case 5:
        printf("%s", "wu");
        break;
    case 6:
        printf("%s", "liu");
        break;
    case 7:
        printf("%s", "qi");
        break;
    case 8:
        printf("%s", "ba");
        break;
    case 9:
        printf("%s", "jiu");
        break;
    default:
        break;
    }
}
void string_output(int num) {
    if (num / 10) {
        string_output(num / 10);
        if ((num / 10) != 0) {
            printf(" ");
        }
        int_to_string(num % 10);
    } else {
        int_to_string(num);
    }
}
int get_Input_Sum() {
    char ch;
    int sum = 0;
    while ((ch = getchar()) != '\n') {
        if (isdigit(ch)) {
            sum += ch - 0x30;
        }
    }
    return sum;
}
void int_to_reverse(int num) {
    if (num < 0) {
        num = -num;
        int_to_string(-1);
        printf(" ");
        string_output(num);
    } else if (num == 0) {
        int_to_string(0);
    } else {
        string_output(num);
    }
}
int main() {
    int_to_reverse(get_Input_Sum());
    return 0;
}
