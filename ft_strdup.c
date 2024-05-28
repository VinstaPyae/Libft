#include "libft.h"

char        *ft_strdup(const char *s1)
{
        char	*ptr;
        size_t	len;

        len = ft_strlen(s1) + 1;
        ptr = (char *)malloc(len);
        if (ptr == NULL)
                return (NULL);
        ft_memcpy(ptr, s1, len);
        return (ptr);
}

/* int     main()
{
        char *str = "Hello World!";
        char *dup = ft_strdup(str);
        printf("%s\n", dup);
        free(dup);
        return (0);
} */