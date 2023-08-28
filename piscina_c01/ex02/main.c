#include <unistd.h>

void ft_swap(int *a, int *b);

int main()
{
    int a;
    int b;

    a = 42;
    b = 48;
    write(1, "antes: ", 7);
    write(1, &a, 1); // exibe o conteúdo de a que é o char '*'
    write(1, &b, 1); // exibe o conteúdo de b que é o char '0'
    ft_swap(&a, &b);
    write(1, "\ndepois: ", 8);
    write(1, &a, 1); // exibe o conteúdo de a que é o char '0'
    write(1, &b, 1); // exibe o conteúdo de b que é o char '*'
    return (0);
}
