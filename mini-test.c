int main()
{
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
}
