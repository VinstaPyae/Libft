#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
        char	*ptr;
        size_t	len;

        if (!s1 || !s2)
                return (NULL);
        len = ft_strlen(s1) + ft_strlen(s2) + 1;
        ptr = (char *)malloc(len);
        if (ptr == NULL)
                return (NULL);
        ft_memcpy(ptr, s1, ft_strlen(s1));
        ft_memcpy(ptr + ft_strlen(s1), s2, ft_strlen(s2) + 1);
        return (ptr);
}