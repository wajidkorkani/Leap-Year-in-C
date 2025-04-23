#include <stdio.h>

void hangManGame(){
    int number = 10;
    int guss;
    printf("Guss the number: ");
    scanf("%d", &guss);
    printf("guss = %d \n", guss);
}

void main(){
    hangManGame();
}
