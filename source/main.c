#include <stdlib.h>
#include "main.h" // executefs(const char*, const char*)
#include <unistd.h>

int main()
{
    printf("type a file down below to search for.\n");
    char* ssearch_t = malloc(sizeof ssearch_t);
    scanf("%s", ssearch_t);
    printf("checking if file is available...");

    if (access(ssearch_t, F_OK) == 0)
    {
        printf("File exists! now try typing 'main' if your object has a 'main' function. or try typing the name of\n"
               "a function within your object.\n");
        while (true)
        {
            printf(">>> ");
            char* restr = malloc(sizeof restr);
            scanf("%s", restr);
            if (restr)
            executefs(ssearch_t, restr);
        }
    }
}