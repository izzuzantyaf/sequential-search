#include <iostream>

using namespace std;

// deklarasi fungsi pencarian dengan algoritma sequential search
int sequentialSearch(int cari, int data[], int n) {

	// deklarasi variabel
	int indexKetemu;

	// ALGORITMA SEQUENTIAL SEARCH
	for (int i = 0; i < n; i++)
	{
		// jika nilai yang dicari ketemu
		if (cari==data[i])
		{
			// simpan indeks data yang ditemukan ke dalam variabel indexKetemu
			indexKetemu = i;
			break;
		}
	}
	// akhir dari ALGORITMA SEQUENTIAL SEARCH

	return indexKetemu;
}

int main()
{
	// deklarasi array dan variabel
	int n,
		cari,
		hasil,
		data[20];

	// input banyaknya data dari user
	cout << "Masukkan jumlah data yang anda inginkan : "; cin >> n;

	// mendefinisikan jumlah elemen data[] sesuai yang user inputkan
	data[n];

	// input nilai-nilai data dari user
	cout << endl << "Masukkan data-data anda" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Data ke-" << i + 1 << ": "; cin >> data[i];
	}

	// input nilai yang ingin dicari
	cout << endl << "Data yang anda cari : "; cin >> cari;

	// melakukan pencarian dengan algoritma sequential search
	hasil = sequentialSearch(cari, data, n);

	// jika yang dicari ada
	if (hasil != 0)
	{
		// tampilkan data yang dicari pada indeks ke berapa
		cout << cari << " ditemukan pada data ke-" << hasil + 1 << endl;
	}
	else {
		// jika tidak ketemu tampilkan pesan ini
		cout << "Data tidak ditemukan" << endl;
	}

	return 0;
}