#include <stdio.h>
#include <stdlib.h>
int main(){

    int m = 10;
    int *ptr ;
    ptr=&m;
    printf("\nGia tri cua m: %d", m);
    printf("\nDia chi cua m: %p", &m);
    printf("\nGia tri cua m dung con tro: %d", *ptr);
    printf("\nDia chi cua m dung con tro: %p", ptr);
	return 0;
}
