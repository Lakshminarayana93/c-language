#include <stdio.h>
#include <string.h>
int main()
{
    char str[500],word[500], max[500], min[500];
    int i = 0, j = 0, flg = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
  for (i = 0; i < strlen(str); i++)
    {
        while (i < strlen(str) && !isspace(str[i]) && isalnum(str[i])) {
            word[j++] = str[i++];
    }
        if (j != 0)
        {
            word[j] = '\0';
            if (!flg)
            {
                flg = 1;
                strcpy(max, word);
                strcpy(min, word);
            }
            if (strlen(word) > strlen(max))
            {
                strcpy(max, word);
            }
            if (strlen(word) < strlen(min))
            {
                strcpy(min, word);
            }
            j = 0;
        }
    }
    printf("The largest word is '%s' and the smallest word is '%s' in the string: '%s'.\n", max, min, str);
}
