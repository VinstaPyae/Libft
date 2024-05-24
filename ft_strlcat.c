#include <unistd.h>
#include <stdio.h>
#include <string.h>

/* size_t strlcpy(char *dst, const char *src, size_t dstsize)
{
    int i;

    i = 0;
    while (i < dstsize)
    {
        i++;
    }
} */

int main()
{
    char dest[20] = "Hello";
    const char *source = " World!";
    size_t result = strlcat(dest, source, sizeof(dest));

    printf("Concatenated string: %s\n", dest);
    printf("Total length: %zu\n", result);

    return 0;
}