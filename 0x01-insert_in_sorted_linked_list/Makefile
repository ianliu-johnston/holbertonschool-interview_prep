# Basic Makefile
# debug usage: make DEBUG=1

CC=gcc
SRC_DIR=src
SRC=0-insert_number.c\
   	$(SRC_DIR)/0-linked_lists.c\
	$(SRC_DIR)/0-main.c
INC_DIR=./
INC=lists.h
NAME=output
OBJ=$(SRC:.c=.o)
CFLAGS=-Wall -Werror -Wextra -pedantic -I $(INC_DIR)

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
