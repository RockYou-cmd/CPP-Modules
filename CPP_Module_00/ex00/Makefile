
NAME = megaphone

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp,%.o, $(wildcard *.cpp))

all: $(NAME) clean

$(NAME):$(SRCS) $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $@

$(OBJS):
	$(CC) $(FLAGS) -c $(SRCS)

clean:
	rm -rf $(OBJS)
	clear 

fclean:
	rm -rf $(NAME)
	rm -rf $(OBJS)
	clear 
 
