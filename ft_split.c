#include "libft.h"

char	**ft_split(char const *s, char c)
{
        char	**ptr;
        size_t	i;
        size_t	j;
        size_t	k;

        if (!s)
                return (NULL);
        ptr = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
        if (ptr == NULL)
                return (NULL);
        i = 0;
        j = 0;
        while (s[i] != '\0')
        {
                if (s[i] != c)
                {
                        k = 0;
                        ptr[j] = (char *)malloc(ft_strlen(s) + 1);
                        if (ptr[j] == NULL)
                                return (NULL);
                        while (s[i] != c && s[i] != '\0')
                                ptr[j][k++] = s[i++];
                        ptr[j++][k] = '\0';
                }
                else
                        i++;
        }
        ptr[j] = NULL;
        return (ptr);
}