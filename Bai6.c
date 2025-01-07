
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void find_element(int arr[], int size, int value, int position) {
       printf("Vi tri cua phan tu vua nhap la: ");
    for(int i=1;i<size-1;i++){

        if(arr[i]=value){
            position=i;
        }     
    }
    printf(" %d",position);
    printf("\n");
}
int main() {
    int n;
    printf("Nhap phan tu muon biet vi tri: ");
    scanf("%d",&n);
  
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
     printf("Cac phan tu trong mang: \n");
 for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    find_element(array,size,n,0);
  
    
    return 0;
}