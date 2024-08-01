#include "libft.h"
#include <stdio.h>
#include <limits.h>
int main()
{
	/* character test */
	char c = -128;
	while (c < 127)
	{
		
		int a = ft_printf("yours:%c\n", c);
		int b = printf("their:%c\n", c);
		if (a != b)
		{
			printf("count problem\nyours: %d\nsystem: %d\n", a, b);
		}
		c++;
	}	
	/* string tests */
	{
		unsigned long long some = 18446110073709551615;
		char *str = (char *)&some;
		{	
			int a = ft_printf("yours:%s\n", str);
			int b = printf("their:%s\n", str);
			if (a != b)
			{
				printf("count problem\nyours: %d\nsystem: %d\n", a, b);
			}
			c++;
		}
	}	
	{
		char *str = 0;
		{	
			int a = ft_printf("yours:%s\n", str);
			int b = printf("their:%s\n", str);
			if (a != b)
			{
				printf("count problem\nyours: %d\nsystem: %d\n", a, b);
			}
			c++;
		}
	}	
	/* Integer tests */
	printf("INTEGER\n");
	{
	
		int a = ft_printf("yours:%i\n", INT_MIN);
		int b = printf("their:%i\n", INT_MIN);
		if (a != b)
		{
			printf("count problem\nyours: %d\nsystem: %d\n", a, b);
		}
		c++;
	}	

	{
	
		int a = ft_printf("yours:%i\n", INT_MIN);
		int b = printf("their:%i\n", INT_MIN);
		if (a != b)
		{
			printf("count problem\nyours: %d\nsystem: %d\n", a, b);
		}
		c++;
	}	
	{
		
		int a = ft_printf("yours:%i\n", INT_MAX);
		int b = printf("their:%i\n", INT_MAX);
		if (a != b)
		{
			printf("count problem\nyours: %d\nsystem: %d\n", a, b);
		}
		c++;
	}	
	{
		
		int a = ft_printf("yours:%i\n", 0);
		int b = printf("their:%i\n", 0);
		if (a != b)
		{
			printf("count problem\nyours: %d\nsystem: %d\n", a, b);
		}
		c++;
	}	
	/* u tests */
	printf("UNSINGNED\n");
	{
	
		int a = ft_printf("yours:%u\n", INT_MIN);
		int b = printf("their:%u\n", INT_MIN);
		if (a != b)
		{
			printf("count problem\nyours: %d\nsystem: %d\n", a, b);
		}
		c++;
	}	
	{
		
		int a = ft_printf("yours:%u\n", INT_MAX);
		int b = printf("their:%u\n", INT_MAX);
		if (a != b)
		{
			printf("count problem\nyours: %d\nsystem: %d\n", a, b);
		}
		c++;
	}	
	{
		
		int a = ft_printf("yours:%i\n", 0);
		int b = printf("their:%i\n", 0);
		printf("\n");
		if (a != b)
		{
			printf("count problem\nyours: %d\nsystem: %d\n", a, b);
		}
		c++;
	}
	{
		int a = ft_printf("yours:%u %u\n", ULONG_MAX, -ULONG_MAX);	
		int b = printf("their:%u %u\n", ULONG_MAX, -ULONG_MAX);	
		printf("\n");
		if (a != b)
		{
			printf("count problem\nyours: %d\nsystem: %d\n", a, b);

		}
	}
	{
		int a = ft_printf("yours:%i \n", 0xF);	
		int b = printf("their:%i \n", 0xF);	
		printf("\n");
		if (a != b)
		{
			printf("count problem\nyours: %d\nsystem: %d\n", a, b);

		}
	}
	printf("pointers\n");
	{
		int a = ft_printf("yours:%p \n", 0xF);	
		int b = printf("their:%p \n", 0xF);	
		printf("\n");
		if (a != b)
		{
			printf("count problem\nyours: %d\nsystem: %d\n", a, b);

		}
	}
	{
		int a = ft_printf("yours:%p \n", 0);	
		int b = printf("their:%p \n", 0);	
		printf("\n");
		if (a != b)
		{
			printf("count problem\nyours: %d\nsystem: %d\n", a, b);

		}
	}
	{
		int a = ft_printf("yours:%p \n", 0xFFFFFFFFFF);
		int b = printf("their:%p \n", 0xFFFFFFFFFF);
		printf("\n");
		if (a != b)
		{
			printf("count problem\nyours: %d\nsystem: %d\n", a, b);

		}
	}
	{
		int a = ft_printf("yours:%p \n", 0xFFFFFFFFFFFF);
		int b = printf("their:%p \n", 0xFFFFFFFFFFFF);
		printf("\n");
		if (a != b)
		{
			printf("count problem\nyours: %d\nsystem: %d\n", a, b);

		}
	}
	{
		int a = ft_printf("yours:%p \n", 0xFFFFFFFF);
		int b = printf("their:%p \n", 0xFFFFFFFF);
		printf("\n");
		if (a != b)
		{
			printf("count problem\nyours: %d\nsystem: %d\n", a, b);

		}
	}
	{
		int a = ft_printf("yours:%p \n", 0xFFFFFFFFFFFFFFF);
		int b = printf("their:%p \n", 0xFFFFFFFFFFFFFFF);
		printf("\n");
		if (a != b)
		{
			printf("count problem\nyours: %d\nsystem: %d\n", a, b);

		}
	}
	{
		int a = ft_printf("yours:%p \n", 0xFFFFFFFFFFFFFFFF);
		int b = printf("their:%p \n", 0xFFFFFFFFFFFFFFFF);
		printf("\n");
		if (a != b)
		{
			printf("count problem\nyours: %d\nsystem: %d\n", a, b);

		}
	}
	printf("some percent shenanigans\n");	
	{
		int a = ft_printf(" %d asdasdasdasd %", 1223123);
		printf("\n");
//		int a = 0;
//		printf("\n");
		int b = printf(" %d asdasdasdasd %", 1223123);	
//		int b = 0;
		if (a != b)
		{
			printf("count problem\nyours: %d\nsystem: %d\n", a, b);

		}
	}

/*
	int ptr = -6337824;
	int a = ft_printf("yours: %i\n", ptr);
	int b = printf("their:%i\n", ptr);
	if (a != b)
	{
		printf("count problem\nyours: %d\nsystem: %d\n", a, b);

	}*/
	return 0;
}
