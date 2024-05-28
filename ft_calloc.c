#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;

    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return (NULL);
    ft_bzero(ptr, nmemb * size);
    return (ptr);
}

/* int main(void)
{
    char *ptr;
    ptr = ft_calloc(6, sizeof(char));
    if (ptr == NULL)
    {
        perror("ft_calloc failed");
        return (1);
    }
    return (0);
} */