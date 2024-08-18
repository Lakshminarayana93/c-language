#include <stdio.h>
#include <string.h>

int main() {
    char str1[50];
    char str2[50];
    int count1[256] = {0};
    int count2[256] = {0};
    int i;
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);
    if (strcmp(str1, str2) == 0)
        printf("The two strings are anagrams.\n");
    else
        printf("The two strings are not anagrams.\n");
    for (i = 0; str1[i] && str2[i]; i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            printf("The two strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The two strings are anagrams.\n");
    return 0;
}
