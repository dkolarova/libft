#include "libft.h"

/*
	DESCRIPTION:
	The ft_memcpy() function copies n bytes from memory area src to memory area dst.
	The memory areas must not overlap. Use ft_memmove if the memory areas do overlap.

	RETURN VALUE:
	A pointer to dst.
*/

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t                  i;
    unsigned char   *dst_ptr;
    unsigned char   *src_ptr;

    i = 0;
    dst_ptr = (unsigned char*)dst;
    src_ptr = (unsigned char*)src;
    while (i < n)
    {
        dst_ptr[i] = src_ptr[i];
        i++;
    }
    return (dst);
}

/* int main(void)
{
    char src[] = "Hello, World!";
    char dst[20];

    ft_memcpy(dst, src, 14);

    printf("Source: %s\n", src);
    printf("Copied: %s\n", dst);

    return 0;
} */