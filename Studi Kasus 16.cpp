#include <stdio.h>
#include <stdlib.h>
#define STRING char* 		//STRING didefinisikan sebagai char*, define diproses oleh prosessor, sedangkan typedef diproses oleh compiler
int main()
{
	/* kamus */
	/* Definisi array yang elemennya string, statik dan sekaligus mengisi */
	static STRING s[3] = {"the", "time", "is"};
	/* Definisi array yang elemennya string, dinamik */
	STRING (*TabStr); /* Deklarasi array of string */
	/*
	Variabel statis memiliki properti untuk mempertahankan 
	nilai aktualnya bahkan setelah berada di luar cakupannya. 
	Dengan demikian, variabel statis dapat mempertahankan nilai 
	sebelumnya sesuai dengan ruang lingkup sebelumnya, dan seseorang tidak perlu menginisialisasi lagi dalam kasus ruang lingkup baru.
	*/
	int i;
	/* program */
	for (i=0; i < 3; i++) { /* Print isi s */
		printf("%s\n", s[i]);
	}
	/* Alokasi TabStr sebanyak 3 */
	TabStr = (STRING *) malloc (3 * sizeof(STRING)); 			//Tabstr dialokasikan sejumlah memori 
	for (i=0; i < 3; i++) {
		/* Alokasi string yang merupakan elemen tabel */
		*(TabStr + i) = (STRING ) malloc (5 * sizeof(char)); 	//Elemen Tabstr dialokasikan sejumlah memori
		printf("\nInput Str[%d], maksimum 5 karakter : ", i);
		scanf("%5s", *(TabStr+i)); /* Mengisi nilai string */
		printf("\n Nilai Str[%d] : %5s\n ", i, *(TabStr + i));
	}
	return 0;
}
