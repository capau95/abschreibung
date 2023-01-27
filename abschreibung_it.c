#include <stdio.h>

void main() {

	float gw;
	int i, y;
	float w;

	printf("Geben Sie den Gesamtwert in € ein:\n");
	scanf("%f", &gw);

	printf("Geben Sie ein, über wie viele Jahre abgeschrieben werden soll:\n");
	scanf("%d", &y);

	w = gw / y;

	printf("Abschreibungsbetrag pro Jahr: %.2f €\n", w);

	for (i = 1; i <= y; i++) {

		printf("Restwert nach dem %d. Jahr: %.2f €\n", i, gw - (w * i));
	
	}

}
	
