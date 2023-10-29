#include<iostream>
#include<cstdlib>
using namespace std;

char Nama[20], Bantu, Kembali, Pilih, Beli;
int Harga, Bayar, Kembalian, Makanann,Minumann, Banyak;

void Makandanminum()
{
	cout << "Makan dan Minuman : " << endl;
	cout << "1.Makanan dan Minum" << endl;
	


	
}
void Makanan()
{
	do {
		cout << "List Makanan :" << endl;
		cout << "1.Gorengan" << endl;
		cout << "  Harga : Rp.1.000" << endl << endl;

		cout << "2.Sate Usus" << endl;
		cout << "  Harga : Rp.2.000" << endl << endl;

		cout << "3.Nasi Kucing" << endl;
		cout << "  Harga : Rp.2.000" << endl << endl;

		cout << "4.Kopi" << endl;
		cout << "  Harga : Rp.3.000" << endl << endl;

		cout << "5.Teh" << endl;
		cout << "  Harga : Rp.3.000" << endl << endl;

		cout << "6.Nutrisari" << endl;
		cout << "  Harga : Rp.3.000" << endl << endl;

		cout << "Apkah Ingin Membeli [Y/N] : "; cin >> Beli;



		if (Beli == 'Y' || Beli == 'y') {
			cout << "Pilihan Nomor Berapa: "; cin >> Makanann;

			switch (Makanann) {
			case 1:
				cout << "Berapa banyak :"; cin >> Banyak;
				Harga = Harga + Banyak * 1000;
				break;

			case 2:
				cout << "Berapa banyak :"; cin >> Banyak;
				Harga = Harga + Banyak * 2000;
				break;

			case 3:
				cout << "Berapa banyak :"; cin >> Banyak;
				Harga = Harga + Banyak * 2000;
				break;

			case 4:
				cout << "Berapa banyak :"; cin >> Banyak;
				Harga = Harga + Banyak * 3000;
				break;

			case 5:
				cout << "Berapa banyak :"; cin >> Banyak;
				Harga = Harga + Banyak * 3000;
				break;

			case 6:
				cout << "Berapa banyak :"; cin >> Banyak;
				Harga = Harga + Banyak * 3000;
				break;


			}
			cout << "Ingin memesan lagi [Y/N] :"; cin >> Kembali;
		}

		else if (Beli == 'N' || Beli == 'n') {
			cout << "Terimakasih telah berkunjung" << endl;
		}

	} while (Kembali == 'Y' || Kembali == 'y');
}

int main()
{
	do {
	ulang:

		cout << "==============================" << endl;
		cout << "         Angkringan" << endl;
		cout << "        Agio Prima Kece" << endl;
		cout << "==============================" << endl;
		cout << "Selamat datang di Angkringan kami " << endl;
		cout << "Ada yang mau kamu pesan [Y/N] :"; cin >> Bantu;

		if (Bantu == 'Y' || Bantu == 'y')
		{

			cout << "Selamat datang di Angkringan " << endl;
			Makandanminum();
			cout << "Apa yang kamu mamu pesan : "; cin >> Pilih;

			if (Pilih == '1')
			{
				Makanan();
			}
		}

		else if (Bantu == 'N' || Bantu == 'n')
		{
			cout << "Terimakasih telah berkunjung ke Angkringan kami " << endl;
			cout << "Kembali ke menu awal [Y/N]? "; cin >> Kembali;
			if (Kembali == 'Y' || Kembali == 'y')
			{
				goto ulang;
			}

		}

		else
		{
			cout << "Kode yang anda masukan salah" << endl;
			cout << "Kembali ke menu awal [Y/N]? "; cin >> Kembali;
			if (Kembali == 'Y' || Kembali == 'y')
			{
				goto ulang;
			}
		}

		cout << "==================================================================" << endl;
		cout << "Total Pembayaran : Rp. " << Harga << endl;
		cout << "Bayar            : Rp. "; cin >> Bayar;
		Kembalian = Bayar - Harga;
		cout << "Kembalian        : Rp. " << Kembalian << endl << endl;

		cout << "Kembali ke menu awal [Y/N]?"; cin >> Kembali;

		system("cls");
	} while (Kembali == 'Y' || Kembali == 'y');



}
