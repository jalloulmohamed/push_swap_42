CC = cc

NAME = push_swap

FLAGS = -Wall -Wextra -Werror -g

SRC = libft/ft_strlen.c libft/ft_strlentab.c  libft/ft_strjoin.c libft/ft_split.c libft/ft_isdigit.c libft/ft_strdup.c libft/ft_atoi.c libft/ft_lstadd_back.c libft/ft_lstlast.c libft/ft_lstnew.c push_swap.c operation/sa.c operation/sb.c operation/ss.c operation/ra.c operation/rb.c operation/rr.c operation/rra.c operation/rrb.c operation/rrr.c operation/pa.c operation/pb.c ft_sort.c checksort.c checksortlist.c  ft_longlist.c libft/ft_lstsize.c sortall.c sorttre.c sortfiv.c


OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) push_swap.h
	$(CC) $(OBJ)  -o $(NAME)  



%.o : %.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all