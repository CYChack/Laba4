#include"Matrix.h"
#include <cstdlib>
#include"Vector.h"
#include <time.h>
#include <clocale>
#include <malloc.h>
#include <vector>
#include<iostream>
#include <iomanip>
#include"Header.h"
using namespace std;
int main()
{
	cout << "Sozdadim Vector 1" << "\n";
	MyVector<int> A;
	cin >> A;
	cout << "vernem vector 1" << "\n";
	cout << A << "\n";
	int K = 0;
	int arr[] = { 9,2,1,4,5,6,7 };
	int arr2[] = { 2,3,4,5,6,7,8 };
	MyVector<int> B(7, arr);
	MyVector<int> C(7, arr2);
	MyVector<int> D;
	cout << "slozhenie" << "\n";
	D = B + C;
	cout << D << "\n";
	cout << "umnozhenie" << "\n";
	K = B * C;
	cout << K << "\n";
	cout << "vuchitanie" << "\n";
	D = B - C;
	cout << D << "\n";
	cout << "delenie" << "\n";
	D = C / B;
	cout << D << "\n";
	cout << "Sortirovki" << "\n" << "\n";
	cout << "BubbleSort" << "\n";
	int t = clock();
	int arr3[] = { 9,2,3,4,5,6,7 };
	MyVector<int> AH(7, arr3);
	t = AH.BubbleSort();
	cout << "vremya sortirovki=" << t << "\n";
	cout << "otsortirovannie vector" << "\n";
	cout << AH << "\n" << "\n";
	int arr4[] = { 9,2,1,4,5,6,3 };
	MyVector<int> U(7, arr4);
	cout << "QuickSort" << "\n";
	int o = clock();
	o = U.QuickSort(0, B.GetRazmer() - 1);
	cout << "vremya sortirovki=" << o << "\n";
	cout << "otsortirovannie vector" << "\n";
	cout << U << "\n" << "\n";

	int arr5[] = { 9,2,3,2,5,6,4 };
	MyVector<int> E(7, arr5);
	cout << "InsertionSort" << "\n";
	int w = clock();
	w = E.InsertionSort();
	cout << "vremya sortirovki=" << w << "\n";
	cout << "otsortirovannie vector" << "\n";
	cout << E << "\n" << "\n";

	cout << "--------------------" << "\n";
	cout << "Matrica 1" << "\n";
	Matric<int> AB;
	cin >> AB;
	cout << "vvedeniya matrica kvadratnie 1" << AB << "\n";
	cout << "vvedite matricu toy je razmernosti";
	cout << "Matrica 2" << "\n";
	Matric<int> AC;
	cin >> AC;
	cout << "vvedeniya matrica 2" << AB << "\n";
	Matric<int> ABC;

	cout << "slozhenie" << "\n";
	ABC = AB + AC;
	cout << ABC << "\n";
	cout << "umnozhenie" << "\n";
	ABC = AB * AC;
	cout << ABC << "\n";
	cout << "vuchitanie" << "\n";
	ABC = AB - AC;
	cout << ABC << "\n";
	cout << "kolichestvo vhojdeniy ukazannogo znacheniya" << "\n";
	cout << "Vector*Matrica" << "\n";
	int arr6[] = { 1,2,3 };
	MyVector<int> V1(3, arr6);
	Matric<int> V2;
	Matric<int> V3;
	cout << "vvedite razmernosti 1*3" << "\n";
	cin >> V2;
	V3 = V1 * V2;
	cout << V3 << "\n";
	cout << "Matrix*Vector" << "\n";
	Matric<int> VV;
	cout << "vvedite razmernost' 3*3" << "\n";
	cin >> VV;
	int arr7[] = { 9,2,1 };
	MyVector<int> IO(3, arr7);
	MyVector<int> I;
	I = VV * IO;
	cout << I << "\n";
	int uu;
	uu = E.Poisk(3);
	cout << uu << "\n";

	int rr;
	rr = AB.Poiskk(2);
	cout << rr << "\n";
	int l, p = 0;
	cin >> l;
	if (l == arr[] || l == arr2[] || l == arr3[] || l == arr4[] || l == arr5[] || l == arr6[] || l == arr7[])
		p = p + 1;
	else
		p = p + 0;//доп. задание 2ая неделя
	return 0;
}