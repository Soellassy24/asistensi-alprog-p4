#include <stdio.h>

int main(){
    int angka[100], batas, kantong, i, j;
    
    printf("Masukkan batas angka : ");
    scanf("%d", &batas);
    printf("Masukkan %d angka dipisahkan spasi : ", batas);
    for (i = 0; i < batas; i++){
        scanf("%d", &angka[i]);
    }
    for(i = 0; i < batas-1; i++){
        for (j = 0; j < batas-1; j++){
            if(angka[j] < angka[j+1]){
                kantong = angka[j];
                angka[j] = angka[j+1];
                angka[j+1] = kantong;
            }
        }
    }
    for (i = 0; i <= 4; i++){
        printf("%d ", angka[i]);
    }
    return 0;
}
