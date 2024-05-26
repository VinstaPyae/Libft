#include "libft.h"

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
/*     char dest[10] = "Hello";
    char src[] = " World";
    ft_strlcat(dest, src, sizeof(dest));
    printf("%s\n", dest); */
    
    char dest[5] = "Test";
    char src[] = "12345";
    strlcat(dest, src, sizeof(dest));
    printf("%s\n", dest);
}