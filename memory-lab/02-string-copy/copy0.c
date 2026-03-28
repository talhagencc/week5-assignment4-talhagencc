#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char s[100];

    // Get a string
    printf("s: ");
    fgets(s, sizeof(s), stdin);

    // Remove newline character if present
    s[strcspn(s, "\n")] = '\0';

    // Copy string
    char t[100];
    strcpy(t, s);

    // Capitalize first letter
    t[0] = toupper((unsigned char)t[0]);

    // Print both strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    return 0;
}