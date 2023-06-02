#include "main.h"

char *cap_string(char *s)
{
    int i = 0;
    
    while (s[i])
    {
        if ((s[i] == '.' || s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && (s[i + 1] >= 97 && s[i + 1] <= 122))
        {
++i;
            s[i] -= 32;
        }
        ++i;
    }
    
    return s;
}
