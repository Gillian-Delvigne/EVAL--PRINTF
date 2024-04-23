#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
    int value = 42;
    char* text = "Hello, World!";
    int printed_chars = 0;
  
    printed_chars = ft_printf("Value: %d, Text: %s\n", value, text);
    printf("PRINTED_CHAR FT_PRINTF = %d\n", printed_chars);
    printed_chars = printf("Value: %d, Text: %s\n", value, text);
    printf("PRINTED_CHAR FT_PRINTF = %d\n", printed_chars);
    return (0);
}
