#include "ArrayTools.h"
#include "Passage.h"

int main()
{
    // inicializace testovaciho pole
    int **arr = getTestArray();
    int width = test1width;
    int height = test1height;

    // Zavolani Hlavni funkce
    int **result = travel(arr, width, height);
    printf("Nalezena cesta: ");
    printResult(result);

    // Zavolani testovaci funkce
    int error = test(result, test1result, test1resultLength);
    if(!error){
        printf("Test probehl uspesne \n");
    }else{
        printf("Test probehl NEuspesne \n");
    }
    printf("Navratova hodnota testu je %d \n", error);
    
    free(&result[0][0]); //uvolneni pameti zaznamenavajici velikost pole
    freeArray(arr, width, height);
    return 0;
}