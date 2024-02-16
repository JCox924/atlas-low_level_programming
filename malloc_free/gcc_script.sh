#!bin/bash
ls -1 *.c
export CFLAGS='-Wall -Werror -Wextra -pedantic -std=gnu89'

echo "Enter filename to compile:"
read filename

if [ -f "$filename" ] && [ "${filename}##*." = "c" ]; then

	gcc $CFLAGS "$filename" -o "{$filename%.c}"
	echo "Compilation success. Executable is ${filename%.c}"
else
	echo "File not found or not a C file. Troubleshoot and try again"
fi
