##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Main Makefile
##

CC	=	gcc

SRC_MAIN	=	src/main.c	\
				src/open_file.c	\
				src/sortFile.c	\

NAME_MAIN	=	sortFile

CFLAGS = -Wall -Wextra -I./inc/ -I./lib/include -I./lib/my/external_files/inc

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

all: $(NAME_MAIN)

$(NAME_MAIN):	$(OBJ_MAIN)
		$(CC) -o target/$(NAME_MAIN) $(OBJ_MAIN) $(CFLAGS)

debug: CFLAGS	+=	-g
debug: fclean	$(NAME_MAIN)

clean:
	find . -type f -name "*.o" -delete
	rm -f $(OBJ_MAIN)

fclean: clean
	find . -type f -name "*.a" -delete
	rm -f $(NAME_MAIN)

re: fclean clean all

.PHONY: re fclean clean all
