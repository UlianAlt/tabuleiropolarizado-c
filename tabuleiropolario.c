#include <stdio.h>

int main(){
    char tab[3][3] = {
        {'O', 'O', 'O'},
        {'O', 'X', 'X'},
        {'X', 'X', 'X'}
    };
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%c", tab[i][j]);
        }
        printf("\n");
    }
    printf("\n\n Feito por PedroUlian (https://github.com/PedroUlian) (https://github.com/UlianAlt)");
    return 0;
}