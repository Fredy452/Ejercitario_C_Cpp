#include <stdio.h>
typedef int vector[4];
main()
{
	vector a;
	int i, suma;
	i = suma = 0;
	printf("cargue el vector:\n");
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &a[i]);
		suma = suma + a[i];
	}

	printf("La suma de los elementos es: %d", suma);
}


