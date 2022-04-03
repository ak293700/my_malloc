# my_malloc
Create a memory allocation tools, that can allocate, free and reallocate memory. The equivalent of malloc, free and realloc in C stdlib.

How to use it:
- Generate the lib with the make command at the root of the my_malloc project.
- Add "LD_PRELOAD=$PATH_OF_THE_GENERATED_LIB" before your command or executable.
  As an example for the lib named libmalloc.so that is in the current directorie, "LD_PRELOAD=./libmalloc.so ls" will execute ls.
