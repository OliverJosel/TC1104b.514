
#include <unistd.h>
#include <ctype.h>

int main()
{
    char l;
    char may;
    int n;
    int contador = 0;
    do
    {
        n = read(STDIN_FILENO, &c, 1);
        may = toupper(l);
        if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u')
        {
            may = '1';
        }
        write(STDOUT_FILENO, &may, 1);
    }
    while (n != 0);
    return 0;
}