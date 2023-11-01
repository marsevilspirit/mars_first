#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]) {
printf("[%d]\n", argc);
while (argc) {
++argc;
}
int i = -1, j = argc, k = 1;
i++ && j++ || k++;
printf("i = %d, j = %d, k = %d\n", i, j, k);
return EXIT_SUCCESS;
}