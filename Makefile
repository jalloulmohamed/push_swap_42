CC = cc

NAME = push_swap
BONUS = checker

FLAGS = -Wall -Wextra -Werror -g

SRC = libft/ft_strlen.c libft/ft_strlentab.c  libft/ft_strjoin.c libft/ft_split.c libft/ft_isdigit.c\
	libft/ft_strdup.c libft/ft_atoi.c libft/ft_lstadd_back.c libft/ft_lstlast.c libft/ft_lstnew.c push_swap.c\
	 operation/sa.c operation/sb.c operation/ss.c operation/ra.c operation/rb.c operation/rr.c operation/rra.c \
	 operation/rrb.c operation/rrr.c operation/pa.c operation/pb.c ft_sort.c checkerror.c   libft/ft_lstsize.c \
	 sortall.c sorttre.c sortfiv.c sort_tab.c  linked_to_tab.c push_to_stack_a.c 

SRCB = checker.c libft/ft_strdup_line.c libft/ft_strchr.c get_next_line.c libft/ft_strlen.c \
	libft/ft_strlentab.c  libft/ft_strjoin.c libft/ft_split.c libft/ft_isdigit.c\
	libft/ft_strdup.c libft/ft_atoi.c libft/ft_lstadd_back.c libft/ft_lstlast.c libft/ft_lstnew.c \
	 operation/sa.c operation/sb.c operation/ss.c operation/ra.c operation/rb.c operation/rr.c operation/rra.c \
	 operation/rrb.c operation/rrr.c operation/pa.c operation/pb.c ft_sort.c checkerror.c   libft/ft_lstsize.c \
	 sortall.c sorttre.c sortfiv.c sort_tab.c  linked_to_tab.c push_to_stack_a.c checksortlist.c
	  


OBJ = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) push_swap.h
	$(CC) $(OBJ)  -o $(NAME)  

bonus : $(BONUS)

$(BONUS) : $(OBJB) push_swap.h
	$(CC) $(OBJB)  -o $(BONUS)  

%.o : %.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ) $(OBJB)

fclean : clean
	rm -rf $(NAME) $(BONUS)  

re : fclean all
