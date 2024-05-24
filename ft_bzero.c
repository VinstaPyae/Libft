#include <unistd.h>
#include <stdio.h>
#include <strings.h>

void    ft_bzero(void *s, size_t n)
{
     int        i;
     
     i = 0;
     while (i < n)
     {
        s = 0;
        i++;
     }
}

int     main()
{
        char buffer[10] = "1";
        int i = 0;
        while (i < sizeof(buffer))
        {
                printf("%s ",buffer);
                i++;
        }
        printf("\n");
        printf("\n");
        bzero(buffer, sizeof(buffer));
        int j = 0;
        while (j < sizeof(buffer))
        {
                printf("%s ",buffer);
                j++;
        }
}