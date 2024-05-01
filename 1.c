#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';  

    for (int i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        int start = i;
        while (str[i] != ' ' && str[i] != '\0') {
            i++;
        }
        int end = i - 1;
        for (int j = start; j < end; j++, end--) {
            char temp = str[j];
            str[j] = str[end];
            str[end] = temp;
        }
    }
    printf("Reversed string: %s\n", str);
    return 0;
}
