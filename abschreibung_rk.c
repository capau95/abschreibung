#include <stdio.h>

int abschreibung(float gw, float w, int y, int i) {

	if (i <= y) {

		printf("Restwert nach dem %d. Jahr: %.2f €\n", i, gw - (w * i));

		return abschreibung(gw, w, y, i + 1);
	}

	else {

		return 0;

	}

}

void main() {

	float gw;
	int i = 1;
	int y;
	float w;

	printf("Geben Sie den Gesamtwert in € ein:\n");
	scanf("%f", &gw);

	printf("Geben Sie ein, über wie viele Jahre abgeschrieben werden soll:\n");
	scanf("%d", &y);

	w = gw / y;

	printf("Abschreibungsbetrag pro Jahr: %.2f €\n", w);

	abschreibung(gw, w, y, i);
	
}
	
