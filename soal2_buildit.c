#include <stdio.h>
#include <string.h>

void compare_strings(const char* h1, const char* h2) {
    int len1 = strlen(h1);
    int len2 = strlen(h2);
    
    if (len1 != len2) {
        printf("BERBEDA\n");
    } else {
        int result = strcmp(h1, h2);
        if (result == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }
}

int main() {
    char string1[101];
    char string2[101];
    
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0';

    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0';

    compare_strings(string1, string2);

    return 0;
}