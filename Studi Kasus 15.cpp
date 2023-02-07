#include <stdlib.h>
#include <stdio.h>

int main()
{
	/* kamus */
	/* Definisi array yang elemennya string, statik dan sekaligus mengisi */
	static char *s[3] = {"the", "time", "is"};
	/* Definisi array yang elemennya string, dinamik */
	char *(*TabStr); /* Deklarasi array of string */
	//Pointer TabStr menunjuk ke string
	int i;
	/* program */
	for (i=0; i < 3; i++) { //cetak isi s
		printf("%s\n", s[i]);
	}
	/* Alokasi TabStr sebanyak 3 */
	TabStr = (char **) malloc (3 * sizeof(char *)); 		//size of (char *) belum diketahui, maka TabStr akan diisi nilai tak tentu
	for (i=0; i < 3; i++) {
	/* Alokasi string yang merupakan elemen tabel */
		*(TabStr + i) = (char *) malloc (5 * sizeof(char)); 	//mengalokasikan memori sebanyak 5 byte untuk setiap input
		printf("\nInput Str[%d], maksimum 5 karakter : ", i);
		scanf("%5s", *(TabStr+i)); /* Mengisi nilai string */ 	//%5s membatasi karakter yang dimunculkan maksimal 5 karakter
		printf("\n Nilai Str[%d] : %5s\n ", i, *(TabStr + i));
	}
	return 0;
}

