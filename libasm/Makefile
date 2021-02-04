NAME = libasm.a

NA = nasm

NFLAGS = -f macho64

SRC =	ft_strlen.s\
		ft_strcpy.s\
		ft_strcmp.s\
		ft_strdup.s\
		ft_write.s\
		ft_read.s\

OBJ = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $^
	ranlib $(NAME)

%.o: %.s
	$(NA) $(NFLAGS) $<

test:	all
	gcc main.c libasm.a -o test
	
clean:	
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
testclean: clean
	rm -f ft_text.txt
	rm -f text.txt
	rm -f ./test

re: fclean all

.PHONY: all re clean fclean