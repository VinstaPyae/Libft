#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *ptr;

    i = 0;
    ptr = (unsigned char *) s;
    while (i < n)
    {
        if (ptr[i] == (unsigned char)c)
            return ((void *)&ptr[i]);
        i++;
    }
    return (NULL);
}

/* int main()
{
    char buffer[10] = "abcdefghi";
    char *ptr;
    ptr = ft_memchr(buffer, 'f', sizeof(buffer));
    printf("%s\n", ptr);
    return (0);
} */