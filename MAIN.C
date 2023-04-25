#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int l;
    int l2;
    unsigned int us;
    void *a;

    l = _printf("Let's try to printf a simple sentence.\n");
    l2 = printf("Let's try to printf a simple sentence.\n");
    us = (unsigned int)INT_MAX + 1024;
    a = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", l, l);
    printf("Length:[%d, %i]\n", l2, l2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", us);
    printf("Unsigned:[%u]\n", us);
    _printf("Unsigned octal:[%o]\n", us);
    printf("Unsigned octal:[%o]\n", us);
    _printf("Unsigned hexadecimal:[%x, %X]\n", us, us);
    printf("Unsigned hexadecimal:[%x, %X]\n", us, us);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", a);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
