
CC				=	clang
C_FLAGS			=	-g -Wall -Werror -Wextra

all:
	$(CC) $(C_FLAGS) test_ft_printf.c -L ../ft_printf -l ftprintf
	./a.out

re:
	\rm -f a.out

re: re_build all

