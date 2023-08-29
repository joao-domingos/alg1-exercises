#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct Character {
    char nome[20];
    int energia;
    int defesa;
    int forca;
} character;

void batalha(character a, character b, int rodadas) {
    int x;
    for (x = 0; x < rodadas; x++) {
        int dano;
        
        if (a.forca - b.defesa > 0) {
            dano = a.forca - b.defesa;
        } else {
            dano = 1;
        }
        b.energia = b.energia - dano;
        if (b.energia <= 0) {
            b.energia = 0;
            break;
        }
    
        if (b.forca - a.defesa > 0) {
            dano = b.forca - a.defesa;
        } else {
            dano = 1;
        }
        a.energia = a.energia - dano;
        if (a.energia <= 0) {
            a.energia = 0;
            break;
        }
    }
    
    printf("%s %d\n", a.nome, a.energia);
    printf("%s %d\n", b.nome, b.energia);

    if (a.energia == b.energia) {
        printf("empate");
    } else if (a.energia > b.energia) {
        printf("%s", a.nome);
    } else {
        printf("%s", b.nome);
    }
}

int main() {

    int i, rodadas;
    character perso[2];
    
    for (i = 0; i < 2; i++) {
        scanf("%s", perso[i].nome);
        scanf("%d", &perso[i].energia);
        scanf("%d", &perso[i].defesa);
        scanf("%d", &perso[i].forca);
    }
    
    scanf("%d", &rodadas);
    
    batalha(perso[0], perso[1], rodadas);
    
    return 0;
}
