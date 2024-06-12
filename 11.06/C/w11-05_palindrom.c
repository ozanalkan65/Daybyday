// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Yeuch!\n");
        exit(1);
    }

    // Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
    // Free for personal or classroom use; see 'LICENSE.md' for details.
    // https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define BUFFER_LEN 8192

    int main(int argc, char *argv[])
    {
        char word[BUFFER_LEN];

        if (argc != 2)
        {
            printf("Yeuch!\n");
            exit(1);
        }

        int d = 0;
        for (int s = 0; argv[1][s] != '\0'; ++s)
        {
            if (isalnum(argv[1][s]))
            {
                word[d++] = toupper(argv[1][s]);
            }
        }
        word[d] = '\0';

        printf("%s\n", word);

        int pal = 1;
        for (int t = 0; word[t] != '\0'; ++t)
        {
            if (word[t] != word[strlen(word) - 1 - t])
            {
                pal = 0;
            }
        }
        if (pal)
        {
            printf("Yeah!\n");
        }

        return 0;
    }

    return 0;
}
