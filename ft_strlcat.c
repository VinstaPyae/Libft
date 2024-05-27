#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t dest_len;
    size_t src_len;

    i = 0;
    j = 0;
    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    while (dest[i] != '\0' && i < size)
        i++;
    while (src[j] != '\0' && i + j < size - 1)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest_len + src_len);

}

int main()
{
    char dest[10] = "Hello";
    char src[] = " World";
    ft_strlcat(dest, src, sizeof(dest));
    printf("%s\n", dest);
/*     
    char dest[5] = "Test";
    char src[] = "12345";
    strlcat(dest, src, sizeof(dest));
    printf("%s\n", dest); */
}