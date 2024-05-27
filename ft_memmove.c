#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *d;
    unsigned char *s;

    i = 0;
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    if (d < s)
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        while (n > 0)
        {
            d[n - 1] = s[n - 1];
            n--;
        }
    }
    return (dest);
}
/* need to ask*/
/* int main() {
    char str1[50] = "Hello, world!";
    char str2[50] = "Goodbye, world!";
    char str3[50] = "Overlap example";
    char str4[50] = "Overlap example";

    printf("Before ft_memmove:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    // Using ft_memmove to copy str1 to str2
    ft_memmove(str2, str1, 13);

    printf("\nAfter ft_memmove:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    // Test overlapping regions
    printf("\nBefore overlapping ft_memmove:\n");
    printf("str3: %s\n", str3);

    // Using ft_memmove with overlapping regions
    ft_memmove(str3 + 5, str3, 7);

    printf("\nAfter overlapping ft_memmove:\n");
    printf("str3: %s\n", str3);

    // Test overlapping regions in reverse
    printf("\nBefore overlapping ft_memmove (reverse):\n");
    printf("str4: %s\n", str4);

    // Using ft_memmove with overlapping regions in reverse
    ft_memmove(str4, str4 + 5, 7);

    printf("\nAfter overlapping ft_memmove (reverse):\n");
    printf("str4: %s\n", str4);
} */