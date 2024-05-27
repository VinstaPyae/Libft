#include "libft.h";

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
        char	*ptr;
        size_t	i;

        if (s == NULL)
                return (NULL);
        if (start >= ft_strlen(s))
        {
                ptr = (char *)malloc(1);
                if (ptr == NULL)
                        return (NULL);
                ptr[0] = '\0';
                return (ptr);
        }
        ptr = (char *)malloc(len + 1);
        if (ptr == NULL)
                return (NULL);
        i = 0;
        while (i < len && s[start + i] != '\0')
        {
                ptr[i] = s[start + i];
                i++;
        }
        ptr[i] = '\0';
        return (ptr);
}