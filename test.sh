cd ~/ft_printf
make re
cd ~/tests/ft_printf
cp ~/ft_printf/libftprintf.a ~/tests/ft_printf/
cp ~/ft_printf/ft_printf.h ~/tests/ft_printf/
cp ~/ft_printf/libft.h ~/tests/ft_printf/
#cc test.c libftprintf.a && ./a.out
cc -g3 -fsanitize=address mini-test.c libftprintf.a && ./a.out
