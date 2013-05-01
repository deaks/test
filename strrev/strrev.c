#include <string.h>

char *
deaks__strrev(char * s)
{
    char *lhs = s, *rhs = strlen(s) + s - 1;
    while (lhs < rhs)
    {
        *lhs ^= *rhs;
        *rhs ^= *lhs;
        *lhs ^= *rhs;
        lhs++, rhs--;
    }
    return s;
}
