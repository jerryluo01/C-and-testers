#include <stdio.h>
#include <stdlib.h>

int main(void) {
        int num1 = -1;
        int num2 = -1;
        int num3 = -1;
        int extra;
        int input_num;
        char input[30];

        printf("Please input three numbers: ");
        fgets(input, 30, stdin);

        input_num = sscanf(input, "%d %d %d %d", &num1, &num2, &num3, &extra);

        if (input_num != 3 || num1 == 0 || num1 < 0 || num2 < 0 || num3 < 0) {
                puts("Error: Invalid input");
                return -1;
        }

        if (num1 < num2 && num2 < num3) {
                if (num2 % num1 == 0 && num3 % num1 == 0) {
                        puts("Divisible & Increasing");
                        return 0;

                } else {
                        puts("Not divisible & Increasing");
                        return 1;
                }
        }

        if (num2 % num1 == 0 && num3 % num1 == 0) {
                puts("Divisible & Not increasing");
                return 2;
        } else {
                puts("Not divisible & Not increasing");
                return 3;
        }
}
