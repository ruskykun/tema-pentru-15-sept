﻿#include "functii.h"

// Problema 1.
// Scrieţi un program C/C++ care citeşte de la 
// tastatură un număr natural n (2≤n≤24) şi
// construieşte în memorie o matrice cu n linii 
// şi n coloane ale cărei elemente vor primi valori
// după cum urmează :
// -elementele aflate pe diagonala principală a 
//	matricei vor primi valoarea 0.
// - elementele de pe prima coloană, cu excepţia 
//	celui aflat pe diagonala principală vor primi
//	valoarea n.
// - elementele de pe a doua coloană, cu excepţia 
//	celui aflat pe diagonala principală vor primi
//	valoarea n - 1.
// ...
// - elementele de pe ultima coloană, cu excepţia 
//	celui aflat pe diagonala principală vor primi
//	valoarea 1.
// Programul va afişa matricea astfel construită 
// pe ecran, câte o linie a matricei pe câte o linie 
// a ecranului, cu câte un spaţiu între elementele 
// fiecărei linii(ca în exemplu).
// 
//	Exemplu: pentru n = 4
// 
//		0 3 2 1
//		4 0 2 1
//		4 3 0 1
//		4 3 2 0

void solutiePb1() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	cout << endl;
	int x[100][100];
	atribuirePb1(x, n);
	afisareMatrice(x, n, n);
}

// Problema 2.
// Acelasi enunt, dar in loc de coloane sunt linii, iar
// diagonala este cea secundara.
// 
//	Exemplu: pentru n = 4
// 
//		4 4 4 0
//		3 3 0 3
//		2 0 2 2
//		0 1 1 1

void solutiePb2() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	cout << endl;
	int x[100][100];
	atribuirePb2(x, n);
	afisareMatrice(x, n, n);
}

// Problema 3.
// Scrieţi un program C/C++ care citeşte de 
// la tastatură două numere naturale n şi m
// (2≤m≤10, 2≤n≤10) şi care construieşte în 
// memorie şi apoi afişează o matrice A cu 
// n linii(numerotate de la 1 la n) şi m 
// coloane(numerotate de la 1 la m) cu 
// proprietatea că fiecare element Aij 
// memorează cea mai mare dintre valorile 
// indicilor i şi j(1≤i≤n, 1≤j≤m). Matricea 
// se va afişa pe ecran, câte o linie a 
// matricei pe câte o linie a ecranului, 
// elementele fiecărei linii fiind separate 
// prin câte un spaţiu.
// 
//	Exemplu: pentru n = 4 şi m = 5
//
//		1 2 3 4 5
//		2 2 3 4 5
//		3 3 3 4 5
//		4 4 4 4 5

void solutiePb3() {
	int n, m;
	cout << "Introduceti n : ";
	cin >> n;
	cout << "Introduceti m : ";
	cin >> m;
	cout << endl;
	int x[100][100];
	atribuirePb3(x, n, m);
	afisareMatrice(x, n, m);
}

// =-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=
// V V V V V INCEPUT TEMA V V V V V
// =-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=

// Problema 4.
// Se consideră tabloul bidimensional cu n 
// linii şi n coloane ce conţine numere 
// naturale cu cel mult patru cifre fiecare.
// Scrieţi programul C / C++ care citeşte de 
// la tastatură numărul natural n(2≤n≤23) şi 
// cele n * n elemente ale tabloului şi apoi 
// afişează pe ecran elementele primului
// pătrat concentric, separate prin câte un 
// spaţiu.Pătratul este parcurs în sensul 
// acelor de ceasornic începând din colţul 
// său stânga - sus, ca în exemplu. Primul pătrat 
// concentric este format din prima şi ultima 
// linie, prima şi ultima coloană a tabloului.
// 
//  Exemplu : pentru n = 5
// 
//		1 2 3 4 5
//		6 7 8 9 1
//		2 3 4 5 6
//		7 8 9 1 2
//		3 4 5 6 7

void solutiePb4() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	cout << endl;
	int x[100][100];
	citireFisierPb4(x, n);
	afisarePb4(x, n);
}

// NECESAR ALGORITM SPIRALA ^

// Problema 5
// Scrieţi un program C/C++ care citeşte de la 
// tastatură două numere naturale n şi p (2≤n≤20, 1≤p≤20) 
// şi construieşte în memorie un tablou bidimensional 
// cu n linii şi p coloane.Tabloul va fi construit 
// astfel încât, parcurgând matricea linie cu linie de 
// sus în jos şi fiecare linie de la stânga la dreapta, 
// să se obţină şirul primelor n* p pătrate perfecte pare,
// ordonat strict crescător, ca în exemplu.Tabloul astfel 
// construit va fi afişat pe ecran, fiecare linie a 
// tabloului pe câte o linie a ecranului, cu câte un 
// spaţiu între elementele fiecărei linii.
//
// Exemplu pentru n = 2, p = 3 :
//
//			 0  4  16
//			36 64 100

void solutiePb5() {
	int n, p;
	cout << "Introduceti n : ";
	cin >> n;
	cout << "Introduceti p : ";
	cin >> p;
	int x[100][100];
	atribuirePb5(x, n, p);
	afisareMatrice(x, n, p);
}

// Problema 6
// Scrieţi un program C/C++ care citeşte de la tastatură 
// două valori naturale nenule m şi n (m≤10, n≤10) şi 
// apoi m* n numere naturale nenule cu cel mult 4 cifre 
// fiecare, reprezentând elementele unei matrice cu m 
// linii şi n coloane.Programul determină apoi valorile 
// minime de pe fiecare linie a matricei şi afişează pe 
// ecran cea mai mare valoare dintre aceste minime.
//
// Exemplu pentru m = 3, n = 5 si matricea de jos :
//
// 3 6 5 4 7
// 9 6 12 9 10
// 5 13 7 2 3
//
// Se afiseaza : 6.

void solutiePb6() {
	int m, n;
	cout << "Introduceti m : ";
	cin >> m;
	cout << "Introduceti n : ";
	cin >> n;
	int x[100][100];
	citireTastatura(x, m, n);
	cout << "Raspunsul este : " << maxDintreMinLinilor(x, m, n) << "." << endl;
}

// Problema 7
// Scrieţi un program C/C++ care citeşte de la tastatură 
// un număr natural n (2<n<25) şi apoi construieşte în 
// memorie o matrice cu n linii şi n coloane, numerotate 
// de la 1 la n, ale cărei elemente primesc valori după 
// cum urmează : elementul din linia i şi coloana j 
// primeşte ca valoare ultima cifră a produsului 
// i* j(1≤i≤n şi 1≤j≤n). 
// 
// Programul va afişa matricea astfel construită pe ecran,
// câte o linie a matricei pe o linie a ecranului, 
// elementele fiecărei linii fiind separate prin câte 
// un spaţiu.
//
// Exemplu pentru n = 4 :
//
// 1 2 3 4
// 2 4 6 8
// 3 6 9 2
// 4 8 2 6

void solutiePb7() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	int x[100][100];
	atribuirePb7(x, n);
	afisareMatrice(x, n, n);
}

// Problema 8
// Fişierele text NR1.TXT şi NR2.TXT conţin, separate 
// prin câte un spaţiu, mai multe numere întregi de cel 
// mult 9 cifre fiecare.Fiecare dintre fişiere conţine 
// cel mult 100 de valori şi numerele din fiecare fişier 
// b sunt ordonate strict crescător.Se cere să se afişeze 
// pe ecran, în ordine crescătoare, numerele divizibile 
// cu 5 care se găsesc doar în unul din cele două fişiere.
// Exemplu: dacă fişierul NR1.TXT conţine numerele 
// 1 2 3 4 7 20 60, iar fişierul NR2.TXT conţine numerele 
// 3 5 7 8 9 10 12 20 24, atunci se vor afişa pe ecran
// valorile 5 10 60.

void solutiePb8() {
	int x[100][100], y[100][100], z[100][100];
	citireSiSelectareNumerePb8(x, y, z);
}

// Problema 9
// Scrieţi un program C/C++ care citeşte de la tastatură 
// un număr natural n (2<n<25) şi apoi construieşte în 
// memorie o matrice cu n linii şi n coloane, numerotate 
// de la 1 la n, ale cărei elemente primesc valori după 
// cum urmează :
// -elementele aflate pe diagonala secundară sunt 
//  toate nule;
// -elementele de pe coloana i(1≤i≤n), aflate deasupra 
//  diagonalei secundare, au valoarea egală cu i;
// -elementele de pe linia n - i + 1 (1≤i≤n), aflate sub 
//  diagonala secundară, au valoarea egală cu i.
// 
// Programul afişează pe ecran matricea construită, 
// câte o linie a matricei pe câte o linie a ecranului, 
// elementele fiecărei linii fiind separate prin câte un
// spaţiu.
// 
// Exemplu: pentru n = 4 :
// 
//			1 2 3 0
//			1 2 0 3
//			1 0 2 2
//			0 1 1 1

void solutiePb9() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	int x[100][100];
	atribuirePb9(x, n);
	afisareMatrice(x, n, n);
}

// Problema 10
// Scrieţi un program C / C++ care citeşte de la 
// tastatură un număr natural nenul, cu maximum
// 8 cifre, construieşte în memorie şi afişează 
// apoi pe ecran o matrice pătratică, având
// numărul de linii şi de coloane egal cu numărul 
// de cifre ale numărului dat, completată cu
// cifrele numărului citit.
// Astfel, elementele de pe prima coloană a matricei 
// vor fi toate egale cu cifra unităţilor numărului 
// dat, elementele de pe a doua coloană a matricei 
// vor fi toate egale cu cifra zecilor numărului dat, 
// şi aşa mai departe, ca în exemplu.
// 
// Exemplu pentru n = 1359 :
//
//			9 5 3 1
//			9 5 3 1
//			9 5 3 1
//			9 5 3 1

void solutiePb10() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	int x[100][100];
	atribuirePb10(x, n);
	afisareMatrice(x, n, n);
}

// Problema 11
// Se citeşte de la tastatură un număr natural n (n≤500) 
// şi apoi n cifre separate prin spaţii. Se cere să se 
// afişeze pe ecran cele n cifre citite, în ordine 
// crescătoare, separate prin câte un spaţiu.
// Exemplu: pentru n = 19 şi cifrele
// 3 3 0 9 2 1 2 1 3 7 1 5 2 7 1 0 3 2 3 
// se va afişa pe ecran :
// 
// 0 0 1 1 1 1 2 2 2 2 3 3 3 3 3 5 7 7 9

void solutiePb11() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	int x[500];
	citirePb11(x, n);
	cout << "Numerele introduse sunt : " << endl;
	afisareVector(x, n);
	bubbleSort(x, n);
	cout << "Numerele dupa sortare sunt : " << endl;
	afisareVector(x, n);
}

// Problema 12
// Scrieţi un program C/C++ care citeşte de la tastatură 
// un număr natural cu exact 5 cifre şi construieşte în 
// memorie o matrice cu 6 linii şi 6 coloane, numerotate 
// de la 1 la 6, formată astfel :
// -elementele aflate pe diagonala principală sunt toate 
//  nule;
// -elementele de pe linia 1, aflate deasupra diagonalei 
//  principale precum şi elementele de pe coloana 1, 
//  aflate sub diagonala principală au toate valoarea 
//  egală cu cifra unităţilor numărului citit;
// -elementele de pe linia 2, aflate deasupra diagonalei 
//  principale precum şi elementele de pe coloana 2, 
//  aflate sub diagonala principală au toate valoarea 
//  egală cu cifra zecilor numărului citit, şi aşa mai 
//  departe, ca în exemplu.
// 
// Matricea astfel construită va fi afişată pe ecran, câte 
// o linie a matricei pe câte o linie a ecranului, 
// elementele de pe aceeaşi linie fiind separate prin 
// câte un spaţiu.
//
// Exemplu pentru n = 28731 :
//
//			0 1 1 1 1 1
//			1 0 3 3 3 3
//			1 3 0 7 7 7
//			1 3 7 0 8 8
//			1 3 7 8 0 2
//			1 3 7 8 2 0

void solutiePb12() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	int x[100][100];
	atribuirePb12(x, n);
	afisareMatrice(x, 6, 6);
}

// Problema 13
// Scrieţi un program C/C++ care citeşte de la tastatură un 
// număr natural n (n≤32000) şi afişează pe ecran numărul natural 
// din intervalul închis[1, n] care are cei mai mulţi divizori.
// Dacă există mai multe numere cu această proprietate se va afişa 
// cel mai mic dintre ele.
//
// Exemplu pentru n = 20 se afiseaza 12.

void solutiePb13() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	cout << celMaiMicNrCuMaxDiv(n);
}

// Problema 14
// Scrieţi definiţia completă a subprogramului multiplu care 
// are 3 parametri: a, prin care primeşte un tablou unidimensional 
// cu maximum 100 de numere naturale mai mici decât 1000, n, 
// numărul efectiv de elemente ale tabloului şi k, un număr 
// natural(k≤9).
// 
// Subprogramul returnează numărul de elemente din tablou care 
// sunt multipli ai numărului k şi au ultima cifră egală cu k.
// 
// Exemplu: dacă n = 6, a = (9, 273, 63, 83, 93, 123), iar k = 3, 
// subprogramul va returna valoarea 4.

void solutiePb14() {
	int n, k;
	cout << "Introduceti numarul de elemente : ";
	cin >> n;
	int x[100];
	citirePb11(x, n);
	cout << "Introduceti k : ";
	cin >> k;
	cout << "Raspunsul este " << countPb14(x, n, k) << "." << endl;
}

// Problema 15
// 

