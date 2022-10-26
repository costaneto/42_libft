NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

SRC		=	$(wildcard *.c)

BONUS	=	ft_lstadd_front.c ft_lstsize.c\
ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstnew.c


OBJ		=	$(SRC:.c=.o)
BOBJ	=	$(BONUS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			@ar	-r $(NAME) $(OBJ)

bonus:		$(BOBJ)
			@ar	-r $(NAME) $(BOBJ)

clean:
			$(RM) $(OBJ) $(BOBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)