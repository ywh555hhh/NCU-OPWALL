#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HelloKitty "Hello World!"

int main(){
    char* hello = (char*)malloc(sizeof(char) * 32);
    strcpy(hello,HelloKitty);
    //Below with VS 2019
    __asm {
        push eax
        push ebx
        mov ebx eax
        mul ebx eax
        mov ebx eax
        add eax ebx
        pop ebx
        pop eax
    }

    printf("%s\n",hello);
    return 0;
}