#include <stdio.h>

char *cap_string(char *s)
{
    int i = 0;

    while (s[i])
    {
        if (s[i] == '.' || s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
        {
            i++;
            if (s[i] >= 'a' && s[i] <= 'z')  // Use single quotes for character literals
            {
                s[i] -= 32;  // Convert lowercase to uppercase by subtracting 32
            }
        }
        else
        {
            i++;
        }
    }
    
    return s;
}

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 012356hello world\thello world.hello world\n";
char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);

    return 0;
}
