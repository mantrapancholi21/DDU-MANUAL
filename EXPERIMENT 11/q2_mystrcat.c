#include <stdio.h>

// copies string t at the end of string s
void mystrcat(char *s, char *t)
{
    // move s pointer to the end of the string (where '\0' is)
    while (*s != '\0')
        s++;

    // now copy every character of t, including the '\0' at the end
    while (*t != '\0')
    {
        *s = *t;
        s++;
        t++;
    }
    *s = '\0';   // terminate the new string
}

int main()
{
    char s[100], t[50];

    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    mystrcat(s, t);

    printf("After concatenation: %s\n", s);
    return 0;
}
