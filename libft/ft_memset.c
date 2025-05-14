#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *p;
    unsigned char   ch;

    p = (unsigned char *)b;
    ch = c;
    while (len--)
    {
        *p = ch;
        p++;
    }
    return (b);
}

/* int main(void)
{
	char str[20] = "Hello, world!";

	ft_memset(str, '*', 5);

	printf("Result: %s\n", str);

	return 0;
} */