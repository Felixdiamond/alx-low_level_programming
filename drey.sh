#!/bin/bash
echo "Wait a few seconds for the setup of the main.h file!"
echo
echo "int _putchar(char c);" > 0x09-static_libraries/main.h
headerarray=("int _islower(int c);" "int _isalpha(int c);" "int _abs(int n);" "int _isupper(int c);" "int _isdigit(int c);" "int _strlen(char *s);" "void _puts(char *s);" "char *_strcpy(char *dest, char *src);" "int _atoi(char *s);" "char *_strcat(char *dest, char *src);" "char *_strncat(char *dest, char *src, int n);" "char *_strncpy(char *dest, char *src, int n);" "int _strcmp(char *s1, char *s2);" "char *_memset(char *s, char b, unsigned int n);" "char *_memcpy(char *dest, char *src, unsigned int n);" "char *_strchr(char *s, char c);" "unsigned int _strspn(char *s, char *accept);" "char *_strpbrk(char *s, char *accept);" "char *_strstr(char *haystack, char *needle);")
for str in ${headerarray[@]}; do
	echo "$str" >> 0x09-static_libraries/main.h
done
echo "Finished copying main.h"
echo "Now starting copying of previous files...."
copiee=(0-isupper.c 0-memset.c 0-strcat.c 1-isdigit.c 1-memcpy.c 1-strncat.c 100-atoi.c 2-strchr.c 2-strlen.c 2-strncpy.c 3-islower.c 3-puts.c 3-strcmp.c 3-strspn.c 4-isalpha.c 4-strpbrk.c 5-strstr.c 6-abs.c 9-strcpy.c)
for files in ${copiee[@]}; do
	cp "$(find -name $files)" 0x09-static_libraries/
done
cp "$(find -name _putchar.c)" 0x09-static_libraries/
echo "Done copying files!"
echo 
echo "Now attempting task1.. pls wait!"
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar -rc libmy.a *.o
echo "Task1 attempt complete!"
echo
echo "Write what you would want on your readme file ↓"
read readme
echo "$readme" > README.md
echo "Readme completed!"
echo
echo "Write what you would want on your commit ↓"
read commit
echo "Commit message read"
echo "Now adding and commiting changs to gitub repo"
git add . && git commit -m "$commit" && git push
echo "Process completed"
echo "If any error encountered, message V!4U$"
echo "Stopping script...."
