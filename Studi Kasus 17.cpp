#include <stdlib.h>
#include <stdio.h>

int main()
{
	/* kamus */ /* Definisi tabel integer */
	typedef struct {
		int *T; /* array integernya */
		int N; /* Ukuran efektif */
	} tabint;
	tabint MyTab;
	int i;
	/* program */
	printf("Tentukan ukuran tabel, maks 10 = ");
	scanf("%d", &(MyTab.N));
	MyTab.T = (int *) malloc (MyTab.N * sizeof(int));	 		//MyTab.T dialokasikan memori sebanyak MyTab.N * 4 (size tipe data integer)
	/* isi dengan assignment */
	for (i = 0; i < MyTab.N; i++) {
		*(MyTab.T + i) = i;										//MyTab.T + i diisi nilai i
		printf("i = %d MyTab.T = %d \n", i, *(MyTab.T+i));
	}
	return 0;
}

