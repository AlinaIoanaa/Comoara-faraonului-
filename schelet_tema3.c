/** Schelet  de cod: Tema 3, SDA-AB, 2017
  * Autor: Mihai Iacov <mihaimxd@gmail.com>
  *
  * 1)Nu este obligatoriu sa va folositi de acest schelet de cod
  * 2)Daca il folositi, va fi nevoie sa schimbati anumite declaratii
  *     pentru a obtine punctaj maxim
  * 3)Completati task-urile numerotate de la 0 la 9
  */

#include "schelet_tema3.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int seed = 0;
/* valoarea de plecare pentru functia rand() */

int main(int argc, char* argv[])
{
    St_date_intrare in;
    /* structura in care vom retine TOATE datele citite din fisier */

    char *numeIntrare = alocaSirCaractere(LUNGIME_NUME_FISIER);
    char *numeIesire = alocaSirCaractere(LUNGIME_NUME_FISIER);
    /* alocam spatiu pentru numele fisierelor pentru IN/OUT */

    verificaArgumente(argc, argv, numeIntrare, numeIesire);
    /* verificam si salvam numele fisierelor */

    in = citesteInput(numeIntrare);
    /* citeste datele din fisierul de intrare */

    rezolvaSiScrieOutput(in, numeIesire);
    /* rezolva si scrie in fisierul de iesire */

    eliberareMatrice(in.M, in.n);
    eliberareSirCaractere(numeIntrare);
    eliberareSirCaractere(numeIesire);
    /* eliberam memoria alocata anterior */
    return 0;
}

/** TASK 0: functia alocaMatrice
  * primeste ca parametru n = dimensiunea matricei
  * intoarce o matrice n x n (adresa pozitiei de inceput)
  */
int** alocaMatrice(int n)
{
    int **M = NULL;

    /* TODO: alocati spatiu pentru o matrice n x n */

    return M;
}

/** TASK 1: functia alocaSirCaractere
  * Primeste ca parametru n = lungimea sirului de caractere.
  *
  * Intoarce un vector de n caractere (adresa pozitiei de inceput).
  */
char* alocaSirCaractere(int n)
{
    char* v = NULL;

    /* TODO: alocati spatiu pentru un vector de n caractere */

    return v;
}


/** TASK 2: functia citesteInput
  * Primeste numele fisierului de intrare.
  *
  * Intoarce un element de tip St_date_intrare cu datele citite.
  */
St_date_intrare citesteInput(char* numeFisier)
{
    /** TODO:
      * 2.1 Deschideti fisierul cu numele numeFisier
      * 2.2 Cititi din fisier astfel:
      *     2.2.1 citeste cei 4 indicatori C[i], i = 1..4;
      *     2.2.2 citeste n, citeste sMax;
      *     2.2.3 citeste M[i][j], linie cu linie, i = 0..n-1, j = 0..n-1
      *     2.2.4 citeste nrMaxIncercari
      * 3.3 Intoarceti la final elementul care contine datele citite
      */
    St_date_intrare in;

    /* TODO: cititi date si salvatile in elementul in */

    return in;
}

/** TASK 3: functia scrieOutput
  * Primeste
  *     -un element cu datele de intrare;
  *     -un vector cu rezultatele ce vor fi scrise in fisier;
  *     -numele fisierului de iesire in care vom scrie.
  */
void scrieOutput(St_date_intrare in, int rezultatCerinta[], char* numeIesire)
{
    /** TODO:
      * 3.1 C[1] va fi mereu 1, afisati rezultatul cerintei 1.
      * 3.2 Pentru i = 2..4
      *     daca C[i] este 1, afisati pe un alt rand rezultatul
      *     cerintei i.
      */

    /* TODO: modificati functia pentru a scrie in fisier */

}

/** TASK 4: functia rezolvareCerintaGreedy
  * Primeste ca parametru un element cu toate datele de intrare.
  *
  * Intoarce rezultatul pentru cerinta 1.
  */
int rezolvareCerintaGreedy(St_date_intrare in)
{
    int n = in.n;
    /* dimensiunea matricei (n x n) */

    int** M = in.M;
    /* matricea cu costul fiecarei pozitii */

    int i, j;
    i = j = n-1;
    /* pozitia de start */

    int suma = 0;
    /** TODO:
      * 4.1 plecati din pozitia initiala (i si j deja setate)
      * 4.2 adaugati la suma costul fiecarei pozitii la care ajungeti
      *     (inclusiv pozitia initiala)
      * 4.3 mergeti cate un pas in STANGA sau in SUS pana cand ajungeti la i == j == 0
      *     -dintre STANGA(i,j-1) si SUS(i-1,j) alegeti pozitia cu cost mai mic
      *     -alegeti SUS cand costurile sunt egale
      * 4.4 dupa ce ajungeti pe prima linie sau pe prime coloana,
      *     continuati sa mergeti pe singurul sens disponibil(numai SUS sau numai STANGA)
      */


    return suma;
}

/** TASK 5: functia rezolvareCerintaPD
  * Primeste ca parametru un element cu toate datele de intrare.
  *
  * Intoarce rezultatul pentru cerinta 2.
  */
int rezolvareCerintaPD(St_date_intrare in)
{
    int n = in.n;
    /* dimensiunea matricei (n x n) */

    int** M = in.M;
    /* matricea cu costul fiecarei pozitii */

    /** HINT: creati o matrice PD cu proprietatea
      *
      * PD[i][j] = costul minim pentru un drum valid de la [i][j] la [0][0]
      */

    int rezultatFinal = 0;

    /* TODO: gasiti PD[n-1][n-1] */

    return rezultatFinal;
}

/** TASK 6: functia rezolvareCerintaSimulare
  * Primeste ca parametru un element cu toate datele de intrare.
  *
  * Intoarce rezultatul pentru cerinta 3.
  */
int rezolvareCerintaSimulare(St_date_intrare in)
{
    int nrMaxIncercari = in.nrMaxIncercari;
    /* numarul maxim de incercari */

    int n = in.n;
    /* dimensiunea matricei (n x n) */

    int** M = in.M;
    /* matricea cu costul fiecarei pozitii */

    int sMax = in.sMax;
    /* suma maxima admisa pentru ca un drum sa fie SIGUR */

    int suma, i, j, nrIncercari = 0, rezultatFinal;
    /** TODO: simulati un numar de incercari (nu mai mult de nrMaxIncercari)
      * 6.0 cititi indicatiile din enuntul temei
      * 6.1 pentru fiecare simulare,
      *     -initializati suma cu 0
      *     -adaugati costul fiecarei pozitii (ca la cerinta 1)
      * 6.2 daca ati gasit un drum SIGUR, va opriti
      * 6.3 daca depasiti numarul de incercari, va opriti
      */


    rezultatFinal = nrIncercari;
    if(nrIncercari > nrMaxIncercari) {
        /* daca nu ne-am incadrat in cerinta, marcam cu 0 */
        rezultatFinal = 0;
    }

    return rezultatFinal;
}

/** TASK 7: functia rezolvareCerintaBacktracking
  * Primeste ca parametru un element cu toate datele de intrare.
  * Intoarce rezultatul pentru cerinta 4.
  */
int rezolvareCerintaBacktracking(St_date_intrare in)
{
    int** M = in.M;
    /* matricea cu costul fiecarei pozitii */

    int n = in.n;
    /* dimensiunea matricei (n x n) */

    int sMax = in.sMax;
    /* suma maxima admisa pentru ca un drum sa fie SIGUR */

    int startLin = n-1,
        startCol = n-1;
    /* pozitia de plecare pentru fiecare drum */

    int contorC4 = 0;
    /*contor solutii gasite */

    /* TODO: contorizati toate drumurile valide SIGURE */

    return contorC4;
}

/** TASK 8: functia eliberareMatrice
  * Primeste matricea M de dimensiune (n x n).
  */
void eliberareMatrice(int** M, int n)
{

    /* TODO: eliberati spatiul ce a fost alocat anterior */
}

/** TASK 9: functia eliberareSirCaractere
  * Primeste vectorul de caractere v.
  */
void eliberareSirCaractere(char* v)
{

    /* TODO: eliberati spatiul ce a fost alocat anterior */
}


/** Functia rand genereaza un numar "la intamplare"
  *
  * (DON'T TOUCH)
  */
int rand() {
    seed = (MULTIP * seed + INCREMENT) % MODULATOR;

    return seed;
}

/** Functia verificaArgumente verifica daca a fost
  * data o comanda de tipul ./comoara arg1 arg2.
  *
  * Daca da, atunci salveaza numele pentru fisierele
  * din care vom citi si in care vom scrie.
  *
  * Altfel, seteaza numele fisierelor dupa niste valori
  * default.
  *
  * (DON'T TOUCH)
  */
void verificaArgumente(int argc, char *argv[], char* numeIntrare, char* numeIesire)
{
    if(argc == 3) {
        strcpy(numeIntrare, argv[1]);
        strcpy(numeIesire, argv[2]);
    }
    else {
        strcpy(numeIntrare, INTRARE_DEFAULT);
        strcpy(numeIesire, IESIRE_DEFAULT);
    }
}

/** functia rezolvaSiScrieOutput se foloseste de functiile
  * pe care le veti implementa pentru:
  *     1. a obtine rezultatele la cerintele din fisierul de intrare
  *     2. a scrie rezultatele in fisierul de iesire
  *
  * (DON'T TOUCH)
  */
void rezolvaSiScrieOutput(St_date_intrare in, char* numeIesire)
{
    int rezultatCerinta[DIM_VECTOR_CERINTE];
    /* REZOLVA: */
    if(in.C[1]) {
        rezultatCerinta[1] = rezolvareCerintaGreedy(in);
    }
    if(in.C[2]) {
        rezultatCerinta[2] = rezolvareCerintaPD(in);
    }
    if(in.C[3]) {
        rezultatCerinta[3] = rezolvareCerintaSimulare(in);
    }
    if(in.C[4]) {
        rezultatCerinta[4] = rezolvareCerintaBacktracking(in);
    }
    /* SCRIE: */
    scrieOutput(in, rezultatCerinta, numeIesire);
}

/** Urmatoarele 2 functii de afisare pot fi folositoare
  * la DEBUG.
  */

/** Functia printMatrix afiseaza toate elementele
  * dintr-o matrice data M cu dimensiunea (n x n).
  */
void printMatrix(int** M, int n)
{
    int i, j;
    for(i = 0;i < n;i++) {
        for(j = 0;j < n;j++) {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
}

/** Cu functia printInput puteti verifica daca
  * ati citit bine datele de intrare.
  */
void printInput(St_date_intrare in)
{
    int i;
    printf("DATE INTRARE:\n");
    for(i = 1; i <= 4;i++) {
        printf("%d ", in.C[i]);
    }
    printf("\n%d\n%d\n", in.n, in.sMax);
    printMatrix(in.M, in.n);
    printf("%d", in.nrMaxIncercari);
}
