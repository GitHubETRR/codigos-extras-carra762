#include <stdio.h>

typedef union {
    struct {
        unsigned int mant : 23;
        unsigned int expo : 8;
        unsigned int sign : 1;
    } data; 
    float fvar;
} num_t;

#define signo fnum.data.sign
#define exponente fnum.data.expo
#define mantisa fnum.data.mant

void ver_signo(num_t);
void ver_expo(num_t);
void ver_mant(num_t);

int main () {
    num_t fnum;
    fnum.data.sign;
    fnum.fvar = 15; 
    printf("%x", fnum.data.sign);
    printf("%x", fnum.data.mant);
    printf("%x", fnum.data.expo - 127);
    ver_signo(fnum);
    ver_expo(fnum);
    ver_mant(fnum);
    return 0;
}

void ver_signo(num_t fnum){
/*     unsigned char * var_ptr = (unsigned char*)&fnum.fvar;
    for (int i = 0; i <=0; i++) {
        *(var_ptr+i) == signo;
    }
    pritnf("%x", signo); */
}
void ver_expo(num_t fnum){
    

}
void ver_mant(num_t fnum){

}
