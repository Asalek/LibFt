CC = gcc
FLAGS = -c -Wall -Werror -Wextra
CFILES = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
				ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
				ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_split.c ft_strtrim.c ft_itoa.c
OFILES = ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o ft_isalpha.o ft_isdigit.o ft_isalnum.o \
				ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_strlcpy.o ft_strlcat.o ft_strnstr.o \
				ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_split.o ft_strtrim.o ft_itoa.o
NAME = libft.a


all : ${OFILES}
	${CC} ${FLAGS} ${CFILES}
	ar -r ${NAME} ${OFILES}
clean :
	rm -f ${OFILES}
fclean : clean
	rm -f ${NAME}
re : clean all