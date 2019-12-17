#include <iostream>
#include <conio.h>

using namespace std;

void CetakJudul();
void CetakGaris();


//Reporter
int Tambahkan(int X, int Y)
{
	int Z;
	Z = X + Y;
	return Z;
}

//Worker
void Tampilkan(int Input)
{
	cout << "Hasil Penambahan Nilai X dan Y = ";
	cout << Input << endl;
}

int main()
{
	int InputX, InputY, Hasil;
	cout << "Masukkan Nilai X : "; cin >> InputX;
	cout << "Masukkan Nilai Y : "; cin >> InputY;

	CetakJudul();
	Hasil = Tambahkan(InputX, InputY);
	Tampilkan(Hasil); //Menampilkan Hasil Menggunakan void

	_getch();
	return 0;
}

void CetakJudul()
{
	cout << endl;
	CetakGaris(); cout << "Menampilkan Dengan Void" << endl; CetakGaris();
}

void CetakGaris()
{
	for (int i = 0; i <= 25; i++)
	{
		cout << "-";
	}
	cout << endl;
}