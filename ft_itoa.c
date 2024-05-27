#include "libft.h"

char	*ft_itoa(int n)
{
        char	*ptr;
        int		len;
        int		nbr;

        len = 1;
        nbr = n;
        while (nbr /= 10)
                len++;
        if (n < 0)
                len++;
        ptr = (char *)malloc(len + 1);
        if (ptr == NULL)
                return (NULL);
        ptr[len] = '\0';
        if (n < 0)
                ptr[0] = '-';
        while (len > 0)
        {
                if (n < 0)
                        ptr[len - 1] = '0' - n % 10;
                else
                        ptr[len - 1] = '0' + n % 10;
                n /= 10;
                len--;
        }
        return (ptr);
}