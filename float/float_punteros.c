#include <stdio.h>

int main (void) {
    float var = 3;
    unsigned char * var_ptr = (unsigned char*)&var;
    printf("El numero en hexa es : ");
    for (int i = 3; i >=0 ; i--){
        printf("%x", *(var_ptr+i));
    }
}