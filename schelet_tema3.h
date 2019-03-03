/** Schelet  de cod: Tema 3, SDA-AB, 2017
  * Autor: Mihai Iacov <mihaimxd@gmail.com>
  */

#ifndef SCHELET_TEMA3_H
#define SCHELET_TEMA3_H

#define LUNGIME_NUME_FISIER 50
#define DIM_VECTOR_CERINTE 5


/* INTRARE_DEFAULT si IESIRE_DEFAULT pot fi de folos pentru DEBUG.
 * Stergeti-le inainte de trimiterea temei.
 */
#define INTRARE_DEFAULT "date/date0.in"
#define IESIRE_DEFAULT "referinte0.ref"


/* Constante folosite de functia rand:
 * MODULATOR = 2^31 - 1
 */
#define MODULATOR 2147483647
#define MULTIP 1103515245
#define INCREMENT 12345


/* Strucutra urmatoare inglobeaza TOATE valorile
 * ce vor fi citite din fisier
 */
struct DATE_INTRARE {
    int C[DIM_VECTOR_CERINTE]; /* indicatorii pentru cerinte */
    int n;                     /* dimensiunea pentru matrice */
    int sMax;                  /* suma maxima admisa */
    int **M;                   /* matricea cu costul fiecarei trepte */
    int nrMaxIncercari;        /* maximul pentru cerinta 4 */
};
typedef struct DATE_INTRARE St_date_intrare;


/* genereaza un numar "la intamplare" */
int rand();

/* verifica argumentele date la executie*/
void verificaArgumente(int, char* [], char*, char*);

/* afiseaza valorile dintr-o matrice -> pentru DEBUG*/
void printMatrix(int** M, int n);

/* afiseaza datele de intrare din element -> pentru DEBUG*/
void printInput(St_date_intrare);

/* rezolvare C[i] si scriere*/
void rezolvaSiScrieOutput(St_date_intrare in, char* numeIesire);

/* aloca spatiu pentru o matrice*/
int** alocaMatrice(int);

/* aloca spatiu pentru un vector de caractere*/
char* alocaSirCaractere(int);

/* citire date din fisier*/
St_date_intrare citesteInput(char*);

/* scrie rezultatele in fisier*/
void scrieOutput(St_date_intrare, int [], char*);

/* rezolvare C1*/
int rezolvareCerintaGreedy(St_date_intrare);

/* rezolvare C2*/
int rezolvareCerintaPD(St_date_intrare);

/* rezolvare C3*/
int rezolvareCerintaSimulare(St_date_intrare);

/* rezolvare C4*/
int rezolvareCerintaBacktracking(St_date_intrare);

/* elibereaza memoria folosita de matrice*/
void eliberareMatrice(int **, int);

/* elibereaza memoria folosita de vector*/
void eliberareSirCaractere(char*);


#endif
