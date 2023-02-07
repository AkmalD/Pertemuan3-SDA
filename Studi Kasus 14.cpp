#include <stdlib.h>
#include <stdio.h>
int main()
{
	/* Kamus Data (deklarasi, inisialisasi nilai variabel)*/
	int *tab; /* deklarasi array, perhatikan belum tampak bedanya dgn deklarasi pointer biasa */
	//tab merupakan array dinamis, array dinamis merupakan array yang ukurannya bisa ditentukan pada saat runtime (input keyboard)
	int N, i;
	/* program */
	printf("Contoh mengisi array dinamis berukuran 0..N : \n");
	printf("N = ");
	scanf("%d", &N);
	printf("Alokasi setelah mengetahui ukuran array \n");
	tab = (int *) malloc((N+1) *sizeof(int));
	if (tab != NULL)
	{
		for (i=0; i<=N; i++)
		{
		printf("i=%d tab[i]=%d \n", i, (tab + i)); 			//Menampilkan isi dari setiap elemen array yang nilainya tak tentu
		};
		printf("Akhir program \n");
		/* dealloc */
		free(tab); /*dealokasi*/ 								//Mengosongkan memori yang sebelumnya dipesan oleh array tab
		return 0;
	}
	else 														//Alokasi gagal apabila memori yang dipesan bernilai negatif
	{
		printf("Alokasi gagal ... \n"); 					
		return 1;
	}
	return 0;
}

