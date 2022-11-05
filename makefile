NAME = libft.a
cc = cc
Cflages = -Wall -Wextra -Werror
Cfiles = ft_calloc.c \
		ft_isdigit.c \
		ft_memcmp.c \
		ft_strchr.c \
		ft_strlcpy.c \
		ft_isalnum.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_substr.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_itoa.c \
		ft_memmove.c \
		ft_strjoin.c \
		ft_strncmp.c \
		ft_tolower.c \
		ft_bzero.c \
		ft_isascii.c \
		ft_memchr.c \
		ft_memset.c \
		ft_strlcat.c \
		ft_strrchr.c \
		ft_toupper.c \
		ft_strnstr.c \
		ft_strmapi.c \
		ft_split.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strtrim.c \
		ft_striteri.c \


Ofile = $(Cfiles:.c=.o)

all : $(NAME)

$(NAME): $(Ofile)
	@ar rc $(NAME) $(Ofile)

%.o: %.c libft.h
	@$(cc) $(Cflages) -c $<

clean :
	@rm -rf $(Ofile)

fclean : clean
	@rm -rf	$(NAME)

re: fclean all
.PHONY: all fclean clean re
