#include "mbed.h"

DigitalOut myled(PC_6);

int main() {
    printf("Hello The wolrd!\n");
    while(1) {
        myled = !myled; 
        wait(1.0); // 1 sec
    }
}
