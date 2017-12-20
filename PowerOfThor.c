#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position

    scanf("%d%d%d%d", &lightX, &lightY, &initialTX, &initialTY);
    int currentTX = initialTX;
    int currentTY = initialTY;

    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        scanf("%d", &remainingTurns);

        if(lightX > currentTX){
            if(lightY > currentTY){
                printf("SE\n");
                currentTY++;
                currentTX++;
            }
            else if(lightY < currentTY){
                printf("NE\n");
                currentTY--;
                currentTX++;
            }
            else{
                printf("E\n");
                currentTX++;
            }
        }
        else if(lightX < currentTX){
            if(lightY > currentTY){
                printf("SW\n");
                currentTY++;
                currentTX--;
            }
            else if(lightY < currentTY){
                printf("NW\n");
                currentTY--;
                currentTX--;
            }
            else{
                    printf("W\n");
                    currentTX--;
            }   
        }
        else{
            if(lightY > currentTY){
                printf("S\n");
                currentTY++;
            }
            else if(lightY < currentTY){
                printf("N\n");
                currentTY--;
            }
        }
    }
    return EXIT_SUCCESS;
}
