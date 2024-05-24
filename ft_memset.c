#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
    int i;
    char *p;

    i = 0;
    p = s;
    while (i < n)
    {
        p[i] = c;
        i++;
    }
    return (s);
}

/* int main()
{
    char buffer[10];
    char buffer_1[10];

    memset(buffer, 'A', sizeof(buffer));
    ft_memset(buffer_1, 'A', sizeof(buffer_1));

    int i = 0;
    while ( i < sizeof(buffer))
    {
        printf("%c ", buffer[i]);
        i++;
    }
    printf("\n");
    int j = 0;
    while ( j < sizeof(buffer_1))
    {
        printf("%c ", buffer_1[j]);
        j++;
    }

    return 0;
} */