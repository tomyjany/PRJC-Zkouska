#include <stdlib.h>
int ** travel(int ** arr, int width, int height);
/*
    
    @returns Pole navstivenych policek. Je to ** protoze je to pole pointeru
*/
int test(int ** arr, const int * testArr, int tl);
/*
    
    @returns 0 pokud uspech, 2 pokud jsou pole jinak dlouhe, 3 pokud se nasel kolizni prvek
*/

int ** createMask(int width, int height);
/*
    @returns pole Masky. Jedna se o pole, ktera na pocatku vsude nuly. Jednicka se doplni na prislusny index, pokud jsme do nej na ceste "vesli"
*/
