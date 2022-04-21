#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errono is set appropriately.
 **/
int main(void c)
{
        char somebody[] = "_putchar";
        int c;
        for (c=0; c<8; c++)
        {
              _putchar(somebody[c]);
        }
        _putchar('\n');
        return (0);
}
