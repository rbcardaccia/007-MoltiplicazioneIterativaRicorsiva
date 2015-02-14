#include <stdio.h>
#include <stdlib.h>

int moltiplicazioneIterativa(int a, int b);
int moltiplicazioneRicorsiva(int a, int b);

int main(int argc, char** argv) {
    int a,b;
    int rIterativo, rRicorsivo;
    
    printf("Inserisci a, il primo fattore (intero): ");
    scanf("%d", &a);
    printf("Inserisci b, il secondo fattore (intero non negativo): ");
    scanf("%d", &b);
    
    rIterativo = moltiplicazioneIterativa(a, b);
    rRicorsivo = moltiplicazioneRicorsiva(a, b);
    
    printf("%d * %d = %d (formulazione iterativa)\n", a, b, rIterativo);
    printf("%d * %d = %d (formulazione ricorsivo)\n", a, b, rRicorsivo);
    return (EXIT_SUCCESS);
}

int moltiplicazioneIterativa(int a, int b) {
    int prodottoIterativo=0;
    while (b>0) {
        prodottoIterativo+=a;
        b--;
    }  
    return prodottoIterativo;
}
int moltiplicazioneRicorsiva(int a, int b) {
    int prodottoRicorsivo;
    if (b==0) {
        return 0;
    }
    else {
        prodottoRicorsivo= a+moltiplicazioneRicorsiva(a,b-1);
        return prodottoRicorsivo;
    }
}
