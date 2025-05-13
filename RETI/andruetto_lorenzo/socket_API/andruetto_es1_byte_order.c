#include <stdio.h>
#include <arpa/inet.h>

void main() {
    printf("Primo array di numeri:\n");
    int numbers[] = {1000, 12890, 54163, 34012, 62984};

    for(int i = 0; i < 5; i++)
        printf("0x%x\n", htons(numbers[i]));

    int arr[] = {19875, 5499, 59821, 43120, 26489};

    printf("\nSecondo array di numeri:\n");

    for(int i = 0; i < 5; i++)
        printf("0x%x\n", ntohs(arr[i]));
}