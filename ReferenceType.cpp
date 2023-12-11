// Reference Type: pointer
// Argument Type: const char *
// Default Value: NULL
// ======================================================================
#include <stdio.h>

int main() {
int i = 0;
int& r = i;    // Create a reference to i

i++;
printf("r = %d\n", r);
}