#include <stdio.h>
void dummy(void) {
    printf("I am dummy");
}
int main(int argc, const char** argv) {
    int num;
    dummy();
    scanf("%i", &num);
    printf("%i\n", num + 2);
    return 0;
}
