#include "ArrayTools.h"
#include "Passage.h"





int main(){
    // inicializace testovaciho pole
    int ** arr = getTestArray();
    int width = test1width;
    int height = test1height;
    printArray(arr, width, height);
    int ** mask = createMask(width, height);
    printArray(mask, width, height);
    int ** result = travel(arr,width,height);
    printf("%d ", result[2][0]);
    printResult(result);
    int testResult = test(result, test1result,test1resultLength);
    printf("VYsledek testu je %d \n", testResult);



    freeArray(arr, width, height);
    
    return 0;
}