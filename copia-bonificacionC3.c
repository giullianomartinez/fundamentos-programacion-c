#include <stdio.h>

int main() {


    return 0;
}

int obtenerMultiplicador(char categoria, int destino) {
    if (destino == 3) {
        switch(categoria) {
            case "latam":
                return 5;
            case "gold":
                return 6;
            case "gold plus":
                return 7;
            case "platinum":
                return 9;
            case "black":
                return 10;
            case "black signature":
                return 11;
            default:
                break;
        }
    } else {
        switch(categoria) {
            case "latam":
                return 3;
            case "gold":
                return 4;
            case "gold plus":
                return 5;
            case "platinum":
                return 7;
            case "black":
                return 8;
            case "black signature":
                return 9;
            default:
                break;
        }

    }
}


