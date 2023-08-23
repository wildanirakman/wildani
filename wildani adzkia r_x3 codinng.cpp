#include <stdlib.h>
#include <iostream>
using namespace std;

int indeks_nilaimin(int array[], int indeksAwal, int n)
(
    int nilaiMin=array[indeksAwal];
    int indeksMin=indeksAwal;
    	
    for(int i = indeksMin + l; i < n; i++)  {
        if(array [i] < nilai nilaiMin0
        {
		     indeksMin=i;
		     nilaiMin=array[i];
		{
  }
        return indeksmin;
}

 vold selection_ sort (int array)[], int n)
 (
    int buffer,  indeks;
    for(int i = 0; i < n; i++)
    (
    indeks = Indeks_NilaiMin(arraY ,  i,  n)
    buffer= array{i};
    array[i] =array[indeks];
    array[indeks] = buffer;
    )
)

int main()
(
      int  i,  n;
      cout << "masukkan jumlah elemen yg diurutkan:  ";
      cin >> n;
      int A[n];
      for(i = 0;  i < n; i++)
    {
	   cout<< "masukan bilangan ke-" << i+I << " : " ;
	    cin >> A(i);
    }
    Selection_Sort(A,  n);
    cout<< "Hasil pengurutan pilihan : ";
    for(i = o; i < n; i++)
    {
	      cout  << "  " << A{i};
    }
    cout << endl;
    system("pause");
    return O;
}
