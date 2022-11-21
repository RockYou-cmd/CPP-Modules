NAME =  ScavTrap

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp,%.o, $(wildcard *.cpp))
HDRS = $(wildcard *.h)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $@

$(OBJS): $(SRCS) $(HDRS)
	$(CC) $(FLAGS) -c $(SRCS)

clean:
	rm -rf $(OBJS)
	clear 

fclean:
	rm -rf $(NAME)
	rm -rf $(OBJS)
	clear 
