#include <stdio.h>
#include<math.h>

void math(int *a, int *b, int *sum) {
    *sum = *a + *b;
}

int main() {
    int x = 5;
    int y = 10;
    int tong;
     math(&x, &y,&tong);
   printf("Tong 2 so a va b la: %d + %d = %d\n", x, y, tong);

    return 0;
}