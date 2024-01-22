#include "ArrayTools.h"
const int test1width = 4;
const int test1height = 5;
const int test1Array[4][5] = {
    {10, 8,13,11,20},
    {11, 9, 7, 8,15},
    {16, 8, 4, 9, 7},
    { 6, 7, 9, 5, 1}
};
const int test1result[10] = {
    10,8,9,7,4,8,7,6,16,11
};
const int test1resultLength = 10;

int ** allocateArray(int width, int height){
    int ** arr = (int**)malloc(sizeof(int*)*width);
    for(int i = 0; i<width;i++){
        arr[i] = (int*)malloc(sizeof(int)*height);
    }
    return arr;

}

void freeArray(int ** arr, int width, int height){
    for(int i = 0; i<width;i++){
        free(arr[i]);
    }
    free(arr);
}

void printArray(int ** arr,int width, int height){
    for(int i = 0; i<width;i++){
        for(int j = 0; j<height;j++){
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}
int ** getTestArray(){
    int ** arr = allocateArray(test1width,test1height);
    for(int i = 0; i<test1width;i++){
        for(int j=0; j<test1height;j++){
            arr[i][j] = test1Array[i][j];
        }
    }
    return arr;
}
void printResult(int ** result){
    printf("tohle je pocet hodnot: %d \n", *result[0]);
    for(int i = 0; i<*(result[0]);i++){
        printf("%2d ",*(result[i]));
    }
    printf("\n");
}