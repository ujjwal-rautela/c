#include <stdio.h>
#include <string.h>

int main()
{
    char str[60];
    fgets(str, sizeof(str), stdin);

    const int len = strlen(str);
    int i, j, k;

    for (i = j = 0; i <= len - 4; i++) {
        if ((str[i] == 'a' || str[i] == 'A') && str[i + 1] == ' ') {
            i += 1;
        } else if ((str[i] == 'A' || str[i] == 'a') && (str[i + 1] == 'N' || str[i + 1] == 'n')) {
            i += 2;
        } else if ((str[i] == 'T' || str[i] == 't') && str[i + 1] == 'h' && str[i + 2] == 'e' && str[i + 3] == ' ') {
            i += 3;
        } else {
            str[j++] = str[i];
        }
    }

    for (k = i; k < len; k++) {
        str[j++] = str[k];
    }

    str[j] = '\0';
    puts(str);

    return 0;
}
