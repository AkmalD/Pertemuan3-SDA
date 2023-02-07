#include<stdio.h>
/* Definisi tabel integer */
typedef struct {
	int tab[10]; /* array integernya */ 			//Atribut dari tipe data bentukan tabint, berupa array integer dengan elemen 10
	int N; /* Ukuran efektif */ 					//Atribut dari tipe data bentukan tabint, berupa variabel tunggal bertipe integer
} tabint;
/* Prototype */
void incTab (tabint *T); /* Increment setiap elemen tabel */ 	//Prosedur untuk menambah nilai dari setiap elemen array yang ada
void printTab (tabint T); /* Print tabel */ 					//Prosedur untuk mencetak isi dari setiap elemen array tab
int main()
{
	/* kamus */
	tabint T; 										//T merupakan variabel dengan tipe tabint
	int i;
	/* program */
	T.N = 3; 										//N yang merupakan atribut dari T diisi 3
	printf("Isi dan print tabel untuk indeks 1..5 \n");
	/* isi dari pembacaan */
	for (i = 0; i < T.N; i++) {
		printf("Input tabel ke -[%d] = ", i);
		scanf ("%d", &(T.tab[i]));
	}
	/* Print : perhatikan passing parameter by value */
	printTab(T);
	/* Increment : perhatikan passing parameter by reference */
	incTab (&T);
	printTab (T);
	return 0;
}
/* Body prototype */
void incTab(tabint *T) 
/* Increment setiap elemen tabel */
{
	/* Kamus lokal */
	int i;
	/* Program */
	for (i = 0; i < (*T).N; i++)
	{ 
		(*T).tab[i] = (*T).tab[i]+1; 				//Agar nilai dari setiap elemen array yg sebelumnya bertambah 1
	}
}
void printTab(tabint T)
/* Print setiap elemen tabel */
{ /* Kamus lokal */
	int i;
	/* Program untuk traversal print */
	for (i = 0; i < T.N; i++)
	{ 
		printf("T[%d] = %d \n", i, T.tab[i]);
	}
}
