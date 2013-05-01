/* Simplistic unit test of deaks__strrev implementation
 * 
 *	gcc -o test strrev.c test.c
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *deaks__strrev(char *);

    const char prog[] = "Programming Motherfucker, Do You Speak It";
    char *ini = NULL;
    char *rev = NULL;

    int iter;

    ini  = strdup(prog);
    iter = strlen(prog);
    do
    {
        printf("ini: \"%s\"\n", ini);
        printf("rev: \"%s\"\n", rev = deaks__strrev(ini));

	if (--iter > -1)
        {
            ini[iter] = '\0';
            strncpy(ini, prog, iter);
        }
    }
    while (iter > -1);

    return EXIT_SUCCESS;
}
