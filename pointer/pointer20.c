#include <stdio.h>
int main() {
    int arr[3] = {1,2,3};
    int(*parr)[3] = &arr;

    printf("arr : %p \n", arr);
    printf("parr : %p \n", parr);
    
}