# Basic Makefile
# debug usage: make DEBUG=1

CC=gcc
SRC=0-check_cycle.c 0-linked_lists.c 0-main.c
INC=lists.h
OBJ=$(SRC:.c=.o)
NAME=cycle
CFLAGS=-Wall -Werror -Wextra -pedantic

DEBUG=0
ifeq ($(DEBUG),1)
	SRC += debugging_fxns.c
	CFLAGS += -g
else
	CFLAGS += -DNO_DEBUG
endif

.PHONY: clean oclean fclean re all betty $(NAME)
all: $(SRC) $(NAME)

betty:
	/home/concati/tools/Betty/betty.sh $(SRC) $(INC)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

fclean: oclean clean

oclean:
	$(RM) debugging_fxns.o $(OBJ)

clean:
	$(RM) .*.swp  $(NAME)


re: oclean betty all
