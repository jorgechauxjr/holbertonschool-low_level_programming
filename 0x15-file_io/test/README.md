### Compilation
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic

- 0-main
gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-read_textfile.c -o a

./a Requiescat
- 1-main
gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-create_file.c -o b

./b hello world

ls -l hello

- 2-main
echo -n Hello > hello

ls -l hello

gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-append_text_to_file.c -o c

./c hello " World! > "

cat hello
- 3-main

gcc -Wall -pedantic -Werror -Wextra 3-cp.c -o cp

cat incitatous

./cp incitatous Incitatous

ls -l Incitatous

cat Incitatous