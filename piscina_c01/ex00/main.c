#include <unistd.h>

void ft_ft(int *nbr);

int main()
{
	int var; // declara a variável var
	int *p; // declara ponteiro p

	var = 48;
	p = &var; // p recebe o endereço de var
	write(1, p, 1); // escreve o conteúdo de p (o endereço de var) na tela
	ft_ft(p); // chama a função ft_ft com o parâmetro `p`, o inteiro 42 é o caractere '*'
	write(1, p, 1);
	return (0);
}
