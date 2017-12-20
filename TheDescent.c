#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/
int main()
{

    int nbMountain = 8;
    // game loop
    while (1) {
        int topMountain = 0;
        int topMountainH = 0;
        for (int i = 0; i < nbMountain; i++) {
            int mountainH; // represents the height of one mountain.
            scanf("%d", &mountainH);
            if(mountainH > topMountainH){
                topMountain = i;
                topMountainH = mountainH;
            }
        }
        printf("%d\n",topMountain); // The index of the mountain to fire on.
    }

    return 0;
}
