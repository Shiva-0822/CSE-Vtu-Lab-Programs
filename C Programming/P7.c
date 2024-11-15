#include <stdio.h>

int string_length(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void string_concat(char str1[], char str2[]) {
    int i, j;
    char str3[50]; // Increased size of the concatenated string buffer
    for (i = 0; i < string_length(str1); i++) {
        str3[i] = str1[i];
    }
    for (j = 0; j < string_length(str2); j++) {
        str3[i++] = str2[j];
    }
    str3[i] = '\0';
    printf("The concatenated string = %s\n", str3);
}

void string_compare(char str1[], char str2[]) {
    int len1, len2, i = 0; // Declared i here
    len1 = string_length(str1);
    len2 = string_length(str2);
    if (len1 != len2) {
        printf("The strings are not equal\n");
    } else {
        for (i = 0; str1[i] != '\0'; i++) {
            if (str1[i] != str2[i]) {
                printf("The strings are not equal\n");
                return; // Terminating function early if strings are found to be unequal
            }
        }
        printf("The strings are equal\n");
    }
}

int main() {
    char str[50], str1[50], str2[50]; // Increased size of input strings
    int choice, length;
    printf("Enter your choice\n");
    printf("Enter 1 for String Length\n");
    printf("Enter 2 for String Concatenation\n");
    printf("Enter 3 for String Comparison\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a string\n");
            scanf("%s", str); // Consider using fgets for safer input handling
            length = string_length(str);
            printf("The length of the string = %d\n", length);
            break;
        case 2:
            printf("Enter first string\n");
            scanf("%s", str1);
            printf("Enter second string\n");
            scanf("%s", str2);
            string_concat(str1, str2);
            break;
        case 3:
            printf("Enter first string\n");
            scanf("%s", str1);
            printf("Enter second string\n");
            scanf("%s", str2);
            string_compare(str1, str2);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}