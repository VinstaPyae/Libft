#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len;
    size_t src_len;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    if (size <= dest_len)
        return (size + src_len);
    if (src_len < size - dest_len)
    {
        ft_memcpy(dest + dest_len, src, src_len + 1);
    }
    else
    {
        ft_memcpy(dest + dest_len, src, size - dest_len - 1);
        dest[size - 1] = '\0';
    }
    return (dest_len + src_len);
}

int main()
{
    char dest[10] = "Hello";
    char src[] = " World";
    ft_strlcat(dest, src, sizeof(dest));
    printf("%s\n", dest);

/*     char dest[5] = "Test";
    char src[] = "12345";
    strlcat(dest, src, sizeof(dest));
    printf("%s\n", dest); */
}