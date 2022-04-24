#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define lui size_t

int number_digits(long long );

int main(void)
{
	int n;
	long long x, y, value, z;

	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf("%lld %lld", &x, &y);
		z = number_digits(y);
		z = ceil(pow(10,z));
		value = x%z;
		printf("%s\n", (value == y) ? "encaixa" : "nao encaixa");
	}
	return EXIT_SUCCESS;
}

int number_digits(long long number)
{
    int digits = 0;
    
    while (number)
    {
        number /= 10;
        digits++;
    }
    return digits;
}
/*
 * https://www.beecrowd.com.br/judge/en/problems/view/1240
 * */
