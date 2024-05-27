#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
        char	*ptr;
        size_t	len;

        if (!s || !f)
                return (NULL);
        len = ft_strlen(s) + 1;
        ptr = (char *)malloc(len);
        if (ptr == NULL)
                return (NULL);
        ptr[len - 1] = '\0';
        while (len-- > 1)
                ptr[len - 1] = f(len - 1, s[len - 1]);
        return (ptr);
}