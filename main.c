#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
    int printed_chars = 0;
    
	int value = 42;
    char *text = "Hello, World!";
	
  
    printed_chars = ft_printf("Value: %d, Text: %s\n", value, text);
    printf("PRINTED_CHAR FT_PRINTF = %d\n", printed_chars);
    printed_chars = printf("Value: %d, Text: %s\n", value, text);
    printf("PRINTED_CHAR FT_PRINTF = %d\n", printed_chars);
	printf("\n");

	char c = 'A';
    char *s = "hello";
    void *p = s;
    int d = 42;
    int i = -42;
    unsigned int u = 420;
    unsigned int x = 0x2a;
    unsigned int X = 0x2A;

	 // Simple conversion tests
    printf("Standard printf outputs:\n");
    int std_return;
    std_return = printf("Char: %c, String: %s, Pointer: %p, Int: %d, Negative int :%i, Unsigned: %u, Hex: %x, HEX: %X, Percent: %%\n", c, s, p, d, i, u, x, X);
    printf("Return: %d\n", std_return);

    printf("\nCustom ft_printf outputs:\n");
    int ft_return;
    ft_return = ft_printf("Char: %c, String: %s, Pointer: %p, Int: %d, Negative int :%i, Unsigned: %u, Hex: %x, HEX: %X, Percent: %%\n", c, s, p, d, i, u, x, X);
    printf("Return: %d\n", ft_return);

    // Special cases
    printf("\nTesting special cases with standard printf and ft_printf:\n");
    std_return = printf("Empty string: %s, NULL pointer: %p, Zero: %d, Smallest int: %d\n", "", NULL, 0, INT_MIN);
    ft_return = ft_printf("Empty string: %s, NULL pointer: %p, Zero: %d, Smallest int: %d\n", "", NULL, 0, INT_MIN);
    printf("Standard return: %d, Custom return: %d\n", std_return, ft_return);

    // Test multiple conversions in one line
    printf("\nTesting multiple conversions in one sentence:\n");
    std_return = printf("Here is a number %d and here is a string: %s and here is a hex: %x\n", 42, "forty-two", 42);
    ft_return = ft_printf("Here is a number %d and here is a string: %s and here is a hex: %x\n", 42, "forty-two", 42);
    printf("Standard return: %d, Custom return: %d\n", std_return, ft_return);

    // Test identical conversions
    printf("\nTesting a series of identical conversions:\n");
    std_return = printf("%s%s%s%s%s\n", s, s, s, s, s);
    ft_return = ft_printf("%s%s%s%s%s\n", s, s, s, s, s);
    printf("Standard return: %d, Custom return: %d\n", std_return, ft_return);

    return (0);
}
