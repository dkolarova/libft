#include "libft.h"

/*
	DESCRIPTION:
	The ft_memchr() function scans the initial n bytes of the memory area 
	pointed to by s for the first occurrence of the byte value c (converted to an unsigned char).

	RETURN VALUE:
	A pointer to the matching byte, or NULL if the byte does not occur in the given memory area.
*/

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *ptr;
    size_t              i;

    ptr = (unsigned char*)s;
    i = 0;
    while (i < n)
    {
        if (ptr[i] == (unsigned char)c)
                return ((void*)(ptr + i));
        i++;
    }
    return (NULL);
}

int main(void)
{
    char data[] = "42 Network";

    char *result = ft_memchr(data, 'N', 10);
    if (result)
        printf("Found: %s\n", result);
    else
        printf("Character not found.\n");
    
    return (0);
}