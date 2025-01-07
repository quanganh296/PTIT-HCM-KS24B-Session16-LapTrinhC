#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Sort_array(int arr[],int size) {
       for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
       }
}

void Sort_arrayB(int arr[],int size){
     for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]<arr[j]){
                int temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
       }
}
int main() {
    int arr[100];
    int size;
    printf("kich thuoc cua mang: ");
    scanf("%d",&size);
    printf("Nhap vao cac phan tu cua mang: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);

    }
    Sort_array(arr,size);
    printf("Mang sau khi sap xep tu be den lon: ");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
if(i<size-1){
    printf(",");

}
}
    
    printf("\n");

    printf("Mang sau khi sap xep tu lon den be: ");
   Sort_arrayB(arr,size);
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
if(i<size-1){
    printf(",");
}
    }
  
    
    return 0;
}