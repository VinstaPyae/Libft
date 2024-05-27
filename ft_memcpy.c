#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
        size_t i;
        unsigned char *d;
        unsigned char *s;
        
        d = (unsigned char *)dest;
        s = (unsigned char *)src;
        i = 0;
        while (i < n)
        {
                d[i] = s[i];
                i++;
        }
        return (dest);
}

/* int main()
{
        char d[12];
        char s[12] = "Hello World!";
        ft_memcpy(d, s, 7);
        printf("%s\n", d);
} */