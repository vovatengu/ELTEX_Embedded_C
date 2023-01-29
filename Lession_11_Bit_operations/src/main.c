#include <stdio.h>

void print_byte(int *number) {

    int MASK = 0xFF;
    
    for (int i = 0, j = 0; i < sizeof(MASK); i++, j += 8) {
        printf("%d byte = 0x%x\n", i, (*number >>j) & MASK );
    }
    printf("number = 0x%x, change 3 byte = 0x%x\n", *number, *number | 0x00DD0000);
}

int main(void) {
    int number = 0x00CCAABB;
    print_byte(&number);
    return 0;
}