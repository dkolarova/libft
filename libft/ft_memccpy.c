#include "libft.h"

/*
	DESCRIPTION:
	The ft_memccpy() function copies bytes from memory area src to memory area dst,
	stopping when the character c is found in src, or after n bytes are copied,
	whichever comes first.

	RETURN VALUE:
	If the character c is found, the function returns a pointer to the byte after
	the copy of c in dst. Otherwise, it returns NULL.
*/

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char   *src_ptr;
    unsigned char   *dst_ptr;
    size_t                  i;

    src_ptr = (unsigned char*)src;
    dst_ptr = (unsigned char*)dst;
    i = 0;
    while (i < n)
    {
            dst_ptr[i] = src_ptr[i];
            if (src_ptr[i] == (unsigned char)c)
                return ((void*)(dst_ptr + i + 1));
            i++;
    }
    return (NULL);
}