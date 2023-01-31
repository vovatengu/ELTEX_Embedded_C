#include <stdio.h>

int main(void) {
    
    char a = 'A';
    char b = 'B';
    char *ptr1 = &a;
    char **ptr2 = &ptr1;
    int c = 0xAA;

    *ptr2 = &b;

    printf("a = %p b = %p ptr = %p *ptr = %c\n", &a, &b, ptr1, *ptr1);

    int number = 987654321;
    int MASK = 0xFF;
    
    printf("number = %d\n", number);
	
	char *ptr = (char*)&number;
	for (int i = 0; i < sizeof(number); i++,ptr++){
		printf("%x ", *ptr & MASK);;
    }
	printf("\n");

    ptr = (char*)&number;
    ptr +=2;
    *ptr = c;
    printf("*ptr = c = %x result number = %x \n", *ptr,number);

    return 0;


}