#include "libft.h"

/*
	DESCRIPTION:
	The ft_memcmp() function compares the first n bytes of the memory areas s1 and s2.

	RETURN VALUE:
	- Returns an integer less than, equal to, or greater than zero if the first n bytes of s1 
	  are found to be less than, to match, or be greater than the first n bytes of s2.
	- Comparison is done as unsigned char.
*/

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *ptr_s1;
    unsigned char   *ptr_s2;
    size_t                 i;

    ptr_s1 = (unsigned char*)s1;
    ptr_s2 = (unsigned char*)s2;
    i = 0;
    while (i < n)
    {
        if (ptr_s1[i] != ptr_s2[i])
                return (ptr_s1[i] - ptr_s2[i]);
        i++;
    }
    return (0);
}

int main(void)
{
	char a[] = "Hello42";
	char b[] = "Hello21";

	int result = ft_memcmp(a, b, 7);

	if (result == 0)
		printf("Blocks are equal.\n");
	else if (result < 0)
		printf("Block a is less than block b.\n");
	else
		printf("Block a is greater than block b.\n");

	return 0;
}