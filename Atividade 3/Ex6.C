#include <stdio.h>
#include <stdlib.h>
void main() {
int i;
for (i=1; i<=20; i++) {
if ((i % 2) == 0)
printf("Numero par: %d \n", i);
}
return 0;
}
