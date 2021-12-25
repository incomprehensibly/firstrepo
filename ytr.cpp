#include <stdio.h>
int main()
{
	float a[100];
	int n;
	printf("N: ");
	scanf_s("%i", &n);
	int i;
	for (i = 0; i < n; ++i)
	{
		printf("a[%i] : ", i + 1);
		scanf_s("%f", &a[i]);
	}
	float ai1, ai = a[0];
	a[0] = (ai + a[1]) / 2;
	for (i = 1; i < n - 1; ++i)
	{
		ai1 = ai;
		ai = a[i];
		a[i] = (ai1 + ai + a[i + 1]) / 3;
	}
	a[n - 1] = (a[n - 1] + ai) / 2;
	printf("A: \n");
	for (i = 0; i < n; ++i)
		printf(" %i: %f\n", i + 1, a[i]);
	return 0;
}
0;
}