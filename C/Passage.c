#include "Passage.h"
#include "ArrayTools.h"
int ** travel(int ** arr, int width, int height){
    int INT_MAX = 2147483647;
    int ** mask = createMask(width,height);
    mask[0][0] = 1;
    int ** result = (int**)malloc(2*sizeof(int*));
    int * len = (int*)malloc(sizeof(int));
    int ite = 2;
    result[0] = len;
    size_t size = 2;
    int x = 0;
    int y = 0;
    int nx = 0;
    int ny = 0;
    int found = 1;
    int * value;
    result[1] = &(arr[x][y]);

    while(found){
        found = 0;
        value = &INT_MAX;

        if((x+1)<width && mask[x+1][y]==0 && arr[x+1][y]<*value){
            value = &(arr[x+1][y]);
            nx = x+1; ny = y;
            found = 1;
        }
        if((x-1)>=0 && mask[x-1][y]==0 && arr[x-1][y]<*value){
            value = &(arr[x-1][y]);
            nx = x-1; ny = y;
            found = 1;
        }
        if((y-1)>=0 && mask[x][y-1]==0 && arr[x][y-1]<*value){
            value = &(arr[x][y-1]);
            nx = x; ny = y-1;
            found = 1;
        }
        if((y+1)<height && mask[x][y+1]==0 && arr[x][y+1]<*value){
            value = &(arr[x][y+1]);
            nx = x; ny = y+1;
            found = 1;
        }
        if(found){
            ite++;
            *len = ite;
            size = size + 1;
            mask[nx][ny] = 1;
            printArray(mask,width, height);
            //printResult(result);
            printf("ite: %d \n", ite);
            printf("result: %d\n", *result[0]);
            result = (int**)realloc(result, size * sizeof(int*));
            result[ite-1] = value; //Pozor! value je pointer
            printf("result: %d\n", *result[0]);
            //result[0] = &ite; //delka pole
            x = nx;
            y = ny;

        }


        

    }




    freeArray(mask, width, height);
    return result;

}
int ** createMask(int width, int height){
    int ** mask = (int**)malloc(sizeof(int*)*width);
    for(int i = 0; i<width;i++){
        mask[i] = (int*)malloc(sizeof(int)*height);
        for(int j = 0; j<height; j++){
            mask[i][j] = 0;
        }
    }
    return mask;
}
int test(int ** arr, int * testArr, int tl){
    for(int i=0; i< tl;i++){
        if(i<*arr[0] && i<tl){
            printf("%d a %d \n", *arr[i+1], testArr[i]);
            if(*arr[i+1]!=testArr[i]){
                printf("TOHLE JE BLBE %d\n ",*arr[i+1]);
                return 3;
            }

        }
        else{
            return 2;
        }
    }
    return 0;

}