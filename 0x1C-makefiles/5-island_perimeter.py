#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2

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

