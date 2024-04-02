#target: dependencies
#	action

NAME = ft_atoi
SRCS = ft_atoi.c
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

OBJS = $(SRCS: .c = .o)

$(NAME): $(OBJS)
	cc $(CFLAGS) $(OBJS) -o $(NAME)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(OBJS)

re: fclean all