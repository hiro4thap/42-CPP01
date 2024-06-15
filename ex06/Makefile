NAME		= harlFilter

COMPILE		= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

SRC_DIR 	= ./
OBJ_DIR 	= obj/
INC_DIR 	= ./

SRC			= main.cpp \
			  Harl.cpp
OBJ			= $(SRC:.cpp=.o)
INC			= Harl.hpp

SRCS		= $(addprefix $(SRC_DIR), $(SRC))
OBJS		= $(addprefix $(OBJ_DIR), $(OBJ))
INCS		= $(addprefix $(INC_DIR), $(INC))

all:$(NAME)

$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp $(INCS)
	mkdir -p $(OBJ_DIR)
	$(COMPILE) $(CFLAGS) -o $@ -c $<

$(NAME):$(OBJS) $(INCS)
	$(COMPILE) $(CFLAGS) -o $@ $(OBJS)

clean:
	rm -rf $(OBJ_DIR)

fclean:clean
	rm -rf $(NAME)

re:fclean all

.PHONY:all clean fclean re
