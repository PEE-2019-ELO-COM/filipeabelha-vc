#include <bits/stdc++.h>
using namespace std;

typedef long double ld;

const ld EPS = 1e-9;

ld arred (ld value) {
    return ceil(10*(value-EPS))/10;
}

void erro () {
    printf("Nota invalida! Por favor, preencha um valor entre 0 e 10.\n");
}

int main () {
    ld mve = 0;
    ld vc = 0;

    while (1) {
        printf("Digite a media de VE: ");
        scanf("%Lf", &mve);
        if (mve < 0 or mve > 10) {
            erro();
        } else break;
    }

    while (1) {
        printf("Digite a media de VC: ");
        scanf("%Lf", &vc);
        if (vc < 0 or vc > 10) {
            erro();
        } else break;
    }

    ld vf = (20-mve-vc)/2;
    if (vf < 4) {
        vf = 4;
    } else {
        vf = arred(vf);
    }

    printf("--------------------------\n");
    printf("Nota minima na VF: %6.1Lf\n", vf);

    return 0;
}
