#include "libft.h"

/* 
The  ft_bzero() function writes n zeroed bytes to the string s.
if n is zero, ft_zero() does nothing.asm

Return Value: NONE (void function)!
*/

void    ft_bzero(void *s, size_t n)
{
    unsigned char   *p;
    size_t          i;

    p = (unsigned char *)s;
    i = 0;
    while (i < n)
        p[i++] = 0;
}

/* 
int main(void)
{
    char buffer[10] = "abcdefghi";

    printf("Before ft_bzero:\n");
    for (int i = 0; i < 10; i++)
        printf("%c ", buffer[i]);
    printf("\n");

    ft_bzero(buffer, 5);  // Zero out the first 5 bytes

    printf("After ft_bzero:\n");
    for (int i = 0; i < 10; i++)
        printf("%c ", buffer[i] ? buffer[i] : '.');  // Print '.' for null bytes
    printf("\n");

    return 0;
}
*/