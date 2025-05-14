#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char str[20] = "Hello, World!";
    printf("Before bzero: %s\n", str);

    ft_bzero(str + 5, 5);  // zero out part of the string

    printf("After bzero: ");
    for (int i = 0; i < 20; i++) {
        if (str[i] == '\0')
            printf("\\0");
        else
            printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

/* int main() {
    // Create a string with some initial value
    char str[10] = "Hello";
    
    // Use ft_memset to set the first 5 bytes to 'A'
    ft_memset(str, 'A', 5);
    
    // Print the result to check if the memory was set correctly
    printf("Resulting string: %s\n", str); // Expected output: "AAAAA"
    
    return 0;
} */
