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
// Scrieţi definiţia completă a subprogramului interval care 
// are doi parametri a şi n, prin care primeşte un tablou 
// unidimensional cu maximum 100 de numere naturale mai mici
// decât 1000 şi respectiv numărul efectiv de elemente din 
// tabloul unidimensional.
// 
// Subprogramul returnează numărul de elemente din tabloul 
// unidimensional care aparţin intervalului închis determinat 
// de primul şi respectiv ultimul element al tabloului.
// 
// Exemplu: dacă tabloul are 6 elemente şi este de forma
// (12, 27, 6, 8, 9, 2), subprogramul va returna valoarea 5.

void solutiePb15() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	int x[100];
	citirePb11(x, n);
	cout << "Raspunsul este " << countPb15(x, n) << "." << endl;
}

// Problema 16
// Scrieţi un program C/C++ care citeşte de la tastatură un 
// număr natural n (2<n<20), construieşte în memorie şi afişează 
// pe ecran o matrice cu n linii şi n coloane, numerotate
// de la 1 la n, în care fiecare element aflat pe o linie 
// impară este egal cu suma dintre indicii liniei şi coloanei pe 
// care se află şi fiecare element aflat pe o linie pară este egal 
// cu cel mai mic dintre elementele aflate pe linia anterioară şi 
// pe aceeaşi coloană cu el sau pe linia anterioară şi pe una 
// dintre coloanele vecine cu cea pe care se află el.
// 
// Elementele matricei vor fi afişate pe ecran, câte o linie a 
// matricei pe câte o linie a ecranului cu câte un spaţiu între 
// elementele fiecărei linii.
//
// Exemplu pentru n = 5 :
//
//			2 3 4 5 6
//			2 2 3 4 5
//			4 5 6 7 8
//			4 4 5 6 7
//			6 7 8 9 10

void solutiePb16() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	int x[100][100];
	atribuirePb16(x, n);
	afisareMatrice(x, n, n);
}

// Problema 17
// Subprogramul aranjare are doi parametri: a prin care primeşte
// un tablou unidimensional cu maximum 100 de numere reale nenule 
// şi n, numărul de elemente din tablou.
// 
// Subprogramul rearanjează elementele tabloului unidimensional 
// astfel încât toate valorile negative să se afle pe primele 
// poziţii, iar valorile pozitive în continuarea celor negative.
// 
// Ordinea în cadrul secvenţei de elemente pozitive, respectiv 
// în cadrul secvenţei de elemente negative, poate fi oricare.
// 
// Tabloul modificat va fi furnizat tot prin intermediul 
// parametrului a.
// 
// Exemplu dacă tabloul are 6 elemente şi este de forma
// (12, -7.5, 6.5, -3, -8, 7.5), după apel, acesta ar putea fi : 
// 
// (-7.5, -3, -8, 12, 6.5, 7.5).

void solutiePb17() {
	int n;
	cout << "Introduceti numarul de elemente : ";
	cin >> n;
	double x[100];
	citirePb17(x, n);
	aranjarePb17(x, n);
	afisareVectorPb17(x, n);
}

// Problema 18 
// Subprogramul nule are doi parametri: a, prin care primeşte 
// un tablou unidimensional cu maximum 100 de numere întregi, 
// cu cel mult 4 cifre fiecare şi n, numărul de elemente din
// tablou. 
// 
// Subprogramul rearanjează elementele tabloului unidimensional 
// astfel încât toate valorile nule să se afle la sfârşitul tabloului.
//
// Ordinea în cadrul secvenţei de elemente nenule poate fi oricare.
//  
// Exemplu pentru n = 6, a = (12, 0, 0, -3, -8, 0) :
// 
//			(12, -3, -8, 0, 0, 0).

void solutiePb18() {
	int n; 
	cout << "Introduceti numarul de elemente : ";
	cin >> n;
	int x[100];
	citirePb11(x, n);
	aranjarePb18(x, n);
	afisareVector(x, n);
}

// Problema 19
// Scrieţi definiţia completă a unui subprogram i_prim care 
// primeşte prin singurul său parametru, n, un număr natural 
// din intervalul[2, 30000] şi returnează diferenţa minimă
// p2 - p1 în care p1 şi p2 sunt numere prime şi p1≤n≤p2.
// 
// Exemplu pentru n = 20 se afiseaza 4.

void solutiePb19() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	cout << "Raspunsul este " << raspunsPb19(n) << ".";
}

// Problema 20
// Scrieţi definiţia completă a subprogramului shift care 
// primeşte prin intermediul parametrului n o valoare 
// naturală nenulă(n≤100), iar prin intermediul parametrului 
// x, un tablou unidimensional cu maximum 100 de componente.
// 
// Fiecare componentă a acestui tablou este un număr întreg 
// care are cel mult 4 cifre.Subprogramul permută circular 
// cu o poziţie spre stânga primele n elemente ale tabloului 
// x şi furnizează tabloul modificat tot prin parametrul x.
// 
// Exemplu pentru n = 4 şi x = (1, 2, 3, 4)
//
//			(2, 3, 4, 1)

void solutiePb20() {
	int m, n;
	cout << "Introduceti numarul termenilor : ";
	cin >> m;
	cout << "Introduceti n : ";
	cin >> n;
	int x[100];
	citirePb11(x, m);
	aranjarePb20(x, m, n);
	afisareVector(x, m);
}

// Problema 21
// Scrieţi definiţa completă a subprogramului nreal cu doi 
// parametri x şi y, numere naturale din intervalul[1; 1000] 
// ce returnează un număr real cu proprietatea că partea sa 
// întreagă este egală cu x, iar numărul format din zecimalele 
// sale, în aceeaşi ordine, este egal cu y.
// 
// Exemplu pentru x = 12 şi y = 543, se afiseaza 12.543

void solutiePb21() {
	int x, y;
	cout << "Introduceti x : ";
	cin >> x;
	cout << "Introduceti y : ";
	cin >> y;
	cout << "Raspunsul este " << raspunsPb21(x, y);
}

// Problema 22
// Scrieţi definiţia completă a subprogramului multipli, 
// cu trei parametri a,b,c (a≤b), numere naturale din 
// intervalul[1, 10000] ce returnează numărul numărul 
// multiplilor lui c din intervalul[a; b].
// 
// Exemplu pentru a = 10, b = 27, c = 5 se afiseaza 4.

void solutiePb22() {
	int a, b, c;
	cout << "Introduceti a : ";
	cin >> a;
	cout << "Introduceti b : ";
	cin >> b;
	cout << "Introduceti c : ";
	cin >> c;
	cout << "Raspunsul este " << raspunsPb22(a, b, c) << "." << endl;
}

// Problema 23
// Scrieţi definiţia completă a subprogramului suma, 
// care primeşte prin cei 4 parametri, v, n, i, j:
// -v, un tablou unidimensional cu maximum 100 de elemente 
//  întregi din intervalul [-1000, 1000], numerotate de 
//  la 1 la n;
// -n, un număr natural reprezentând numărul de elemente 
//  din tabloul v;
// -i şi j, două valori naturale cu 1≤i≤j≤100 şi returnează 
//  suma elementelor v1, …vi - 1, vj + 1, …, …, vn din 
//  tabloul v.

void solutiePb23() {
	int n, a, b;
	cout << "Introduceti numarul termenilor : ";
	cin >> n;
	int x[100];
	citirePb11(x, n);
	cout << "Introduceti i : ";
	cin >> a;
	cout << "Introduceti j : ";
	cin >> b;
	cout << "Avem : " << endl;
	afisareVector(x, n);
	cout << endl << "Suma este " << raspunsPb23(x, n, a, b) << "." << endl;
}

// Problema 24
// Scrieţi definiţia completă a subprogramului suma care 
// primeşte ca parametru un tablou unidimensional x cu cel 
// mult 100 de elemente, numere reale, un număr natural n ce
// reprezintă numărul efectiv de elemente ale tabloului 
// x(n≤100), şi un număr natural m(n≥m). 
// 
// Subprogramul returnează suma obţinută din cele mai mici 
// m elemente ale tabloului x.

void solutiePb24() {
	int n, m;
	cout << "Introduceti numarul termenilor : ";
	cin >> n;
	cout << "Introduceti m : ";
	cin >> m;
	if (m > n) {
		cout << "M nu poate fi mai mare decat N.";
	}
	else {
		int x[100];
		citirePb11(x, n);
		cout << "Avem :" << endl;
		afisareVector(x, n);
		bubbleSort(x, n);
		cout << endl << "Suma este " << raspunsPb24(x, n, m) << "." << endl;
	}
}

// Problema 25
// Scrieţi definiţia completă a subprogramului nr_prim care 
// are ca parametru un număr natural x şi returnează cel 
// mai mic număr prim, strict mai mare decât x.
// 
// Exemplu pentru x = 25 se afiseaza 29.

void solutiePb25() {
	int x;
	cout << "Introduceti x : ";
	cin >> x;
	cout << "Raspunsul este " << raspunsPb25(x) << ".";
}

// Problema 26
// Pe prima linie a fişierului text BAC.TXT se află o valoare 
// naturală n (1<n≤50), iar pe a doua linie n numere naturale 
// cu maximum 4 cifre fiecare, despărţite prin câte un spaţiu.
// În şirul numerelor de pe a doua linie a fişierului există 
// cel pzâin două numere pătrate perfecte.
// 
// Scrieţi un program C / C++ care citeşte toate numerele din 
// fişier şi afişează pe ecran expresia aritmetică 
// reprezentând suma numerelor de pe a doua linie a fişierului 
// care au proprietatea că sunt pătrate perfecte, cu simbolul 
// + între ele şi, după un semn =, valoarea acestei sume, ca 
// în exemplu.
// Termenii sumei afişate se pot afla în orice ordine.
// 
// Exemplu dacă fişierul BAC.TXT are următorul conţinut
// 5
// 9 5 36 9 8
// atunci pe ecran se poate afişa :

void solutiePb26() {
	int n = 0;
	int x[100];
	citireFisier(x, n);
	afisareRaspunsPb26(x, n);
}

// Problema 27
// Se consideră subprogramul P care are doi parametri:
// – n, prin intermediul căruia primeşte un număr natural 
//  de cel mult 9 cifre
// – c, prin intermediul căruia primeşte o cifră.
// 
// Subprogramul va furniza tot prin intermediul parametrului 
// n numărul obţinut din n prin eliminarea tuturor apriţiilor 
// cifrei c.Dacă, după eliminare, numărul nu mai conţine nicio 
// cifră sau conţine doar cifre 0, rezultatul returnat va fi 0.
// 
// a) Scrieţi doar antetul subprogramului P. (2p.)
// b) Pe prima linie a fişierului text BAC.IN se găsesc, 
// separate prin câte un spaţiu, mai multe numere naturale 
// de cel mult 9 cifre fiecare.Scrieţi programul C / C++ care 
// citeşte numerele din acest fişier, utilizând apeluri ale 
// subprogramului P elimină toate cifrele impare din fiecare
// dintre aceste numere şi apoi scrie în fişierul text BAC.OUT 
// numerele astfel obţinute, separate prin câte un spaţiu.
// 
// Dacă un număr din fişierul BAC.IN nu conţine nicio cifră 
// pară nenulă, acesta nu va mai apărea deloc în fişierul de 
// ieşire. (8p.)
// 
// Exemplu dacă fişierul BAC.IN conţine numerele 
// 25 7 38 1030 45127 0 35 60 15,
// 
// atunci BAC.OUT va avea conţinutul : 
// 2 8 42 60.

void solutiePb27() {
	int n = 0;
	int x[100];
	citireFisierPb27(x, n);
	rezolvarePb27(x, n);
	outputPb27(x, n);
}

// Problema 28
// Fişierul text BAC.TXT conţine mai multe numere naturale, cu 
// cel mult 6 cifre fiecare, câte un număr pe fiecare linie a 
// fişierului.
// 
// Scrieţi un program C / C++ care citeşte toate numerele din 
// fişierul BAC.TXT şi le afişează pe ecran, în aceeaşi ordine, 
// câte cinci pe fiecare linie, separate prin câte un spaţiu, 
// cu excepţia ultimei linii care poate conţine mai puţin de 
// cinci numere.
// 
// Programul va afişa apoi pe ecran, pe o linie separată, 
// câte numere din fişier au suma cifrelor pară.
// 
// Exemplu dacă fişierul are :
// 11 21 30 40 51 16 17 10 1
// 
// Se afiseaza : 
// 
//	11 21 30 40 51
//	16 17 10 1
//	4

void solutiePb28() {
	int n = 0;
	int x[100];
	citireFisierPb28(x, n);
	cout << "Avem : " << endl;
	afisareVector(x, n);
	cout << "Raspunsul este : " << endl << endl;
	raspunsPb28(x, n);
}

// Problema 29
// În fişierul text BAC.IN se găsesc, pe o singură linie, 
// separate prin câte un spaţiu, mai multe numere naturale 
// de cel mult 6 cifre fiecare.Se cere să se determine şi 
// să se afişeze pe ecran, separate printr - un spaţiu, 
// ultimele două numere impare(nu neapărat distincte) din
// fişierul BAC.IN.
// 
// Dacă în fişier se găseşte un singur număr impar sau 
// niciun număr impar se va scrie pe ecran mesajul 
// Numere insuficiente.
// 
// Exemplu dacă fişierul BAC.IN conţine valorile : 
// 12 15 68 13 17 90 31 42 
// 
// Se va afisa : 
// 17 31.

void solutiePb29() {
	int n = 0;
	int x[100];
	citirePb29(x, n);
	cout << "Avem : " << endl;
	afisareVector(x, n);
	cout << endl;
	rezolvarePb29(x, n);
}

// Problema 30
// În fişierul numere.txt sunt memorate maximum 10000 de 
// numere naturale cu cel mult 9 cifre fiecare.Fiecare linie 
// a fişierului conţine câte un număr.Se cere afişarea pe ecran, 
// în ordine descrescătoare, a tuturor cifrelor care apar în 
// numerele din fişier.
// 
// Alegeţi un algoritm de rezolvare eficient din punct de vedere 
// al timpului de executare.
// 
// Exemplu dacă fişierul numere.txt conţine :
// 267
// 39628
// 79
//
// Se afiseaza : 
// 9987766322

void solutiePb30() {
	int n = 0;
	int x[100];
	citirePb30(x, n);
	cout << "Avem : " << endl;
	afisareVector(x, n);
	cout << endl << "Raspunsul este : " << endl;
	raspunsPb30(x, n);
}

// Problema 31
// În fişierul numere.txt pe prima linie este memorat un 
// număr natural n (n≤10000), iar pe linia următoare un şir 
// de n numere naturale distincte două câte două, separate prin 
// câte un spaţiu, cu maximum 4 cifre fiecare.Se cere afişarea 
// pe ecran a poziţiei pe care s - ar găsi primul element din 
// şirul aflat pe linia a doua a fişierului, în cazul în care 
// şirul ar fi ordonat crescător. 
// 
// Numerotarea poziţiilor elementelor în cadrul şirului este de 
// la 1 la n.
// 
// Alegeţi un algoritm de rezolvare eficient din punct de vedere 
// al memoriei utilizate şi al timpului de executare.
// 
// Exemplu dacă fişierul numere.txt conţine :
// 267 13 45 628 7 79
// 
// Se va afişa 5, deoarece primul element din şirul iniţial, 
// 267, s - ar găsi pe poziţia a cincea în şirul ordonat 
// crescător(7 13 45 79 267 628).

void solutiePb31() {
	int n = 0;
	int x[100];
	citirePb30(x, n);
	cout << "Avem : " << endl;
	afisareVector(x, n);
	cout << endl << "Raspunsul este :" << endl;
	cout << cateNrMaiMiciDecatM(x, n, x[0]) + 1;
}

// Problema 32
// În fişierul nr1.txt este memorată pe prima linie o valoare 
// naturală n de cel mult 8 cifre, iar pe linia următoare sunt 
// memorate n numere naturale, cu maximum 4 cifre fiecare,
// ordonate strict crescător şi separate prin câte un spaţiu.
// 
// În fişierul nr2.txt este memorată pe prima linie o valoare 
// naturală m de cel mult 8 cifre, iar pe linia următoare sunt 
// memorate m numere naturale, cu maximum 4 cifre fiecare, 
// ordonate strict crescător şi separate prin câte un spaţiu.
// 
// Se cere afişarea pe ecran, separate prin câte un spaţiu, în 
// ordine strict crescătoare, a tuturor numerelor aflate pe a doua 
// linie în cel puţin unul dintre cele două fişiere.
// 
// În cazul în care un număr apare în ambele fişiere, el va fi 
// afişat o singură dată.
// 
// Alegeţi un algoritm de rezolvare eficient din punct de vedere 
// al memoriei utilizate şi al timpului de executare.
// 
// Exemplu: pentru următoarele fişiere :
// nr1.txt						nr2.txt
// 5							6
// 3 6 8 9 12					2 3 5 7 9 13
// 
// Se va afişa :
// 2 3 5 6 7 8 9 12 13

void solutiePb32() {
	int n = 0, m = 0;
	int x[100], y[100];
	citireFisierPb32nr1(x, n);
	citireFisierPb32nr2(y, m);
	cout << "Avem : " << endl;
	afisareVector(x, n);
	afisareVector(y, m);

	int j = 0;
	int raspuns[100];
	raspunsPb32(x, y, n, m, raspuns, j);
}