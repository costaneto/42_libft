NAME	=	libft.a

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra

RM		=	rm -f
MK_LIB	=	ar -r

SRC		=	ft_atoi.c ft_bzero.c ft_calloc.c\
			ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
			ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c\
			ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c\
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c\
			ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c\
			ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c\
			ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c\
			ft_substr.c ft_tolower.c ft_toupper.c

BONUS	=	ft_lstadd_back.c ft_lstadd_front.c\
			ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c\
			ft_lstmap.c ft_lstnew.c ft_lstsize.c

M_OBJ =		$(SRC:.c=.o)
B_OBJ =		$(BONUS:.c=.o)

$(NAME):	$(M_OBJ)
			$(MK_LIB) $(NAME) $(M_OBJ)

all: 		$(NAME)

bonus:		$(B_OBJ)
			$(MK_LIB) $(NAME) $(B_OBJ)

clean:		
			$(RM) $(M_OBJ) $(B_OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)
