.PHONY: all clean re

ALL=libft.a libft.h

NAME=test

all: $(NAME)

$(NAME): $(ALL) test.c
	cc test.c libft.a -o test

#%:
#	cp ../ft_printf/$@ ./

libft.a:
	make -C ../libft re
	cp ../libft/libft.a ./

libft.h:
	cp ../libft/libft.h ./

clean:
	rm -f $(ALL) $(NAME)

re: clean all
