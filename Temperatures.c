#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main(){

    int n; // the number of temperatures to analyse
    int tCloserZero = 5526;
    int tmp=0;
    scanf("%d", &n);
    if (n == 0){
        tCloserZero = 0;
    }
    else{
        for (int i = 0; i < n; i++) {
           int t; // a temperature expressed as an integer ranging from -273 to 5526
           scanf("%d", &t);
           tmp = abs(t);  //we take the absolute value of t thanks to the fonction abs(int) from math.h   
           if(tmp <= abs(tCloserZero)) {  //comparison between tmp and the current temperature closer from 0.
               if(tmp == abs(tCloserZero) && tCloserZero >= 0 ){
                   tCloserZero = tCloserZero;
               }
               else{
                   tCloserZero = t;
               }
           }
        }
    }
    printf("%d\n",tCloserZero);
    return EXIT_SUCCESS;
}
