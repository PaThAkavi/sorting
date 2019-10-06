#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int *arr);
void printArray();
void scanArray();

int n;
int arr[5];

int main(){
    printf("Enter the size of array : \n");
    scanf("%d", &n);
    scanArray();
    printf("Array before sorting : \n");
    printArray();
    printf("Array after sorting : \n");
    bubbleSort(arr);
    return 0;
}

void bubbleSort(int *arr){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printArray();
}

void printArray(){
    for(int i = 0; i <= n-1; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void scanArray(){
    printf("Enter the elements of the array : \n");
    for(int i = 0; i <= n-1; i++){
        scanf("%d", &arr[i]);
    }
}