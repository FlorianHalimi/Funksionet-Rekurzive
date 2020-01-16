#include <iostream>
#include <math.h>
using namespace std;

#define MAX 100
#define MAXX 100
#define LIMIT 1000
int gjatesia(char[], int);
int printoNumrin(int np);
int shumaNumrave(int sh);
char* ReverseOfString(char[]);
int numri(int nrm);
int shuma(int nsh);
int PMMP(int n1, int n2);
int ElementiMeiMadh(int[]);
void kopjofjalen(char[], char[], int);
void qiftDHEtek(int fillimi, int fundi);
int power(int a, int b);
void Shtypja(int fillimi, int fundi);
bool ithjeshte(int w, int i = 2);
void printFun(int test);
void fun2(int n);

int main() {
	int funksioni;

	cout << "Cilin funksion deshironi te perdorni:\n" << endl
		<< "1. Gjatesia e fjales " << endl
		<< "2. Printimi i numrave deri 50 " << endl
		<< "3. Kalkulimi i shumes se numrave " << endl
		<< "4. Tregoni numri i dhene numer sa shifror eshte ?" << endl
		<< "5. Kthimi i fjales mbrapsht " << endl
		<< "6. Gjeni shumen e nje numri te dhene " << endl
		<< "7. PMMP " << endl
		<< "8. Elementin me te madhe te nje vargu " << endl
		<< "9. Kopjimi i fjales se dhene " << endl
		<< "10. Numrat qift dhe tek te nje intervali te dhene " << endl
		<< "11. Fuqia e nje numri " << endl
		<< "12. A eshte numer i thjeshte apo jo " << endl
		<< "13. Shtypja e numrave me zvogelim dhe rritje" << endl
		<< "14. Jepe numrin dhe ate numer te shumzuar qdo here me 2 " << endl;
	cout << "Shenoni funksionin:" << endl;
	cin >> funksioni;

	switch (funksioni) {
	case 1: // Gjatesia e fjales
		char s[100];
		int z;
		z = 0;

		cout << "Shkruani fjalen: \n";
		cin >> s;

		z = gjatesia(s, 0);

		cout << " Fjala i ka " << z << " shkronja";
		break;
	case 2: // Printimi i numrave deri 50
		int np;
		np = 1;
		printoNumrin(np);
		break;
	case 3: //Kalkulimi i shumes se numrave
		int sh;
		cout << "Shenoni numrin deri te cili deshironi te mbledhni numrat: " << endl;
		cin >> sh;
		int sum;
		sum = shumaNumrave(sh);

		cout << sum;
		break;
	case 4: // Tregoni numri i dhėnė numėr sa shifror ėshtė ?
		int nrm, m;
		cout << "Shkruani numrin: " << endl;
		cin >> nrm;
		m = numri(nrm);

		cout << m << " shifror";
		break;
	case 5: //Fjala mbrapsht

		char str1[MAXX], * revstr;
		cout << "\n\n Merrni fjalen mbrapsht:\n";


		cout << " Shenoni nje fjale: ";
		cin >> str1;

		revstr = ReverseOfString(str1);

		cout << " Fjala e kthyer mbrapsht eshte: \n" << revstr;
		break;
	case 6: //Gjeni shumėn e njė numri tė dhėnė
		int nsh;
		cin >> nsh;

		cout << shuma(nsh);
		break;
	case 7: //PMMP
		int n1, n2, emm;
		cout << "\n PMMP :\n";
		cout << " Shenoni numrin e pare: ";
		cin >> n1;
		cout << " Shenoni numrin e dyte: ";
		cin >> n2;

		emm = PMMP(n1, n2);
		cout << "PMMP :" << " " << emm;
		break;
	case 8: //Elementin me te madhe te nje vargu
		int v[MAX], numri, i;

		cout << " Numri me i madhe i vargut:\n";


		cout << " Sa elemente deshironi ti permbaje vargu:";
		int em;
		cin >> em;

		cout << "Shenoni " << em << " elemete te vargut ";
		for (i = 0; i < em; i++)
		{
			cin >> v[i];
		}
		cout << "Elementi me i madh i vargut eshte: " << ElementiMeiMadh(v) << endl;

		break;
	case 9: //Kopjimi i fjalės sė dhėnė
		char fjala1[20], fjala2[20];
		cout << "Kopja e nje fjale  :\n";


		cout << " Shkruaj fjalen qe deshironi te kopjoni: ";
		cin >> fjala1;
		kopjofjalen(fjala1, fjala2, 0);
		cout << "\n Fjala u kopjua me sukses!\n\n";
		cout << " Fjala e pare eshte : " << fjala1 << endl;
		cout << " Fjala e kopjuar eshte  :" << fjala2;
		break;
	case 10: //Numrat qift dhe tek tė njė intervali tė dhėnė
		int nqt;
		cout << "Shtypja e numrave qift dhe tek ne varg \n\n";

		cout << "Shtypeni numrin e fundit deri te cili doni te ndani numrat qift dhe tek " << endl;
		cin >> nqt;

		cout << "Numrat qift nga 1 deri " << nqt << "jane :";
		qiftDHEtek(2, nqt);;
		cout << endl;

		cout << "Numrat tek nga 1 deri " << nqt << "jane :";
		qiftDHEtek(1, nqt);
		break;
	case 11: //Gjeni fuqine e nje numri 
		int q, k;
		cout << "Shtypeni bazen";
		cin >> q;
		cout << "shtypeni eksponentin";
		cin >> k;

		cout << "rezultati" << power(q, k);

		break;

	case 12: // Per te treguar a eshte nnumer i thjeshte apo jo
		int l;
		cout << "Shtyp numrin per te kontrolluar";
		cin >> l;

		if (ithjeshte(l))
			cout << "Numri eshte i thjeshte";
		else
			cout << "Numri nuk eshte i thjeshte";
		break;
	case 13: // Shtypja e numrave me zvogelim dhe rritje 
		int test;
		cout << "Shenoni nje numer: " << endl;
		cin >> test;
		printFun(test);
		break;
	case 14: // numri shumezuar me 2
		int n;
		cout << "Shkruani nje numer: " << endl;
		cin >> n;
		fun2(n);
		break;
	default:
		cout << "Funksioni nuk ekziston" << endl;
	}
}

int gjatesia(char s[], int index)
{
	static int z = 0;


	if (s[index] == '\0')
		return z;
	else
		z++;

	gjatesia(s, index + 1);
}
int printoNumrin(int np) {
	if (np <= 50) {
		cout << np << " ";
		printoNumrin(np + 1);
	}
	return np;
}

int shumaNumrave(int sh) {
	int rez;
	if (sh == 1) {
		return 1;
	}
	else {
		rez = sh + shumaNumrave(sh - 1);
	}
	return rez;
}

int numri(int nrm) {
	static int m = 0;
	if (nrm != 0) {
		m++;
		numri(nrm / 10);
	}
	return m;
}

char* ReverseOfString(char str1[])
{
	static int i = 0;
	static char revstr[MAXX];
	if (*str1)
	{
		ReverseOfString(str1 + 1);
		revstr[i++] = *str1;
	}
	return revstr;
}
int shuma(int nsh) {
	if (nsh == 0)
		return 0;

	return ((nsh % 10) + shuma(nsh / 10));
}

int PMMP(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			return PMMP(a - b, b);
		else
			return PMMP(a, b - a);
	}
	return a;
}

int ElementiMeiMadh(int v[])
{
	static int i = 0, numri = -9999;
	int em;
	cin >> em;
	if (i < em)
	{
		if (numri < v[i])
			numri = v[i];
		i++;
		ElementiMeiMadh(v);
	}
	return numri;
}

void qiftDHEtek(int fillimi, int fundi) {
	if (fillimi > fundi)
		return;
	cout << fillimi;
	qiftDHEtek(fillimi + 2, fundi);
}

void kopjofjalen(char fjala1[], char fjala2[], int ctr)
{
	fjala2[ctr] = fjala1[ctr];
	if (fjala1[ctr] == '\0')
		return;
	kopjofjalen(fjala1, fjala2, ctr + 1);
}

int power(int a, int b) {


	if (b != 0)
		return a * power(a, b - 1);
	else
		return 1;

}

bool ithjeshte(int w, int i)
{
	if (w <= 2)
		return (w == 2) ? true : false;
	if (w % i == 0)
		return false;
	if (i * i > w)
		return true;


	return ithjeshte(w, i + 1);
}
void printFun(int test)
{
	if (test < 1)
		return;
	else
	{
		cout << test << " ";
		printFun(test - 1);    
		cout << test << " ";
		return;
	}
}
void fun2(int n)
{
	if (n <= 0)
		return;
	if (n > LIMIT)
		return;
	cout << n;
	fun2(2 * n);
	cout << n;
}