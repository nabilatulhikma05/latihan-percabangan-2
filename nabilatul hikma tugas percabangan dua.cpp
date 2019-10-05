#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
	int a = 500000 ;
	int b = 1100000 ;
	int c = 1200000 ;
	int d = 1500000 ;
	int diskon,diskonl;
	char istri,anak,member,barang;
	char ktp;
	
	cout <<"Selamat Datang Silhkan Belanja"<<endl;
	cout << "barang a = Rp. "<<a<<endl;
	cout << "barang b = Rp. "<<b<<endl;
	cout << "barang c = Rp. "<<c<<endl;
	cout << "barang d = Rp. "<<d<<endl;
	cout <<"Pilih barang yang akan dibeli = "; cin>>barang;
	
	if (barang == 'c' || barang == 'd'){
	cout<<"selamat anda mendapatkan diskon...."<<endl;
	cout<<"silahkan lengkapi informasi dibawah:(masukkan dalam huruf kecil)"<<endl;
	cout<<"Apakah anda memiliki kartu member?(Y jika ya / N jika tidak) : ";cin>>member;
	cout<<"Apakah anda lahir di kota makassar?(Y jika ya / N jika tidak) : ";cin>>ktp;
	cout<<"Apakah status anda sudah menikah?(Y jika ya / N jika tidak) : ";cin>>istri;
	cout<<"Apakah anda sudah memiliki anak ?(Y jika ya / N jika tidak) : ";cin>>anak;
}
		if (barang == 'c'){
			if (ktp == 'y' && member == 'y'&& istri == 'y'&& anak == 'y'){
				cout <<"selamat anda mendapatkan diskon 75%"<<endl;
				diskonl = c*75/100;
				diskon = c - diskonl;
				cout <<"harga barang "<<barang<<" setelah dikurangi diskon = Rp. "<<diskon<<endl;
			}
			else if(ktp == 'y' && member == 'y'&& istri == 'y'&& anak == 'n'){
				cout <<"selamat anda mendapatkan diskon 50%"<<endl;
				diskonl = c*50/100;
				diskon = c-diskonl;
				cout <<"harga barang "<<barang<<" setelah dikurangi diskon = Rp. "<<diskon<<endl;
			}
			else if (ktp == 'y' && member == 'y'&& istri == 'n'){
				cout <<"selamat anda mendapatkan diskon 25%"<<endl;
				diskonl = c*25/100;
				diskon = c-diskonl;
				cout <<"harga barang "<<barang<<" setelah dikurangi diskon = Rp. "<<diskon<<endl;
			}
			else if (ktp == 'y' && member == 'n' && istri == 'y'){
				cout <<"selamat anda mendapatkan diskon 10%"<<endl;
				diskonl = c*10/100;
				diskon = c-diskonl;
				cout <<"harga barang "<<barang<<" setelah dikurangi diskon = Rp. "<<diskon<<endl;
			}
			else if(ktp == 'n' && member == 'y'&& istri == 'y'&& anak == 'y'){
				cout <<"selamat anda mendapatkan diskon 85%"<<endl;
				diskonl = c*85/100;
				diskon = c - diskonl;
				cout <<"harga barang "<<barang<<" setelah dikurangi diskon = Rp. "<<diskon<<endl;
			}
			else if(ktp == 'n' && member == 'y'&& istri == 'y'&& anak == 'n'){
				cout <<"selamat anda mendapatkan diskon 60%"<<endl;
				diskonl = c*60/100;
				diskon = c-diskonl;
				cout <<"harga barang "<<barang<<" setelah dikurangi diskon = Rp. "<<diskon<<endl;
			}
			else if (ktp == 'n' && member == 'y'&& istri == 'n'){
				cout <<"selamat anda mendapatkan diskon 35%"<<endl;
				diskonl = c*35/100;
				diskon = c-diskonl;
				cout <<"harga barang "<<barang<<" setelah dikurangi diskon = Rp. "<<diskon<<endl;
			}
			else if (ktp == 'n' && member == 'n' && istri == 'y'){
				cout <<"selamat anda mendapatkan diskon 20%"<<endl;
				diskonl = c*20/100;
				diskon = c-diskonl;
				cout <<"harga barang "<<barang<<" setelah dikurangi diskon = Rp. "<<diskon<<endl;
			}
			
		}
		
		if (barang == 'd'){
			if (ktp == 'y' && member == 'y'&& istri == 'y'&& anak == 'y'){
				cout <<"selamat anda mendapatkan diskon 75%"<<endl;
				diskonl = d*75/100;
				diskon = d - diskonl;
				cout <<"harga barang "<<barang<<" setelah dikurangi diskon = Rp. "<<diskon<<endl;
			}
			else if(ktp == 'y' && member == 'y'&& istri == 'y'&& anak == 'n'){
				cout <<"selamat anda mendapatkan diskon 50%"<<endl;
				diskonl = d*50/100;
				diskon = d-diskonl;
				cout <<"harga barang "<<barang<<" setelah dikurangi diskon = Rp. "<<diskon<<endl;
			}
			else if (ktp == 'y' && member == 'y'&& istri == 'n'){
				cout <<"selamat anda mendapatkan diskon 25%"<<endl;
				diskonl = d*25/100;
				diskon = d-diskonl;
				cout <<"harga barang "<<barang<<" setelah dikurangi diskon = Rp. "<<diskon<<endl;
			}
			else if (ktp == 'y' && member == 'n' && istri == 'y'){
				cout <<"selamat anda mendapatkan diskon 10%"<<endl;
				diskonl = d*10/100;
				diskon = d-diskonl;
				cout <<"harga barang "<<barang<<" setelah dikurangi diskon = Rp. "<<diskon<<endl;
			}
			else if(ktp == 'n' && member == 'y'&& istri == 'y'&& anak == 'y'){
				cout <<"selamat anda mendapatkan diskon 85%"<<endl;
				diskonl = d*85/100;
				diskon = d - diskonl;
				cout <<"harga barang "<<barang<<" setelah dikurangi diskon = Rp. "<<diskon<<endl;
			}
			else if(ktp == 'n' && member == 'y'&& istri == 'y'&& anak == 'n'){
				cout <<"selamat anda mendapatkan diskon 60%"<<endl;
				diskonl = d*60/100;
				diskon = d-diskonl;
				cout <<"harga barang "<<barang<<" setelah dikurangi diskon = Rp. "<<diskon<<endl;
			}
			else if (ktp == 'n' && member == 'y'&& istri == 'n'){
				cout <<"selamat anda mendapatkan diskon 35%"<<endl;
				diskonl = d*35/100;
				diskon = d-diskonl;
				cout <<"harga barang "<<barang<<" setelah dikurangi diskon = Rp. "<<diskon<<endl;
			}
			else if (ktp == 'n' && member == 'n' && istri == 'y'){
				cout <<"selamat anda mendapatkan diskon 20%"<<endl;
				diskonl = d*20/100;
				diskon = d-diskonl;
				cout <<"harga barang "<<barang<<" setelah dikurangi diskon = Rp. "<<diskon<<endl;
			}
		}
	else if (barang == 'a'){
		cout <<"total belanja = Rp. "<<a;
	}
 	else if (barang == 'b'){
		cout <<"total belanja = Rp. "<<b;}
	else {
		cout <<"barang tidak ditemukan";
	}
}
