#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int arr[]);

int main(){
    int arr[5] = [11,43,25,55,32];
    bubbleSort(arr);
    return 0;
}

void bubbleSort(int arr[]){
    int n = 5;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(arr[i] > arr[j]){
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}