##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC	=	sources/main.c \
		sources/choose_correct_fct.c	\
		sources/control_fcts_by_size.c	\
		sources/init_list.c	\
		sources/swap_elem.c	\
		sources/operations/operations_swap_first.c	\
		sources/operations/operations_switch_list.c	\
		sources/operations/operations_push_beg.c	\
		sources/operations/operations_push_end.c	\

TEST_SRC	= 	sources/swap_elem.c	\
				sources/choose_correct_fct.c \
				sources/control_fcts_by_size.c \
				sources/init_list.c \
				sources/operations/operations_swap_first.c \
				sources/operations/operations_switch_list.c \
				sources/operations/operations_push_beg.c \
				sources/operations/operations_push_end.c \
				tests/redirect_all_std.c \
				tests/test_init_list.c \
				tests/test_list_size_under_3.c \
				tests/test_list_size_under_6.c \
				tests/test_operations_swap_first.c \
				tests/test_operations_switch_list.c \
				tests/test_operations_push_beg.c \
				tests/test_operations_push_end.c \
				tests/test_swap_elem.c \

NAME 	= 	push_swap

TEST_NAME	=	unit_tests

OBJ	=	$(SRC:%.c=%.o)

RM 	=   	rm

CFLAGS	=	-L./lib/my -I./include -lmy -Wshadow -Wextra -Wall

TEST_FLAGS	=	-lcriterion -lgcov -coverage -fprofile-arcs -ftest-coverage

CC	=	gcc

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		make -C ./lib/my
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

tests:  fclean
			make -C ./lib/my
			$(CC) -o $(TEST_NAME) $(TEST_SRC) $(TEST_FLAGS) $(CFLAGS)

tests_run:  tests
			./$(TEST_NAME)
			gcovr --exclude tests

clean	:
		$(RM) -f $(OBJ) *.gc* *~*

fclean	:	clean
		$(RM) -f $(NAME)
		$(RM) -f $(TEST_NAME)
		make fclean -C ./lib/my

re	:	fclean all

.PHONY	:	all clean fclean re
