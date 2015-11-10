#include <stdio.h>

main()
{
	int n, c;

	printf("Enter a number\n");
	scanf("%d", &n);

	if ( n == 2 )
		printf("Prime number.\n");
	else
	{	
		for ( c = 2 ; c <= n - 1 ; c++ )
		{
			if ( n % c == 0 );
				printf("C= %d\n", c);
				printf("N= %d\n", n);
				break;
		}
		if ( c != n )
			printf("C= %d\n", c);
			printf("N= %d\n", n);
			printf("%d is not a prime.\n", n);
		else
			printf("C= %d\n", c);
			printf("N= %d\n", n);
			printf("%d is a prime number.\n", n);
	}
	return 0;
}

