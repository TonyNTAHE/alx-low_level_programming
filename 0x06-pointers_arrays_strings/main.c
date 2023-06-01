#include <stdio.h>

char *cap_string(char *s)
{
    int i = 0;
    
    while (s[i])
    {
        if (s[i] == '.')
        {
            i = i + 1;
            if (s[i] != ' ')
            {
                 if (s[i] >= 97 && s[i] <= 122)
                {
                    s[i] -= 32;
                    
                }
            }
        }
            if (s[i] == ' ' || s[i] == '\t' ||s[i] == '\n')
            {
                i = i + 1 ;
                if (s[i] >= 97 && s[i] <= 122)
                {
                    s[i] -= 32;
                    
                }
            }
        i++;
    }
    return (s);
}
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
