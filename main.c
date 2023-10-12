c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Constants
#define WINDOW_WIDTH  800
#define WINDOW_HEIGHT 600

// Function prototypes
void init();
void update();
void render();
void cleanup();

int main() {
    init();

    while (1) {
        update();
        render();
    }

    cleanup();
    return 0;
}