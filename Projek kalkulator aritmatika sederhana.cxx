// pustaka terminal basis string
#include <iostream>
#include <sstream>
#include <string>
#include <limits>

// pustaka matematika untuk kalkulator
#include <cmath>

// pustaka fitur tambahan dan bersihkan  terminal
#include <cstdlib>
#include <iomanip>

using namespace std;

// Validasi input bilangan desimal
bool bacaDouble(double &angka)
{
	string input;
	getline(cin, input);

	stringstream ss(input);
	ss >> ws;

	if (!(ss >> angka))
		return false;

	ss >> ws;

	return ss.eof();
}

// Validasi input bilangan bulat
bool bacaInt(int &angka)
{
	string input;
	getline(cin, input);

	stringstream ss(input);
	ss >> ws;

	if (!(ss >> angka))
		return false;

	ss >> ws;

	return ss.eof();
}

// Validasi pilihan perhitungan ulang
bool tanyaUlang(string operasi)
{
	string jawaban;

	while (true)
	{
		cout << "\nIngin melakukan " << operasi << " lagi? (y/n): ";
		getline(cin, jawaban);

		if (jawaban == "y" || jawaban == "Y")
			return true;

		if (jawaban == "n" || jawaban == "N")
			return false;

		cout << "Input tidak valid! Masukkan y atau n.\n";
	}
}

// Validasi Faktor Persekutuan Terbesar (FPB) untuk pecahan
long long cariFPB(long long a, long long b)
{
	if (a < 0)
		a = -a;

	while (b != 0)
	{
		long long sisa = a % b;
		a = b;
		b = sisa;
	}

	return a;
}

// Sistem main kalkulator
int main()
{
	// Variabel default
	int pilihan;
	int angka1, angka2;
	double bilangan1, bilangan2, hasil;
	int angkaModulus1, angkaModulus2;

	// Variabel menu pangkat
	int pilihanPangkat;
	double akar, indeks;
	char ulang;

	// Variabel menu konversi
	int pilihanKonversi;
	double angka, pembilang, penyebut;
	int pembagi;

	// Variabel menu trigonometri
	int pilihanTrigonometri;
	double sudut, radian;

	// Variabel menu logaritma
	int pilihanLogaritma;
	double bilanganLog, basisLog;

	// Variabel menu faktorial
	int pilihanPersen;
	int bilanganFaktorial;
	double angkaPersen, persen, hasilPersen;
	double angkaAbsolut, angkaKebalikan;
	double hasilFaktorial;

	// Variabel menu konstanta
	int pilihanKonstanta;

	// Variabel menu tambahan
	int pilihanTambahan;
	int pilihanPembulatan;
	double angkaMinMax1, angkaMinMax2;
	double angkaPembulatan;
	int pilihanPresisi;
	int jumlahDesimal = 2;
	cout << fixed << setprecision(jumlahDesimal);

	while (true)
	{
		// Menu utama
		cout << "\n====================================\n";
		cout << "KALKULATOR ARITMATIKA SEDERHANA\n";
		cout << "====================================\n";
		cout << "\nSelamat datang di kalkulator aritmatika sederhana!!!\n";
		cout << "Ini adalah projek kelompok 7 yang dibuat untuk memenuhi tugas pemrograman dasar\n";
		cout << "Untuk informasi lebih lanjut, ketik 100 lalu tekan enter untuk mengetahui tentang kelompok kami!\n";
		cout << "====================================\n";
		cout << "\n1. Penjumlahan       (+)\n";
		cout << "2. Pengurangan       (-)\n";
		cout << "3. Perkalian         (*)\n";
		cout << "4. Pembagian         (/)\n";
		cout << "5. Modulus           (%)\n";
		cout << "6. Menu Pangkat dan Akar\n";
		cout << "7. Menu konversi bilangan\n";
		cout << "8. Menu trigonometri\n";
		cout << "9. Menu logaritma\n";
		cout << "10. Menu persentase dan faktorial\n";
		cout << "11. Menu konstanta matematika\n";
		cout << "12. Menu Fitur Tambahan\n";

		// Tambahkan pilihan fitur lainnya disini! tepat setelah angka diatas dan sebelum "nantikan fitur baru mendatang"

		cout << " \n-->Nantikan fitur baru mendatang<--\n";
		cout << "\n99. Bersihkan Terminal\n";
		cout << "100. Tentang kami\n";
		cout << "0. Keluar\n";
		cout << "====================================\n";
		cout << " \n";


		// Pilihan menu
		while (true)
		{
			cout << "Pilih menu (0-100): ";

			if (!(cin >> pilihan))
			{
				cout << "Input tidak valid! Masukkan angka saja\n";

				cin.clear();
				cin.ignore(1000, '\n');
				continue;
			}

			if ((pilihan >= 0 && pilihan <= 12) ||
				(pilihan >= 99 && pilihan <= 100))
			{
				break;
			}

			cout << "Pilihan masih belum tersedia, coba masukkan angka lain yang ada di daftar pilihan\n";
		}


		// Penjumlahan
		if (pilihan == 1)
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			do
			{
				cout << "\n=== PENJUMLAHAN ===\n";

				while (true)
				{
					cout << "Masukkan angka pertama: ";

					if (bacaDouble(bilangan1))
						break;

					cout << "Input tidak valid! Masukkan angka saja.\n";
				}

				while (true)
				{
					cout << "Masukkan angka kedua: ";

					if (bacaDouble(bilangan2))
						break;

					cout << "Input tidak valid! Masukkan angka saja.\n";
				}

				hasil = bilangan1 + bilangan2;

				cout << "Hasil penjumlahan: " << hasil << endl;

			} while (tanyaUlang("penjumlahan"));

			cout << "\nKembali ke menu utama...\n";
		}


		// Pengurangan
		else if (pilihan == 2)
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			do
			{
				cout << "\n=== PENGURANGAN ===\n";

				while (true)
				{
					cout << "Masukkan angka pertama: ";

					if (bacaDouble(bilangan1))
						break;

					cout << "Input tidak valid! Masukkan angka saja.\n";
				}

				while (true)
				{
					cout << "Masukkan angka kedua: ";

					if (bacaDouble(bilangan2))
						break;

					cout << "Input tidak valid! Masukkan angka saja.\n";
				}

				hasil = bilangan1 - bilangan2;

				cout << "Hasil pengurangan: " << hasil << endl;

			} while (tanyaUlang("pengurangan"));

			cout << "\nKembali ke menu utama...\n";
		}


		// Perkalian
		else if (pilihan == 3)
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			do
			{
				cout << "\n=== PERKALIAN ===\n";

				while (true)
				{
					cout << "Masukkan angka pertama: ";

					if (bacaDouble(bilangan1))
						break;

					cout << "Input tidak valid! Masukkan angka saja.\n";
				}

				while (true)
				{
					cout << "Masukkan angka kedua: ";

					if (bacaDouble(bilangan2))
						break;

					cout << "Input tidak valid! Masukkan angka saja.\n";
				}

				hasil = bilangan1 * bilangan2;

				cout << "Hasil perkalian: " << hasil << endl;

			} while (tanyaUlang("perkalian"));

			cout << "\nKembali ke menu utama...\n";
		}


		// Pembagian
		else if (pilihan == 4)
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			do
			{
				cout << "\n=== PEMBAGIAN ===\n";

				while (true)
				{
					cout << "Masukkan angka pertama: ";

					if (bacaDouble(bilangan1))
						break;

					cout << "Input tidak valid! Masukkan angka saja.\n";
				}

				while (true)
				{
					cout << "Masukkan angka kedua: ";

					if (bacaDouble(bilangan2))
						break;

					cout << "Input tidak valid! Masukkan angka saja.\n";
				}

				if (bilangan2 == 0)
				{
					cout << "Error! Tidak bisa membagi dengan nol.\n";
				}
				else
				{
					hasil = bilangan1 / bilangan2;

					cout << "Hasil pembagian: " << hasil << endl;
				}

			} while (tanyaUlang("pembagian"));

			cout << "\nKembali ke menu utama...\n";
		}


		// Pembagian sisa (modulus)
		else if (pilihan == 5)
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			do
			{
				cout << "\n=== MODULUS ===\n";

				while (true)
				{
					cout << "Masukkan angka pertama: ";

					if (bacaInt(angkaModulus1))
						break;

					cout << "Input tidak valid! Masukkan bilangan bulat.\n";
				}

				while (true)
				{
					cout << "Masukkan angka kedua: ";

					if (bacaInt(angkaModulus2))
						break;

					cout << "Input tidak valid! Masukkan bilangan bulat.\n";
				}

				if (angkaModulus2 == 0)
				{
					cout << "Error! Modulus dengan nol tidak diperbolehkan.\n";
				}
				else if (angkaModulus1 == numeric_limits<int>::min() &&
						 angkaModulus2 == -1)
				{
					cout << "Error! Hasil modulus tidak dapat direpresentasikan.\n";
				}
				else
				{
					hasil = angkaModulus1 % angkaModulus2;

					cout << "Hasil modulus: " << hasil << endl;
				}

			} while (tanyaUlang("modulus"));

			cout << "\nKembali ke menu utama...\n";
		}
		
		

		// Menu pangkat dan akar
		else if (pilihan == 6)
		{
			// Untuk membersihkan sisa input agar tak mengganggu proses input berikutnya
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			do
			{
				// Submenu pangkat dan akar
				cout << "\n====================================\n";
				cout << "PANGKAT DAN AKAR\n";
				cout << "====================================\n";
				cout << "\n1. Pangkat\n";
				cout << "2. Kuadrat\n";
				cout << "3. Akar Kuadrat\n";
				cout << "4. Akar Pangkat Tiga\n";
				cout << "5. Akar Pangkat N\n";
				cout << "0. Kembali ke Menu Utama\n";
				cout << "====================================\n";

				// Pilihan submenu
				while (true)
				{
					cout << "Pilih menu (0-5): ";

					if (bacaInt(pilihanPangkat))
					{
						if (pilihanPangkat >= 0 && pilihanPangkat <= 5)
							break;
					}

					cout << "Input tidak valid! Masukkan pilihan 0-5.\n";
				}

				// Kembali ke menu utama
				if (pilihanPangkat == 0)
				{
					cout << "\nKembali ke menu utama...\n";
					break;
				}


				// Pangkat
				else if (pilihanPangkat == 1)
				{
					while (true)
					{
						cout << "Masukkan bilangan pokok: ";

						if (bacaDouble(bilangan1))
							break;

						cout << "Input tidak valid! Masukkan angka saja.\n";
					}

					while (true)
					{
						cout << "Masukkan nilai pangkat: ";

						if (bacaDouble(bilangan2))
							break;

						cout << "Input tidak valid! Masukkan angka saja.\n";
					}

					hasil = pow(bilangan1, bilangan2);

					cout << "Hasil pangkat: " << hasil << endl;
				}


				// Kuadrat
				else if (pilihanPangkat == 2)
				{
					while (true)
					{
						cout << "Masukkan bilangan: ";

						if (bacaDouble(bilangan1))
							break;

						cout << "Input tidak valid! Masukkan angka saja.\n";
					}

					hasil = pow(bilangan1, 2);

					cout << "Hasil kuadrat: " << hasil << endl;
				}


				// Akar kuadrat
				else if (pilihanPangkat == 3)
				{
					while (true)
					{
						cout << "Masukkan bilangan: ";

						if (bacaDouble(akar))
							break;

						cout << "Input tidak valid! Masukkan angka saja.\n";
					}

					if (akar >= 0)
					{
						hasil = sqrt(akar);

						cout << "Hasil akar kuadrat: " << hasil << endl;
					}
					else
					{
						cout << "Error! Bilangan tidak boleh negatif.\n";
					}
				}


				// Akar pangkat tiga
				else if (pilihanPangkat == 4)
				{
					while (true)
					{
						cout << "Masukkan bilangan: ";

						if (bacaDouble(akar))
							break;

						cout << "Input tidak valid! Masukkan angka saja.\n";
					}

					hasil = cbrt(akar);

					cout << "Hasil akar pangkat tiga: " << hasil << endl;
				}


				// Akar pangkat N
				else if (pilihanPangkat == 5)
				{
					while (true)
					{
						cout << "Masukkan bilangan: ";

						if (bacaDouble(akar))
							break;

						cout << "Input tidak valid! Masukkan angka saja.\n";
					}

					while (true)
					{
						cout << "Masukkan indeks akar: ";

						if (bacaDouble(indeks))
							break;

						cout << "Input tidak valid! Masukkan angka saja.\n";
					}

					if (indeks > 0)
					{
						if (akar >= 0)
						{
							hasil = pow(akar, 1.0 / indeks);

							cout << "Hasil akar pangkat N: "
								 << hasil << endl;
						}
						else if (indeks == floor(indeks) &&
								 fmod(indeks, 2.0) == 0)
						{
							cout << "Error! Akar genap dari bilangan negatif "
								 << "tidak menghasilkan bilangan real.\n";
						}
						else if (indeks == floor(indeks))
						{
							hasil = -pow(-akar, 1.0 / indeks);

							cout << "Hasil akar pangkat N: "
								 << hasil << endl;
						}
						else
						{
							cout << "Error! Indeks harus berupa bilangan bulat "
								 << "untuk akar bilangan negatif.\n";
						}
					}
					else
					{
						cout << "Error! Indeks akar harus lebih dari nol.\n";
					}
				}

			} while (tanyaUlang("operasi pangkat dan akar"));

			cout << "\nKembali ke menu utama...\n";
		}



		// Menu konversi bilangan
		else if (pilihan == 7)
		{
			// Untuk membersihkan sisa input agar tak mengganggu proses input berikutnya
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			do
			{
				// Sub menu konversi bilangan
				cout << "\n====================================\n";
				cout << "KONVERSI BILANGAN\n";
				cout << "Tips: untuk bilangan desimal, gunakan tanda .\n";
				cout << "====================================\n";
				cout << "\n1. Pecahan ke Desimal\n";
				cout << "2. Desimal ke Pecahan\n";
				cout << "3. Desimal ke Persen\n";
				cout << "4. Persen ke Desimal\n";
				cout << "5. Pecahan ke Persen\n";
				cout << "6. Persen ke Pecahan\n";
				cout << "0. Kembali ke Menu Utama\n";
				cout << "====================================\n";

				// Pilihan submenu
				while (true)
				{
					cout << "Pilih menu (0-6): ";

					if (bacaInt(pilihanKonversi))
					{
						if (pilihanKonversi >= 0 &&
							pilihanKonversi <= 6)
							break;
					}

					cout << "Input tidak valid! Masukkan pilihan 0-6.\n";
				}

				// Kembali ke menu utama
				if (pilihanKonversi == 0)
				{
					cout << "\nKembali ke menu utama...\n";
					break;
				}


				// Pecahan ke desimal
				else if (pilihanKonversi == 1)
				{
					while (true)
					{
						cout << "Masukkan pembilang: ";

						if (bacaDouble(pembilang))
							break;

						cout << "Input tidak valid! Masukkan angka saja.\n";
					}

					while (true)
					{
						cout << "Masukkan penyebut: ";

						if (bacaDouble(penyebut))
							break;

						cout << "Input tidak valid! Masukkan angka saja.\n";
					}

					if (penyebut != 0)
					{
						hasil = pembilang / penyebut;

						cout << "Hasil desimal: " << hasil << endl;
					}
					else
					{
						cout << "Error! Penyebut tidak boleh nol.\n";
					}
				}


				// Desimal ke pecahan
				else if (pilihanKonversi == 2)
				{
					while (true)
					{
						cout << "Masukkan bilangan desimal: ";

						if (bacaDouble(angka))
							break;

						cout << "Input tidak valid! Masukkan angka saja.\n";
					}

					if (!isfinite(angka) || fabs(angka) > 9.0e14)
					{
						cout << "Error! Angka terlalu besar untuk dikonversi.\n";
					}
					else
					{
						long long pembilangBulat =
							llround(angka * 10000);

						long long penyebutBulat = 10000;

						pembagi = cariFPB(
							pembilangBulat, penyebutBulat);

						pembilangBulat /= pembagi;
						penyebutBulat /= pembagi;

						cout << "Hasil pecahan: "
							 << pembilangBulat << "/"
							 << penyebutBulat << endl;
					}
				}


				// Desimal ke persen
				else if (pilihanKonversi == 3)
				{
					while (true)
					{
						cout << "Masukkan bilangan desimal: ";

						if (bacaDouble(angka))
							break;

						cout << "Input tidak valid! Masukkan angka saja.\n";
					}

					hasil = angka * 100;

					cout << "Hasil persen: " << hasil << "%\n";
				}


				// Persen ke desimal
				else if (pilihanKonversi == 4)
				{
					while (true)
					{
						cout << "Masukkan nilai persen: ";

						if (bacaDouble(angka))
							break;

						cout << "Input tidak valid! Masukkan angka saja.\n";
					}

					hasil = angka / 100;

					cout << "Hasil desimal: " << hasil << endl;
				}


				// Pecahan ke persen
				else if (pilihanKonversi == 5)
				{
					while (true)
					{
						cout << "Masukkan pembilang: ";

						if (bacaDouble(pembilang))
							break;

						cout << "Input tidak valid! Masukkan angka saja.\n";
					}

					while (true)
					{
						cout << "Masukkan penyebut: ";

						if (bacaDouble(penyebut))
							break;

						cout << "Input tidak valid! Masukkan angka saja.\n";
					}

					if (penyebut != 0)
					{
						hasil = (pembilang / penyebut) * 100;

						cout << "Hasil persen: " << hasil << "%\n";
					}
					else
					{
						cout << "Error! Penyebut tidak boleh nol.\n";
					}
				}
				

				// Persen ke pecahan
				else if (pilihanKonversi == 6)
				{
					while (true)
					{
						cout << "Masukkan nilai persen: ";

						if (bacaDouble(angka))
							break;

						cout << "Input tidak valid! Masukkan angka saja.\n";
					}

					if (!isfinite(angka) || fabs(angka) > 9.0e14)
					{
						cout << "Error! Angka terlalu besar untuk dikonversi.\n";
					}
					else
					{
						long long pembilangBulat =
							llround(angka * 100);

						long long penyebutBulat = 10000;

						pembagi = cariFPB(
							pembilangBulat, penyebutBulat);

						pembilangBulat /= pembagi;
						penyebutBulat /= pembagi;

						cout << "Hasil pecahan: "
							 << pembilangBulat << "/"
							 << penyebutBulat << endl;
					}
				}

			} while (tanyaUlang("operasi konversi"));

			cout << "\nKembali ke menu utama...\n";
		}



		// Menu trigonometri
		else if (pilihan == 8)
		{
			// Untuk membersihkan sisa input agar tak mengganggu proses input berikutnya
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			do
			{
				// Sub menu trigonometri
				cout << "\n================================\n";
				cout << "TRIGONOMETRI\n";
				cout << "================================\n";
				cout << "\n1. Sinus (sin)\n";
				cout << "2. Cosinus (cos)\n";
				cout << "3. Tangen (tan)\n";
				cout << "4. Arcus Sinus (asin)\n";
				cout << "5. Arcus Cosinus (acos)\n";
				cout << "6. Arcus Tangen (atan)\n";
				cout << "7. Cosecan (csc)\n";
				cout << "8. Secan (sec)\n";
				cout << "9. Cotangen (cot)\n";
				cout << "0. Kembali ke Menu Utama\n";
				cout << "================================\n";

				// Pilihan submenu
				while (true)
				{
					cout << "Pilih fungsi (0-9): ";

					if (bacaInt(pilihanTrigonometri))
					{
						if (pilihanTrigonometri >= 0 &&
							pilihanTrigonometri <= 9)
							break;
					}

					cout << "Input tidak valid! Masukkan pilihan 0-9.\n";
				}

				// Kembali ke menu utama
				if (pilihanTrigonometri == 0)
				{
					cout << "\nKembali ke menu utama...\n";
					break;
				}


				// Sin Cos Tan
				else if (pilihanTrigonometri >= 1 &&
						 pilihanTrigonometri <= 3)
				{
					while (true)
					{
						cout << "Masukkan sudut (derajat): ";

						if (bacaDouble(sudut) && isfinite(sudut))
							break;

						cout << "Input tidak valid! Masukkan angka yang benar.\n";
					}

					radian = sudut * acos(-1.0) / 180.0;

					// Sinus
					if (pilihanTrigonometri == 1)
					{
						hasil = sin(radian);

						cout << "Hasil sin: " << hasil << endl;
					}

					// Cosinus
					else if (pilihanTrigonometri == 2)
					{
						hasil = cos(radian);

						cout << "Hasil cos: " << hasil << endl;
					}

					// Tangen
					else if (pilihanTrigonometri == 3)
					{
						if (fabs(cos(radian)) > 1e-10)
						{
							hasil = tan(radian);

							cout << "Hasil tan: " << hasil << endl;
						}
						else
						{
							cout << "Error! Tan tidak terdefinisi.\n";
						}
					}
				}
				

				// Asin Acos Atan
				else if (pilihanTrigonometri >= 4 &&
						 pilihanTrigonometri <= 6)
				{
					while (true)
					{
						cout << "Masukkan nilai: ";

						if (bacaDouble(bilangan1) && isfinite(bilangan1))
							break;

						cout << "Input tidak valid! Masukkan angka yang benar.\n";
					}

					// Arcus sinus
					if (pilihanTrigonometri == 4)
					{
						if (bilangan1 >= -1 && bilangan1 <= 1)
						{
							hasil = asin(bilangan1) * 180.0 / acos(-1.0);

							cout << "Hasil asin: "
								 << hasil << " derajat\n";
						}
						else
						{
							cout << "Error! Nilai asin harus antara -1 sampai 1.\n";
						}
					}

					// Arcus cosinus
					else if (pilihanTrigonometri == 5)
					{
						if (bilangan1 >= -1 && bilangan1 <= 1)
						{
							hasil = acos(bilangan1) * 180.0 / acos(-1.0);

							cout << "Hasil acos: "
								 << hasil << " derajat\n";
						}
						else
						{
							cout << "Error! Nilai acos harus antara -1 sampai 1.\n";
						}
					}

					// Arcus tangen
					else if (pilihanTrigonometri == 6)
					{
						hasil = atan(bilangan1) * 180.0 / acos(-1.0);

						cout << "Hasil atan: "
							 << hasil << " derajat\n";
					}
				}


				// Csc Sec Cot
				else if (pilihanTrigonometri >= 7 &&
						 pilihanTrigonometri <= 9)
				{
					while (true)
					{
						cout << "Masukkan sudut (derajat): ";

						if (bacaDouble(sudut) && isfinite(sudut))
							break;

						cout << "Input tidak valid! Masukkan angka yang benar.\n";
					}

					radian = sudut * acos(-1.0) / 180.0;

					// Cosecan
					if (pilihanTrigonometri == 7)
					{
						if (fabs(sin(radian)) > 1e-10)
						{
							hasil = 1.0 / sin(radian);

							cout << "Hasil csc: " << hasil << endl;
						}
						else
						{
							cout << "Error! Csc tidak terdefinisi.\n";
						}
					}

					// Secan
					else if (pilihanTrigonometri == 8)
					{
						if (fabs(cos(radian)) > 1e-10)
						{
							hasil = 1.0 / cos(radian);

							cout << "Hasil sec: " << hasil << endl;
						}
						else
						{
							cout << "Error! Sec tidak terdefinisi.\n";
						}
					}

					// Cotangen
					else if (pilihanTrigonometri == 9)
					{
						if (fabs(sin(radian)) > 1e-10)
						{
							hasil = cos(radian) / sin(radian);

							cout << "Hasil cot: " << hasil << endl;
						}
						else
						{
							cout << "Error! Cot tidak terdefinisi.\n";
						}
					}
				}

			} while (tanyaUlang("operasi trigonometri"));

			cout << "\nKembali ke menu utama...\n";
		}



		// Menu logaritma
		else if (pilihan == 9)
		{
			// Untuk membersihkan sisa input agar tak mengganggu proses input berikutnya
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			do
			{
				// Sub menu logaritma
				cout << "\n====================================\n";
				cout << "LOGARITMA\n";
				cout << "====================================\n";
				cout << "\n1. Logaritma Natural (ln)\n";
				cout << "2. Logaritma Basis 10 (log)\n";
				cout << "3. Logaritma Basis 2\n";
				cout << "4. Logaritma Basis Bebas\n";
				cout << "0. Kembali ke Menu Utama\n";
				cout << "====================================\n";

				// Pilihan submenu
				while (true)
				{
					cout << "Pilih menu (0-4): ";

					if (bacaInt(pilihanLogaritma))
					{
						if (pilihanLogaritma >= 0 &&
							pilihanLogaritma <= 4)
							break;
					}

					cout << "Input tidak valid! Masukkan pilihan 0-4.\n";
				}

				// Kembali ke menu utama
				if (pilihanLogaritma == 0)
				{
					cout << "\nKembali ke menu utama...\n";
					break;
				}


				// Logaritma natural (N)
				else if (pilihanLogaritma == 1)
				{
					while (true)
					{
						cout << "Masukkan bilangan: ";

						if (bacaDouble(bilanganLog) &&
							isfinite(bilanganLog))
							break;

						cout << "Input tidak valid! Masukkan angka yang benar.\n";
					}

					if (bilanganLog > 0)
					{
						hasil = log(bilanganLog);

						cout << "Hasil ln: " << hasil << endl;
					}
					else
					{
						cout << "Error! Bilangan harus lebih dari nol.\n";
					}
				}


				// Logaritma basis 10
				else if (pilihanLogaritma == 2)
				{
					while (true)
					{
						cout << "Masukkan bilangan: ";

						if (bacaDouble(bilanganLog) &&
							isfinite(bilanganLog))
							break;

						cout << "Input tidak valid! Masukkan angka yang benar.\n";
					}

					if (bilanganLog > 0)
					{
						hasil = log10(bilanganLog);

						cout << "Hasil log: " << hasil << endl;
					}
					else
					{
						cout << "Error! Bilangan harus lebih dari nol.\n";
					}
				}


				// Logaritma basis 2
				else if (pilihanLogaritma == 3)
				{
					while (true)
					{
						cout << "Masukkan bilangan: ";

						if (bacaDouble(bilanganLog) &&
							isfinite(bilanganLog))
							break;

						cout << "Input tidak valid! Masukkan angka yang benar.\n";
					}

					if (bilanganLog > 0)
					{
						hasil = log2(bilanganLog);

						cout << "Hasil log basis 2: " << hasil << endl;
					}
					else
					{
						cout << "Error! Bilangan harus lebih dari nol.\n";
					}
				}


				// Logaritma basis bebas
				else if (pilihanLogaritma == 4)
				{
					while (true)
					{
						cout << "Masukkan bilangan: ";

						if (bacaDouble(bilanganLog) &&
							isfinite(bilanganLog))
							break;

						cout << "Input tidak valid! Masukkan angka yang benar.\n";
					}

					while (true)
					{
						cout << "Masukkan basis: ";

						if (bacaDouble(basisLog) &&
							isfinite(basisLog))
							break;

						cout << "Input tidak valid! Masukkan angka yang benar.\n";
					}

					if (bilanganLog > 0 &&
						basisLog > 0 &&
						basisLog != 1)
					{
						hasil = log(bilanganLog) / log(basisLog);

						cout << "Hasil log basis bebas: "
							 << hasil << endl;
					}
					else
					{
						cout << "Error! Bilangan harus positif dan "
							 << "basis harus positif serta tidak sama dengan 1.\n";
					}
				}

			} while (tanyaUlang("operasi logaritma"));

			cout << "\nKembali ke menu utama...\n";
		}

		// Menu persentase dan faktorial
		else if (pilihan == 10)
		{
			// Untuk membersihkan sisa input agar tak mengganggu proses input berikutnya
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			do
			{
				// Sub menu persentase dan faktorial
				cout << "\n====================================\n";
				cout << "PERSENTASE DAN FAKTORIAL\n";
				cout << "====================================\n";
				cout << "\n1. Menghitung Persentase\n";
				cout << "2. Penambahan Persentase\n";
				cout << "3. Pengurangan Persentase\n";
				cout << "4. Faktorial\n";
				cout << "5. Nilai Absolut\n";
				cout << "6. Kebalikan Bilangan (Reciprocal)\n";
				cout << "0. Kembali ke Menu Utama\n";

				// Pilihan submenu
				while (true)
				{
					cout << "Pilih operasi: ";

					if (!bacaInt(pilihanPersen))
					{
						cout << "Input tidak valid! Masukkan angka saja.\n";
						continue;
					}

					if (pilihanPersen >= 0 && pilihanPersen <= 6)
						break;

					cout << "Pilihan tidak tersedia! Pilih angka 0 sampai 6.\n";
				}

				// Kembali ke menu utama
				if (pilihanPersen == 0)
				{
					cout << "Kembali ke menu utama...\n";
					break;
				}


				// Menghitung persentase
				else if (pilihanPersen == 1)
				{
					while (true)
					{
						cout << "Masukkan bilangan: ";

						if (bacaDouble(angkaPersen) && isfinite(angkaPersen))
							break;

						cout << "Input tidak valid! Masukkan bilangan kembali.\n";
					}

					while (true)
					{
						cout << "Masukkan persentase: ";

						if (bacaDouble(persen) && isfinite(persen))
							break;

						cout << "Input tidak valid! Masukkan persentase kembali.\n";
					}

					hasilPersen = angkaPersen * persen / 100.0;

					if (!isfinite(hasilPersen))
						cout << "Hasil terlalu besar untuk dihitung!\n";
					else
						cout << "Hasil: " << hasilPersen << endl;
				}


				// Penambahan persentase
				else if (pilihanPersen == 2)
				{
					while (true)
					{
						cout << "Masukkan bilangan awal: ";

						if (bacaDouble(angkaPersen) && isfinite(angkaPersen))
							break;

						cout << "Input tidak valid! Masukkan bilangan kembali.\n";
					}

					while (true)
					{
						cout << "Masukkan persentase kenaikan: ";

						if (bacaDouble(persen) && isfinite(persen))
							break;

						cout << "Input tidak valid! Masukkan persentase kembali.\n";
					}

					hasilPersen = angkaPersen + (angkaPersen * persen / 100.0);

					if (!isfinite(hasilPersen))
						cout << "Hasil terlalu besar untuk dihitung!\n";
					else
						cout << "Hasil setelah kenaikan: " << hasilPersen << endl;
				}


				// Pengurangan persentase
				else if (pilihanPersen == 3)
				{
					while (true)
					{
						cout << "Masukkan bilangan awal: ";

						if (bacaDouble(angkaPersen) && isfinite(angkaPersen))
							break;

						cout << "Input tidak valid! Masukkan bilangan kembali.\n";
					}

					while (true)
					{
						cout << "Masukkan persentase penurunan: ";

						if (bacaDouble(persen) && isfinite(persen))
							break;

						cout << "Input tidak valid! Masukkan persentase kembali.\n";
					}

					hasilPersen = angkaPersen - (angkaPersen * persen / 100.0);

					if (!isfinite(hasilPersen))
						cout << "Hasil terlalu besar untuk dihitung!\n";
					else
						cout << "Hasil setelah penurunan: " << hasilPersen << endl;
				}


				// Faktorial
				else if (pilihanPersen == 4)
				{
					while (true)
					{
						cout << "Masukkan bilangan bulat nonnegatif: ";

						if (bacaInt(bilanganFaktorial))
							break;

						cout << "Input tidak valid! Masukkan bilangan bulat kembali.\n";
					}

					if (bilanganFaktorial < 0 || bilanganFaktorial > 170)
					{
						cout << "Bilangan harus berada di antara 0 sampai 170!\n";
					}
					else
					{
						hasilFaktorial = 1;

						for (int i = 1; i <= bilanganFaktorial; i++)
						{
							hasilFaktorial *= i;
						}

						cout << bilanganFaktorial << "! = "
							 << hasilFaktorial << endl;
					}
				}


				// Nilai absolut
				else if (pilihanPersen == 5)
				{
					while (true)
					{
						cout << "Masukkan bilangan: ";

						if (bacaDouble(angkaAbsolut) && isfinite(angkaAbsolut))
							break;

						cout << "Input tidak valid! Masukkan bilangan kembali.\n";
					}

					cout << "Nilai absolut: " << fabs(angkaAbsolut) << endl;
				}


				// Kebalikan bilangan
				else if (pilihanPersen == 6)
				{
					while (true)
					{
						cout << "Masukkan bilangan: ";

						if (bacaDouble(angkaKebalikan) && isfinite(angkaKebalikan))
							break;

						cout << "Input tidak valid! Masukkan bilangan kembali.\n";
					}

					if (angkaKebalikan == 0)
					{
						cout << "Bilangan nol tidak memiliki nilai kebalikan!\n";
					}
					else
					{
						double hasilKebalikan = 1.0 / angkaKebalikan;

						if (!isfinite(hasilKebalikan))
							cout << "Hasil terlalu besar untuk dihitung!\n";
						else
							cout << "Nilai kebalikan: " << hasilKebalikan << endl;
					}
				}

			} while (tanyaUlang("operasi persentase dan faktorial"));

			cout << "Kembali ke menu utama...\n";
		}


		// Menu konstanta
		else if (pilihan == 11)
		{
			// Untuk membersihkan sisa input agar tak mengganggu proses input berikutnya
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			do
			{
				// Sub menu konstanta
				cout << "\n====================================\n";
				cout << "KONSTANTA\n";
				cout << "====================================\n";
				cout << "\n1. Pi (π)\n";
				cout << "2. Euler (e)\n";
				cout << "3. Rasio Emas (Phi) (φ)\n";
				cout << "0. Kembali ke Menu Utama\n";

				// Pilihan submenu
				while (true)
				{
					cout << "Pilih konstanta: ";

					if (!bacaInt(pilihanKonstanta))
					{
						cout << "Input tidak valid! Masukkan angka saja.\n";
						continue;
					}

					if (pilihanKonstanta >= 0 && pilihanKonstanta <= 3)
						break;

					cout << "Pilihan tidak tersedia! Pilih angka 0 sampai 3.\n";
				}

				// Kembali ke menu utama
				if (pilihanKonstanta == 0)
				{
					cout << "Kembali ke menu utama...\n";
					break;
				}
				

				// Pi (π)
				else if (pilihanKonstanta == 1)
				{
					cout << "Nilai Pi (π): " << acos(-1.0) << endl;
				}


				// Euler (e)
				else if (pilihanKonstanta == 2)
				{
					cout << "Nilai Euler (e): " << exp(1.0) << endl;
				}


				// Rasio Emas (Phi) (φ)
				else if (pilihanKonstanta == 3)
				{
					cout << "Nilai Rasio Emas (φ): "
						 << (1.0 + sqrt(5.0)) / 2.0 << endl;
				}

			} while (tanyaUlang("melihat konstanta matematika"));

			cout << "Kembali ke menu utama...\n";
		}
		


		// Menu fitur tambahan
		else if (pilihan == 12)
		{
			// Untuk membersihkan sisa input agar tak mengganggu proses input berikutnya
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			do
			{
				// Sub menu fitur tambahan
				cout << "\n====================================\n";
				cout << "FITUR TAMBAHAN\n";
				cout << "====================================\n";
				cout << "Tips: gunakan bilangan desimal untuk mendapatkan hasil yang sesuai, contoh 5.3 atau 5.0\n";
				cout << "=============================\n";
				cout << "\n1. Min dan Max\n";
				cout << "2. Pembulatan Angka\n";
				cout << "3. Pengaturan Presisi Desimal\n";
				cout << "0. Kembali ke Menu Utama\n";

				// Pilihan submenu
				while (true)
				{
					cout << "Pilih fitur: ";

					if (!bacaInt(pilihanTambahan))
					{
						cout << "Input tidak valid! Masukkan angka saja.\n";
						continue;
					}

					if (pilihanTambahan >= 0 && pilihanTambahan <= 3)
						break;

					cout << "Pilihan tidak tersedia! Pilih angka 0 sampai 3.\n";
				}

				// Kembali ke menu utama
				if (pilihanTambahan == 0)
				{
					cout << "Kembali ke menu utama...\n";
					break;
				}


				// Min dan Max
				else if (pilihanTambahan == 1)
				{
					while (true)
					{
						cout << "Masukkan bilangan pertama: ";

						if (bacaDouble(angkaMinMax1) && isfinite(angkaMinMax1))
							break;

						cout << "Input tidak valid! Masukkan bilangan kembali.\n";
					}

					while (true)
					{
						cout << "Masukkan bilangan kedua: ";

						if (bacaDouble(angkaMinMax2) && isfinite(angkaMinMax2))
							break;

						cout << "Input tidak valid! Masukkan bilangan kembali.\n";
					}

					if (angkaMinMax1 < angkaMinMax2)
					{
						cout << "Nilai minimum: " << angkaMinMax1 << endl;
						cout << "Nilai maksimum: " << angkaMinMax2 << endl;
					}
					else
					{
						cout << "Nilai minimum: " << angkaMinMax2 << endl;
						cout << "Nilai maksimum: " << angkaMinMax1 << endl;
					}
				}


				// Pembulatan angka
				else if (pilihanTambahan == 2)
				{
					cout << "\n=== MENU PEMBULATAN ANGKA ===\n";
					cout << "1. Round (Pembulatan Terdekat)\n";
					cout << "2. Floor (Pembulatan ke Bawah)\n";
					cout << "3. Ceil (Pembulatan ke Atas)\n";

					// Validasi pilihan metode pembulatan
					while (true)
					{
						cout << "Pilih metode: ";

						if (!bacaInt(pilihanPembulatan))
						{
							cout << "Input tidak valid! Masukkan angka saja.\n";
							continue;
						}

						if (pilihanPembulatan >= 1 && pilihanPembulatan <= 3)
							break;

						cout << "Pilihan metode tidak tersedia! Pilih angka 1 sampai 3.\n";
					}

					// Validasi bilangan yang akan dibulatkan
					while (true)
					{
						cout << "Masukkan bilangan: ";

						if (bacaDouble(angkaPembulatan) && isfinite(angkaPembulatan))
							break;

						cout << "Input tidak valid! Masukkan bilangan kembali.\n";
					}

					if (pilihanPembulatan == 1)
					{
						cout << "Hasil round: "
							 << round(angkaPembulatan) << endl;
					}
					else if (pilihanPembulatan == 2)
					{
						cout << "Hasil floor: "
							 << floor(angkaPembulatan) << endl;
					}
					else if (pilihanPembulatan == 3)
					{
						cout << "Hasil ceil: "
							 << ceil(angkaPembulatan) << endl;
					}
				}


				// Pengaturan presisi desimal
				else if (pilihanTambahan == 3)
				{
					cout << "\n====================================\n";
					cout << "PENGATURAN PRESISI DESIMAL\n";
					cout << "====================================\n";

					cout << "\nPresisi saat ini: "
						 << jumlahDesimal << " angka di belakang koma\n";

					while (true)
					{
						cout << "Masukkan jumlah angka desimal (0-10): ";

						if (!bacaInt(pilihanPresisi))
						{
							cout << "Input tidak valid! Masukkan bilangan bulat.\n";
							continue;
						}

						if (pilihanPresisi >= 0 && pilihanPresisi <= 10)
							break;

						cout << "Presisi harus berada di antara 0-10!\n";
					}

					jumlahDesimal = pilihanPresisi;

					cout << "Presisi berhasil diubah menjadi "
						 << jumlahDesimal << " angka desimal.\n";

					cout << "Pengaturan presisi berhasil diterapkan!\n";
				}

			} while (tanyaUlang("fitur tambahan"));

			cout << "Kembali ke menu utama...\n";
		}


		// Bersihkan terminal
		else if (pilihan == 99)
		{
			system("cls");
			continue;
		}


		// Tentang kami
		else if (pilihan == 100)
		{
			string kembaliTentangkami;

			cout << "\nTentang Kami\n";
			cout << "\n==================\n";
			cout << "Dosen: Awang pradana, S.kom.,M.kom\n";
			cout << "==================\n";
			cout << "\nAnggota kelompok 7\n";
			cout << "==================\n";
			cout << "Nama: Muhammad Gilang Ramadhan (26456202029)\n";
			cout << "Nama: Alvino Christa Samara (26456202023)\n";
			cout << "Nama: Afif Firza Nurkolis (26456202019)\n";
			cout << "Nama: Muhammad Fakhri (26456202020)\n";

			// // Untuk membersihkan sisa input agar tak mengganggu proses input berikutnya
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			while (true)
			{
				cout << "\nTekan y untuk kembali ke menu utama: ";
				getline(cin, kembaliTentangkami);

				if (kembaliTentangkami == "y" || kembaliTentangkami == "Y")
				{
					cout << "\nKembali ke menu utama...\n";
					break;
				}
				else
				{
					cout << "Input tidak valid! Masukkan y saja.\n";
				}
			}
		}
		

		// keluar
		else if (pilihan == 0)
		{
			cout << "\nMakasih udah nyobain kalkukator kami!!\n";
			cout << "Semoga nilai matkul Pemrograman Dasar kami A :3\n";
			break;
		}
	}
	return 0;
}