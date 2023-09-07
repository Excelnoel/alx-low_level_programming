echo '#include <stdio.h>
int main() {
    puts("Programming is like building a multilingual puzzle");
    return 0;
}' > program.c && gcc program.c -o program && ./program && echo $?
