
#include <stdio.h>
#include <stdlib.h>


void update_element(int arr[], int size, int new_value, int position) {
    if (position >= 0 && position < size) {
        arr[position] = new_value;
    } else {
        printf("Vị trí không hợp lệ\n");
    }
}

int main() {
  
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
     printf("Ham truoc khi co gia tri moi: \n");
 for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
  
    update_element(array, size, 10, 2);

    printf("Ham sau khi co gia tri moi: \n");

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}