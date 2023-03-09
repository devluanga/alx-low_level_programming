#include "main.h"
/**
 * wildcmp - compares two strings
 * @s1: 1st string to be compared
 * @s2: second string containing '*' or not
 * Return: 1 if the strings can be considered as identical, and 0
 **/
int wildcmp(char *s1, char *s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) {
        return 0;
    }

    for (int i = 0; i < len1; i++) {
        if (s1[i] != s2[i]) {
            return 0;
        }
    }

    return 1;
}
