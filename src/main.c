#include <stdio.h>
#include <functions.h>

int main()
{
	float a, b, c, d, x1, x2;
	printf("%s", "������� a\n");
	scanf("%f", &a);
	printf("%s", "������� b\n");
	scanf("%f", &b);
	printf("%s", "������� c\n");
	scanf("%f", &c);

	d = D(a, b, c);

	if (d < 0)
	{
		printf("����������� �����\n");
	}
	else if (d == 0)
	{
		printf("���� ������\n");
		x1 = X(d, a, b, 1);
		printf("\n%f", x1);
	}
	else
	{
		printf("��� �����\n");
		x1 = X(d, a, b, 1);
		x2 = X(d, a, b, -1);
		printf("\n%f", x1);
		printf("\n%f", x2);
	}

	return 0;
}