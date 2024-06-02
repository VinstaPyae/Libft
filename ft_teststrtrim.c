#include "libft.h"

char *ft_teststrtrim(char const *s1, char const *set)
{
        char *ptr;
        size_t len;
        size_t i;
        size_t j;

        if (!s1)
                return (NULL);
        i = 0;
        while (s1[i] && ft_strchr(set, s1[i]))
                i++;
        j = ft_strlen(s1);
        while (j > i && ft_strchr(set, s1[j - 1]))
                j--;
        len = j - i + 1;
        ptr = (char *)malloc(len * sizeof(char));
        if (ptr == NULL)
                return (NULL);
        ft_memcpy(ptr, s1 + i, len - 1);
        ptr[len] = '\0';
        return (ptr);
}

/* int main(void)
{
        char s1[] = "abbbbbbbMy name is Piotrbbabbb babbb bbbb";
        char set[] = "ab";
        char *s = ft_teststrtrim(s1, set);
        printf("%s \n", s);
} */