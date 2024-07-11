.PHONY: all clean re

ALL=libftprintf.a libft.h ft_printf.h

NAME=test

all: $(NAME)

$(NAME): $(ALL) test.c
	cc test.c libftprintf.a -o test

#%:
#	cp ../ft_printf/$@ ./

libftprintf.a:
	cp ../ft_printf/libftprintf.a ./

libft.h:
	cp ../ft_printf/libft.h ./

ft_printf.h:
	cp ../ft_printf/ft_printf.h ./

clean:
	rm -f $(ALL) $(NAME)

re: clean all
