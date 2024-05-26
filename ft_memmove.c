#include "libft.h"

void    ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    if (d == s)
        return ;
    if (s < d)
    {
        s += len;
        d += len;
        while (len--)
            *--d = *--s;
    }
    else
        while (len--)
            *d++ = *s++;
}