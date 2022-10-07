
NAME = Zombie

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp,%.o, $(wildcard *.cpp))
HDRS = $(wildcard *.h)

all: $(NAME) clean

$(NAME):$(SRCS) $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $@

$(SRCS): $(HDRS)
	$(CC) $(FLAGS) -c $@

clean:
	rm -rf $(OBJS)
	clear 

fclean:
	rm -rf $(NAME)
	rm -rf $(OBJS)
	clear 
