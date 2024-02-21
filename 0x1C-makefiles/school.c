#include "m.h"

/**
 * print_school
 *
 * Return: Nothing
 */
void print_school(void)
{
	printf("j#0000000000000000000000000000000000000\n");
	printf("j#000000000000000000@Q**g00000000000000\n");
	printf("j#0000000000000000*]++]4000000000000000\n");
	printf("j#000000000000000k]++]++*N#000000000000\n");
	printf("j#0000000000000*C+++]++]++]J*0000000000\n");
	printf("j#00000000000@+]++qwwwp=]++++]*00000000\n");
	printf("j#0000000000*+++]q#0000k+]+]++]4#000000\n");
	printf("j#00000000*C+]+]w#0000*]+++]+]++0000000\n");
	printf("j#0000we+]wW000***C++]++]+]++++40000000\n");
	printf("j#000000000*C+]+]]+]++]++]++]+q#0000000\n");
	printf("j#0000000*]+]+++++++]++]+++]+++J0000000\n");
	printf("j#000000C++]=]+]+]+]++]++]+]+]+]=000000\n");
	printf("j#00000k+]++]+++]+]++qwW0000000AgW00000\n");
	printf("j#00000k++]++]+]+++qW#00000000000000000\n");
	printf("j#00000A]++]++]++]++J**0000000000000000\n");
	printf("j#000000e]++]+++]++]++]J000000000000000\n");
	printf("j#0000000A]++]+]++]++]++000000000000000\n");
	printf("j#000000000w]++]+]++]+qW#00000000000000\n");
	printf("j#00000000000w]++++]*0##000000000000000\n");
	printf("j#0000000000000Ag]+]++*0000000000000000\n");
	printf("j#00000000000000000we]+]Q00000000000000\n");
	printf("j#0000000000000@@+wgdA]+J00000000000000\n");
	printf("j#0000000000000k?qwgdC=]4#0000000000000\n");
	printf("j#00000000000000w]+]++qw#00000000000000\n");
	printf("\"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
}

- `John Mbithi Jellyjones-pixel CC = gcc`: This line  contain the name of the author or creator of the Makefile and the compiler being used, which is GCC (`gcc`).

- `SRC = main.c school.c`: This line defines the list of source files (`main.c` and `school.c`) that will be compiled.

- `OBJ = $(SRC:.c=.o)`: This line defines the object files that will be generated from the source files. It takes each `.c` file and replaces the extension with `.o`.

- `NAME = school`: This line specifies the name of the executable that will be generated.

- `RM = rm -f`: This line defines the command for removing files. `-f` flag is used to ignore nonexistent files and never prompt for confirmation.

- `all: $(OBJ)`: This target `all` depends on the object files being built. When executed, it will compile all the source files into object files.

- `$(CC) $(OBJ) -o $(NAME)`: This line is the command to link the object files into an executable named `school`.

- `clean`: This target removes temporary files and the executable (`*~` represents temporary files, and `$(NAME)` is the executable).

- `oclean`: This target removes the object files.

- `fclean: clean oclean`: This target performs both the `clean` and `oclean` actions, effectively removing all generated files.

- `re: fclean all`: This target cleans the project (`fclean`) and then rebuilds it (`all`). It effectively forces a full rebuild of the project.

