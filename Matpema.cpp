#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <conio.h>
using namespace std;

//cmath untuk sqrt dan eksponen (power) phytagoras dalam mencari keliling di bangun datar
//algorithm untuk fitur sort() sorting saat mencari median di statistika
//vector untuk menyimpan sementara angka modus di statistika dan push_back 
//conio.h untuk getch menyamarkan password

//KELOMPOK 1 STUKTUR DATA DAN ALGORITMA KELAS RPL 2C
//Muhammad Akbar Permanaatmaja			(2204074) 
//Kezia Helena Patricia Naibaho			(2209498) 
//Alfia April Riani						(2209367) 
//Dhowy Anja Alhusna					(2210013) 

void log();
void menu();
void Keluar();
int main();

void Keluar()
{
    cout << "\t !!     Silahkan keluar  	\t!! \n";
    cout << endl;
 	exit(0);
}

//BILANGAN REAL
// ranah fitur 1 ==========================================================================================================================
void filter_1(){

	cout << endl;
	cout << "\t\t\t| PENGERTIAN BILANGAN REAL | " << endl << endl;
	cout << "||==============================================================================================||\n";
	cout << "||-Bilangan real adalah bilangan yang dapat digunakan dalam operasi numerik seperti biasa\t||\n";
	cout << "||-Bilangan real disebut juga dengan bilangan riil dan diwakili oleh simbol ( R )\t\t||\n"; 
	cout << "||-Bilangan riil dalam matematika merupakan bilangan yang dapat dituliskan dalam bentuk desimal\t||\n"; 
	cout << "|| seperti 2.483 atau 3.25								\t||\n";
	cout << "||-Bilangan real meliputi bilangan rasional, seperti 42 dan -23/129			\t||\n"; 
	cout << "|| dan bilangan irasional seperti p							\t||\n"; 
	cout << "||-Bilangan real juga dapat direpresentasikan sebagai titik pada garis digital	\t\t||\n";
	cout << "||-Standar modern matematika murni tidak cukup ketat untuk deskripsi bilangan riil ini\t\t||\n"; 
	cout << "||-Salah satu perkembangan matematika terpenting di abad ke-19 adalah		\t\t||\n"; 
	cout << "|| penemuan definisi yang cukup ketat dari bilangan real 			\t\t||\n";
	cout << "|| dan kesadaran bahwa diperlukan definisi yang lebih baik.			\t\t||\n"; 
	cout << "||-Bilangan real membentuk bidang Archimedes unik, yang sepenuhnya teratur (R; +; ·; <)\t\t||\n";
	cout << "||==============================================================================================||\n";
	cout << endl;
	
	cout <<"\t||ingin mencoba operasi perhitungan dari bilangan Real?					||" << endl;
	cout << "\t||ketik 'y' jika ingin mencobanya, ketik apa saja jika tak ingin mencobanya		||\n";
	string ril = "y";
	float num1, num2, jumlah;
    char op;
	string pilih1;
	cin >>pilih1;
	
	if(cin.fail()){
		system("CLS");
		cout << "\t !! perintah tidak valid !! \n";
	    cin.clear();
		cin.ignore();
	} else if (pilih1 == ril){
		awal :
		    cout << "Masukkan bilangan pertama: ";
		    cin >> num1;
		    cout << "Masukkan bilangan kedua: ";
		    cin >> num2;
		
		    cout << "Pilih operasi matematika (+, -, *, /): ";
		    cin >> op;
		if (!cin){
			cout << "Operasi tak dapat dilakukan" << endl;
		} else{
		switch (op) {
	        case '+':
	            cout << num1 << " + " << num2 << " = " << num1 + num2;
	            break;
	        case '-':
	            cout << num1 << " - " << num2 << " = " << num1 - num2;
	            break;
	        case '*':
	            cout << num1 << " * " << num2 << " = " << num1 * num2;
	            break;
	        case '/':
	            if (num2 == 0) {
	            	cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
	                cout << "Bilangan kedua tidak boleh dibagi nol! karena hasilnya tak terhingga\n";
	                cout << "pembagian dengan penyebut nol 'tidak diperbolehkan' karena akan menyebabkan kontradiksi antar aturan aritmatik";
	            } else {
	                cout << num1 << " / " << num2 << " = " << num1 / num2;
	            }
	            break;
	        default:
	        	cout << endl;
	            cout << "Error: Operasi matematika tidak dapat dilakukan!" << endl;
				goto awal;
	    	}
					string c = "y";
			    	string coba;
			    	cout << endl;
			    	cout << "||==========================================================||\n";
					cout << "|| ingin mencoba lagi ? (tekan 'y' jika ingin mencoba lagi) ||\n";
					cout << "||==========================================================||\n";
					cin >> coba;
					if (coba == c){
						goto awal;
					}  
				
		}
	    
	} 
	else {
		
	}
	
}

//HIMPUNAN
// ranah fitur 2 ==========================================================================================================================
	
void filter_2(){
	cout << "\t\t\t| PENGERTIAN HIMPUNAN | " << endl << endl;
	cout << "||=============================================================================||\n";
	cout << "||        Secara umum, Himpunan adalah kumpulan dari objek tertentu            ||\n";
	cout << "||   yang memiliki definisi yang jelas dan dianggap sebagai satu kesatuan      ||\n";
	cout << "||=============================================================================||\n";
	
	cout << endl;
	cout <<"\t||ingin mencoba operasi dari bilangan himpunan?					||" << endl;
	cout << "\t||ketik 'y' jika ingin mencobanya, ketik apa saja jika tak ingin mencobanya	||\n";
	string ril = "y";
	string pilih2;
	cin >>pilih2;
	if(cin.fail()){
		system("CLS");
		cout << "\t !! perintah tidak valid !! \n";
    cin.clear();
	cin.ignore();
	} else if (pilih2 == ril){
		awal :
		cout << "Masukkan banyaknya elemen himpunan X: ";
	    int n; cin >> n;
				if(cin.fail()){
					system("CLS");
					cout << "\t !! perintah tidak valid !! \n";
			    cin.clear();
				cin.ignore();
				} else {
					cout << "Masukkan banyaknya elemen himpunan Y: ";
				}

	    int m;cin >> m;
				if(cin.fail()){
					system("CLS");
					cout << "\t !! perintah tidak valid !! \n";
			    cin.clear();
				cin.ignore();
				} else {
					cout << "Masukkan elemen himpunan X: ";	
				}
	    int semesta[n+m] ;
		int i,j,k;    
	    int x[n];

	    for (i = 0; i < n; i++) {
	        cin >> x[i];
	        semesta[i] = x[i];
	    }
				if(cin.fail()){
					system("CLS");
					cout << "\t !! perintah tidak valid !! \n";
			    cin.clear();
				cin.ignore();
				} else {
					    cout << "Masukkan elemen himpunan Y: ";	
				}
	    int y[m];

	    for (i = 0; i < m; i++) {
	        cin >> y[i];
	        semesta[n+i] = y[i];
	    }
				if(cin.fail()){
					system("CLS");
					cout << "\t !! perintah tidak valid !! \n";
			    cin.clear();
				cin.ignore();
				} else {
		cout << "Pilih operasi yang diinginkan:\n";
	    cout << "1. Gabungan\n";
	    cout << "2. Irisan\n";
	    cout << "3. Selisih X - Y\n";
	    cout << "4. Komplemen X\n";
	    cout << "Pilihan: ";
	    cin >> k;
	    cout << "Hasil: ";	
				}

	    int z[n+m], idx;
		bool temu; 
	    switch (k) {
	    	//gabungan
	        case 1:
			cout << "Gabungan dari X dan Y semua anggota dimasukkan :" << endl;
	            for (i = 0; i < n; i++) {
	                z[i] = x[i];
	            }
	            idx = n;
	            for (i = 0; i < m; i++) {
	                bool temu = false;
	                for (j = 0; j < n; j++) {
	                    if (y[i] == x[j]) {
	                        temu = true;
	                        break;
	                    }
	                }
	                if (!temu) {
	                    z[idx] = y[i];
	                    idx++;
	                }
	            }
	            for (i = 0; i < idx; i++) {
	                cout << z[i] << " ";
	            }
	            break;
	            //irisan
	        case 2:
	        	cout << "Irisan dari X dan Y artinya elemen yang ada di keduanya\n";
	            for (i = 0; i < n; i++) {
	                for (j = 0; j < m; j++) {
	                    if (x[i] == y[j]) {
	                        cout << x[i] << " ";
	                        break;
	                    }
	                }
	            }
	            break;
	        //pengurangan
	        case 3:
	        	cout << "X - Y artinya anggota x yang tidak ada di y\n";
	            for (i = 0; i < n; i++) {
	                bool temu = false;
	                for (j = 0; j < m; j++) {
	                    if (x[i] == y[j]) {
	                        temu = true;
	                        break;
	                    }
	                }
	                if (!temu) {
	                    cout << x[i] << " ";
	                }
	            }
	            break;
	            //komplemen
	        case 4:
	        	cout << "x complemen artinya anggota yang bukan x\n";
					for (int i = 0; i < n+m; i++) {
			        bool temu = false;
			        for (int j = 0; j < n; j++) {
			            if (semesta[i] == x[j]) {
			                temu = true;
			                break;
			            }
			        }
			        if (!temu) {
			            cout << semesta[i] << " ";
			        }
			    }
			break;  
			
	        default:
	            cout << "Pilihan tidak valid";
	            
	    }
	    cout << endl;
					string c = "y";
			    	string coba;
			    	cout << endl;
			    	cout << "||==========================================================||\n";
					cout << "|| ingin mencoba lagi ? (tekan 'y' jika ingin mencoba lagi) ||\n";
					cout << "||==========================================================||\n";
					cin >> coba;
					if (coba == c){
						system("CLS");
						goto awal;
					}    
	}
   

}

	

//PERSAMAAN DAN PERTIDAKSAMAAN LINEAR
// ranah fitur 3 ==========================================================================================================================

//double linked list
struct himpun {
	int himpunan1,himpunan2;
	int gabungan;
	
	himpun  *selanjutnya;
	string langkah1, langkah2, langkah3, langkah4, persamaan;
	himpun *prev;
	himpun *next;
};

himpun  *head, *tail, *arus, *newnode;

void membuatDoubleLinkedList(string data[8]){
	head = new himpun();
	head->langkah1 = data[0];
	head->langkah2 = data[1];
	head->langkah3 = data[2];
	head->langkah4 = data[3];
	head->persamaan = data[4];
	head->prev = NULL;
	head->next = NULL;
	tail = head;
}

void filter_3(){
	cout << "\t\t\t| PENGERTIAN SISTEM PERSAMAAN DAN PERTIDAKSAMAAN LINEAR | " << endl << endl;
	cout << "||==============================================================================================================||\n";
	cout << "||-Disebut persamaan linear lantaran hubungan matematis ini dapat digambarkan sebagai garis lurus		||\n";
	cout << "|| yang memiliki definisi yang jelas dan dianggap sebagai satu kesatuan						||\n";
	cout << "||-sistem koordinat kartesius. Apabila terdapat lebih dari satu persamaan linear				||\n";
	cout << "|| persamaan tersebut akan menjadi sebuah system, contoh  dari	Persamaan linear adalah				||\n";
	cout << "||-persamaan linear satu variabel, persamaan linear dua variabel, dan juga persamaan linear tiga variable	||\n";
	cout << "||==============================================================================================================||\n";
	cout << "||beda dengan persamaan linear, pertidaksamaaan adalah kalimat matematika terbuka yang mengandung variabel	||\n";
	cout << "||berderajat satu yang menggunakan tanda <, >, =, atau =							||\n";
	cout << "||==============================================================================================================||\n";
	cout << endl;
	cout << "\t||Ingin melihat contoh persamaan linear?					||\n";
	cout << "\t||ketik 'y' jika ingin mencobanya, ketik apa saja jika tak ingin mencobanya	||\n";
	string ril3 = "y";
	string coba3;
	cin >> coba3;
	if(cin.fail()){
		system("CLS");
		cout << "\t !! perintah tidak valid !! \n";
		cin.clear();
		cin.ignore();
	}else if (coba3 == ril3) {
		awal :
			cout << "(1) Persamaan Linear Dua Variabel" << endl;
			cout << "(2) Pertidaksamaan Linear Dua Variabel" << endl << endl;
			cout << "Apa pilihan mu?" << endl;
			
			int pilih3;
			cin >> pilih3;
			if(pilih3 ==1){
			system("CLS");
			cout << "\t||Bentuk umum Persamaan Linear ax + by = c ||\n";
			cout << endl;
			cout <<"Tujuh tahun yang lalu umur ayah sama dengan 6 kali umur budi\n"; 
			cout << "Empat tahun yang akan datang 2 kali umur ayah sama dengan 5 kali umur budi ditambah 9 tahun\n";
			cout << "Umur ayah sekarang adalah? \n\n";
			cout << "Umur ayah = x\numur Budi = y\n";
			himpun *node1, *node2;
			node1 = new himpun();
			node2 = new himpun();
			
			node1->langkah1 = "(x - 7) = 6 (y - 7)";
			node1->langkah2 = "x - 7 = 6y - 42";
			node1->langkah3 = "x - 7 - 6y + 42 = 0";
			node1->langkah4 = "x - 6y + 35 = 0";
			node1->persamaan = "x - 6y = - 35 (persamaan 1)";
			node1->prev = NULL;
			node1->next = node2;
			
			node2->langkah1 = "2 (x + 4) = 5 (y +4)";
			node2->langkah2 = "2x + 8 = 5y + 20 + 9";
			node2->langkah3 = "2x - 5y = 20 + 9 - 8";
			node2->langkah4 = "2x - 5y = 21";
			node2->persamaan = "2x - 5y = 21 (persamaan 2)";
			node2->prev = node1;
			node2->next = NULL;		
			//print si double linkedlistnya
			himpun *cur;
			cur = node1;
			while (cur != NULL){
				cout << cur->langkah1 << endl;
				cout << cur->langkah2 << endl;
				cout << cur->langkah3 << endl;
				cout << cur->langkah4 << endl;
				cout << cur->persamaan << endl;
				cout << endl;
				//step
				cur = cur->next;
			}
			cout << "x - 6y = -35|x2|2x - 12y =-70" << endl;
			cout << "2x - 5y = 21|x1|2x - 5y = 21 	_" << endl;
			cout <<"----------------------------------" << endl;
			cout << "-------------------- -7y = -91" << endl;
			cout << "---------------------- y = -91/7" << endl;
			cout << "------------------------ = 13" << endl;
			cout << endl;
			cout << "x - 6y = -35\n";
			cout << "x - 6(13)= -35\n";
			cout << "x - 78 = -35\n";
			cout << "	x = 78-35\n"; 
			cout << "	  = 43\n";
			cout << "umur ayah adalah 43 tahun" << endl;	
			}
			else if(pilih3 ==2){
			system("CLS");
			cout << "\t||Bentuk umum Pertidaksamaan Linear adalah ax + by </>/<=/>= c ||\n";
			cout << "\tPertidaksamaan Linear dalam Nilai Mutlak memiliki beberapa definisi yang harus diterapkan yakni :\n";
			cout << "\t1. |x| = x jika x >= 0 \n";
			cout << "\t2. |x| = -x jika x< 0 \n";
			cout << "\t3. ./(x^2) \n";
			cout << endl;
			cout << "Himpunan penyelesaian dari |2x - 5| <=9 adalah\n";
			cout << "|2x - 5| <= 9\n";
			cout << "-9 <= 2x - 5 <= 9\n";
			cout << "-9 + 5 <= 2x - 5 + 5 <= 9 + 5\n";
			cout << "-4 <= 2x <= 14\n";
			cout << "-2 <= x <= 7\n";	
			}
			else {
				cout << "Pilihan tidak ditemukan!\n";
			}
			
					string c = "y";
			    	string coba;
			    	cout << endl;
			    	cout << "||==========================================================||\n";
					cout << "|| ingin mencoba lagi ? (tekan 'y' jika ingin mencoba lagi) ||\n";
					cout << "||==========================================================||\n";
					cin >> coba;
					if (coba == c){
						goto awal;
					}  	
			
			
	} else {

	}

}
	
	



//BANGUN DATAR
// ranah fitur 4 ==========================================================================================================================
float Luas(float panjang, float lebar){
	float luas = panjang * lebar;
	return luas;
}

float Keliling(float S){
	float keliling = 4*S;
	return keliling;
}

void filter_4(){
	cout << "\t\t\t| OPERASI BANGUN DATAR | " << endl << endl;
	cout << "||==============================================================================||\n";
	cout << "||-Bangun Datar merupakan bangun yang memiliki permukaan datar			||\n";
	cout << "|| serta memiliki dua dimensi, yakni panjang dan lebar.				||\n";
	cout << "||-Permukaan bagun datar biasanya dibatasi oleh garis lurus ataupun lengkung.	||\n";
	cout << "||-Contoh bangun datar adalah : persegi, persegi Panjang, belah ketupat,	||\n";
	cout << "|| layangan, trapesium, lingkaran, dan segitiga      				||\n";
	cout << "||==============================================================================||\n";
	cout << endl;
	cout << "\t||Ingin mencoba menghitung bangun datar?					||\n";
	cout << "\t||ketik 'y' jika ingin mencobanya, ketik apa saja jika tak ingin mencobanya	||\n";
	string ril4 = "y";
	string coba4;
	float p, l;

	cin >> coba4;
				if(cin.fail()){
					system("CLS");
					cout << "\t !! perintah tidak valid !! \n";
			    cin.clear();
				cin.ignore();
				} else if (coba4 == ril4) {
					awal :
		cout << "(1) Persegi/Persegi Panjang" << endl;
		cout << "(2) Segitiga" << endl;
		cout << "(3) Belah Ketupat/Layangan" << endl;
		cout << "(4) trapesium" << endl;
		cout << "Apa pilihan mu?" << endl;
		int pilih4;
		cin >> pilih4;
			if(pilih4 == 1){
			system("CLS");
			//gambar persegi
					    for (int i = 0; i < 5; i++) {
		        			for (int j = 0; j < 7; j++) {
		            			cout << "*";
							        }
							        cout << endl;
							    }
			cout << endl;
			cout << "Luas dari Persegi/Persegi Panjang adalah = (panjang * lebar) \n";
			cout << "Keliling dari Persegi adalah = (4*S) sedangkan Persegi Panjang adalah = (2*p + 2*l) \n";
			cout << "----------------------------\n";
			cout << "Masukkan Panjang dari Persegi/Persegi Panjang : ";
			cin >> p;
			cout << "Masukkan Lebar dari Persegi/Panjang : ";
			cin >> l;
			cout << "Luas dari Persegi/Persegi Panjang adalah : " << Luas(p,l) << endl;
				if(p == l){
					cout << "keliling dari persegi adalah : " << Keliling(p) << endl;
				}else {
					cout << "keliling dari persegi panjang : " << 2*p+2*l << endl;
				}
			} else if (pilih4 == 2){
			system("CLS");
			//gambar si segitiganya
			int n = 5;
			    for (int i = 0; i < n; i++) {
        			for (int j = 0; j <= i; j++) {
        				cout << "*";
        				}
        				cout << endl;
    				}
    		cout << endl;
    		cout << "luas dari segitiga adalah = (alas x tinggi/2)\n";
    		cout << "Keliling dari segitiga adalah = sisi miring1 + sisi miring2 + sisi miring 3\n";
			cout << "----------------------------\n";
			cout << "Masukkan alas dari segitiga : ";
			cin >> p;
			cout << "masukkan Tinggi dari Segitiga : ";
			cin >> l;
			
			cout << "Luas dari Segitiga adalah : " << Luas(p,l)/2 << endl; 
			l = 2 * Luas(p,l)/2 / p; // menghitung tinggi
   			double sisi_miring = sqrt(pow(p / 2, 2) + pow(l, 2)); // menghitung panjang sisi miring
   			double keliling = p + 2 * sisi_miring; // menghitung keliling
   			cout << "Keliling segitiga adalah: " << keliling << endl;
			}
			
			
			else if (pilih4 == 3){
			system("CLS");
			//gambar belah ketupat dan layangan
						int n =6;
							for (int i = 0; i < n; i++) {
						        for (int j = 0; j < n-i; j++) {
						            cout << " ";
						        }
						        for (int j = 0; j <= i; j++) {
						            cout << "* ";
						        }
						        cout << endl;
						    }
						    for (int i = n; i > 0; i--) {
						        for (int j = 0; j < n-i; j++) {
						            cout << " ";
						        }
						        for (int j = 0; j < i; j++) {
						            cout << " *";
						        }
						        cout << endl;
		    							}
		    cout << endl;
			cout << "luas dari Belah Ketupat/Layangan adalah = (d1 x d2/2)\n";
			cout << "Keliling dari Belah Ketupat adalah 4*S sedangkan Layangan adalah 2(sisi miring 1 + sisi miring 2)\n";
			cout << "----------------------------\n";				
			cout << "Masukkan diagonal 1 dari belah ketupat/layangan : ";
			cin >> p;
			cout << "masukkan diagonal 2 dari belah ketupat/layangan : ";
			cin >> l;
			cout << "Luas dari belah ketupat/layangan adalah : " << Luas(p,l)/2 << endl;
				if(p == l){
					cout << "keliling dari Belah Ketupat adalah : " << Keliling(p) << endl;
				}else {
					   double sisi = sqrt(pow(p / 2, 2) + pow(l / 2, 2));
					   double keliling = sisi * 4;
   					cout << "Keliling layangan adalah: " << keliling << endl;

				}
			
			} else if (pilih4 == 4) {
			system("CLS");
			//gambar trapesium
				       			int row = 6;
				       			int i,j,k;
				       				for(i=0;i<row;i++)
				      					{
				           					for(j=row;j>i;j--)
				                				cout<<" ";
				          					for(k=0;k<=row+j;k++)
				               					cout<<"* ";
				          					cout<<endl;
				     					}
				cout << endl;
				float b1;
				float b2;
				float h;
				float A;
				cout << "luas dari trapesium adalah = (panjang atas + panjang bawah)*tinggi /2" << endl;
				cout << "Keliling dari Trapesium adalah = (sisi a + sisi b + sisi c + sisi d)" << endl;	
				cout << "----------------------------\n";			
				cout << "panjang atas trapesium :"; cin >> b1;
				cout << "panjang bawah trapesium : "; cin >> b2;
				cout << "tinggi trapesium : "; cin >> h;
				A=(b1+b2)*h/2;

				cout<<"Luas Trapesium adalah : "<<A<<"\n";					
				h = 2 * A / (b1 + b2); // menghitung tinggi
   				double sisi_miring = sqrt(pow((b1 - b2) / 2, 2) + pow(h, 2)); // menghitung panjang sisi miring
   				double keliling = b1 + b2 + 2 * sisi_miring; // menghitung keliling
   				cout << "Keliling trapesium adalah: " << keliling << endl;
     
			} else {
				cout << "Pilihan tidak ditemukan!";
			}
			
					string c = "y";
			    	string coba;
			    	cout << endl;
			    	cout << "||==========================================================||\n";
					cout << "|| ingin mencoba lagi ? (tekan 'y' jika ingin mencoba lagi) ||\n";
					cout << "||==========================================================||\n";
					cin >> coba;
					if (coba == c){
						goto awal;
					}  
			
			
		}
			
			
		
		else {

		}
		
}	
		
	
		

//MATRIKS
// ranah fitur 5 ==========================================================================================================================
void filter_5(){

	cout << "\t\t\t| MATRIKS | " << endl << endl;
	cout << "||======================================================================================================||\n";
	cout << "||-Matriks adalah sekumpulan bilangan yang disusun berdasarkan baris dan kolom, 			||\n";
	cout << "|| serta ditempatkan di dalam tanda kurung								||\n";
	cout << "||-Suatu matriks diberi nama dengan menggunakan huruf kapital seperti A, B, C, dan seterusnya, 		||\n";
	cout << "|| sedangkan anggotanya dinyatakan dengan huruf kecil.							||\n";
	cout << "||-Fungsi Matriks adalah Menyelesaikan masalah matematika, seperti persamaan linear, 			||\n";
	cout << "|| transformasi linear, dan lain-lain. 									||\n";
	cout << "||-Matriks dapat dimanipulasi (tambah, kurang, kali, bagi) dalam mengolah data.				||\n";
	cout << "||======================================================================================================||\n";
	cout << endl;
	cout << "\t||Ingin mencoba perkalian Matriks?						||\n";
	cout << "\t||ketik 'y' jika ingin mencobanya, ketik apa saja jika tak ingin mencobanya	||\n";
	string ril5 = "y";
	string coba5;
	cin >> coba5;
	if(cin.fail()){
		system("CLS");
		cout << "\t !! perintah tidak valid !! \n";
		cin.clear();
		cin.ignore();
		} else if (coba5 == ril5) {
			awal :
			int pilih5;
			cout << endl;
			cout << "1. Matriks 2x2\n";
			cout << "2. Matriks 3x3\n";
			cout << "Ingin matriks apa?\n";
				cin >> pilih5;
			if(cin.fail()){
				system("CLS");
				cout << "\t !! perintah tidak valid !! \n";
		    cin.clear();
			cin.ignore();
			} else if (pilih5 ==1){
				
					cout << "Matriks 2x2" << endl << endl;
					 int matriks1[2][2], matriks2[2][2], hasil[2][2];
		    
				    		// Input matriks pertama
					cout << "Masukkan elemen matriks pertama:\n";
				    for (int i = 0; i < 2; i++) {
				        for (int j = 0; j < 2; j++) {
				            cout << "Elemen matriks[" << i+1 << "][" << j+1 << "]: ";
				            cin >> matriks1[i][j];
				        }
				    }
				    
				    // Input matriks kedua
				    cout << "\nMasukkan elemen matriks kedua:\n";
				    for (int i = 0; i < 2; i++) {
				        for (int j = 0; j < 2; j++) {
				            cout << "Elemen matriks[" << i+1 << "][" << j+1 << "]: ";
				            cin >> matriks2[i][j];
				        }
				    }
				    
				    // Perkalian matriks
				    for (int i = 0; i < 2; i++) {
				        for (int j = 0; j < 2; j++) {
				            hasil[i][j] = 0;
				            for (int k = 0; k < 2; k++) {
				                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
				            }
				        }
				    }
				    
				    // Cetak hasil perkalian matriks
				    cout << "\nHasil perkalian matriks:\n";
				    for (int i = 0; i < 2; i++) {
				        for (int j = 0; j < 2; j++) {
				            cout << hasil[i][j] << " ";
				        }
				        cout << endl;
				    }
				    
			} else if (pilih5 ==2){
				
						int matriksP[3][3];
					    int matriksQ[3][3];
					    int hasil[3][3];
					    int a,b;
						
						//menampilkan si matriksnya
						cout << "Masukkan Matriks 3x3 nya\n";
						cout << "=====================================\n";
						for(a=0;a<3;a++){
							for(b=0;b<3;b++){
							cout << "Elemen matriks[" << a+1 << "][" << b+1 << "]: ";
				            cin >> matriksP[a][b];
							}
							
						}
						cout << endl;
						for(a=0;a<3;a++){
							for(b=0;b<3;b++){
							cout << "Elemen matriks[" << a+1 << "][" << b+1 << "]: ";
				            cin >> matriksQ[a][b];
							}
							
						}
						cout << endl;
					
					    //penjumlahan matriksnya
					    for(a = 0; a < 3; ++a) {
					        for(b = 0; b < 3; ++b) {
					            int jumlah = 0;
					            for(int eee = 0; eee < 3; eee++) {
					                jumlah += matriksP[a][eee] * matriksQ[eee][b];
					            }
					            hasil[a][b] = jumlah;
					        }
					    }
					    
					    cout << "hasil dari perkalian kedua matriks 3x3  :" << endl;
					    for(a = 0; a < 3; ++a) {
					        for(int b = 0; b < 3; ++b) {
					            cout << " " << hasil[a][b];
					        }
					        cout << endl;
					    }
				
			} else {
				cout << "Pilihan tidak ditemukan";
			}
					string c = "y";
			    	string coba;
			    	cout << endl;
			    	cout << "||==========================================================||\n";
					cout << "|| ingin mencoba lagi ? (tekan 'y' jika ingin mencoba lagi) ||\n";
					cout << "||==========================================================||\n";
					cin >> coba;
					if (coba == c){
						system("CLS");
						goto awal;
					}  
	
				
	} 
	else {
		
	}
			
}

//BANGUN RUANG
// ranah fitur 6 ==========================================================================================================================


double luas_segitiga(double sisi) {
    return (sqrt(3) / 4) * pow(sisi, 2);
}

double Volum(double sisi, double tinggi) {
    double luasAlas = luas_segitiga(sisi);
    return luasAlas * tinggi;
}

double luas_permukaan(double sisi, double tinggi) {
    double luasAlas = luas_segitiga(sisi);
    double luasTutup = luasAlas;
    double luasSelimut = 3 * sisi * tinggi;
    return 2 * luasAlas + luasTutup + luasSelimut;
}

void filter_6(){
	float phi = 3.14;
	cout << "\t\t\t|BANGUN RUANG|" << endl << endl;
	cout << "||======================================================================================================||\n";
	cout << "||-Bangun ruang merupakan salah satu objek matematika yang mempelajari mengenai bangun tiga dimensi	||\n";
	cout << "||-Bangun tiga dimensi merupakan bangun yang memiliki volume (isi)					||\n";
	cout << "||-Bangun ruang memiliki beraneka ragam bentuk serta banyak diterapkan dalam kehidupan sehari-hari	||\n";
	cout << "||======================================================================================================||\n";
	cout << endl;
	cout << "\t||Ingin Mencoba perhitungan Bangun Ruang?					||\n";
	cout << "\t||ketik 'y' jika ingin mencobanya, ketik apa saja jika tak ingin mencobanya	||\n";
	cout << endl;
	string ril6 = "y";
	
	string coba6;
	cin >> coba6;
	if(cin.fail()){
		system("CLS");
		cout << "\t !! perintah tidak valid !! \n";
		cin.clear();
		cin.ignore();
	} else if (coba6 == ril6) {
		awal :
		int pilih6;
		system("CLS");
		cout << "Jenis-jenis bangun ruang" << endl;
		cout << "1. Tabung\n2. Kubus/Balok\n3. Kerucut\n4. Prisma\n5. Limas\n";
		cout << "Ingin memilih bangun ruang apa?" << endl;		
		cin>> pilih6;
		if(cin.fail()){
			system("CLS");
			cout << "\t !! perintah tidak valid !! \n";
		    cin.clear();
			cin.ignore();
			}
			
		else if(pilih6 == 1){
			system("CLS");
			cout << "  ******\n";
		    cout << "**********\n";
		    cout << "**********\n";
		    cout << "| ****** |\n";
		    cout << "|        |\n";
		    cout << "|        |\n";
		    cout << "|        |\n";
		    cout << "|        |\n";
		    cout << "|        |\n";
		    cout << "|        |\n";
		    cout << "|        |\n";
		    cout << "|        |\n";
		    cout << "| ****** |\n";
		    cout << "**********\n";
		    cout << "**********\n";
		    cout << "  ****** \n";
		    cout << endl;
		    float jari, tinggi;
		    cout << "Volume dari Tabung adalah phi (3.14 atau 22/7) x jari-jari kuadrat x tinggi\n";
		    cout << "Luas dari tabung adalah 2 x phi x jari-jari x (jari-jari + tinggi)\n";
		    cout << "----------------------------\n";
		    cout << "Masukkan jari-jari tabungnya : "; cin >> jari;
		    cout << "masukkan tinggi tabung : "; cin >> tinggi;
			cout << "----------------------------\n";	
			cout << "Volume tabung adalah : " << phi * pow(jari,2) * tinggi << endl;
			cout << "Luas permukaan Tabung adalah : " << 2 * phi * jari * (jari+tinggi) << endl;	    
		    
		}
		
		else if (pilih6 == 2){
			system("CLS");
			cout << "   *****************\n";
			cout << "  *               *|\n";
			cout << " *               * |\n";
			cout << "*****************  |\n";
			cout << "|               |  |\n";
			cout << "|               |  |\n";
			cout << "|               |  |\n"; 
			cout << "|               |  *\n";
			cout << "|               | *\n";
			cout << "****************\n";
			cout << endl;
			float panjang, lebar, tinggi;
			cout << "Volume dari Kubus/Balok adalah panjang x lebar x tinggi\n";
			cout << "Luas permukaan Kubus adalah 6 x rusuk kuadrat\n";
			cout << "Luas permukaan balok adalah 2 x (pl + pt + lt)\n";
			cout << "----------------------------\n";
			cout << "Masukkan panjang : "; cin >> panjang;
			cout << "Masukkan Lebar : "; cin >> lebar;
			cout << "Masukkan Tinggi : "; cin >> tinggi;
			cout << "----------------------------\n";		
			if(panjang == lebar == tinggi){
				cout << "Volume dari Kubus adalah : " << panjang * lebar * tinggi << endl;				
				cout << "Luas permukaan Kubus adalah : " << 6 * panjang * lebar * tinggi << endl;
			} else {
				cout << "Volume dari Balok adalah : " << panjang * lebar * tinggi << endl;
				cout << "Luas Permukaan balok adalah : " << 2 *(panjang*lebar + panjang*tinggi + lebar*tinggi) << endl;
			}
			
		}
		
		else if (pilih6 == 3){
			system("CLS");
			cout << "         *\n";
		    cout << "        * *\n";
		    cout << "       *   *\n";
		    cout << "      *     *\n";
		    cout << "     *       *\n";
		    cout << "    *         *\n";
		    cout << "   *           *\n";
		    cout << "  *             *\n";
		    cout << " *               *\n";
		    cout << "*                 *\n";
		    cout << "********************\n";
		    cout << "  ****************\n";
		    cout << "   *************\n";
			cout << endl;
			double jari, tinggi, selimut, sisi_miring;
			cout << "Volume dari Kerucut adalah 1/3 x phi x jari-jari kuadrat x tinggi\n";
			cout << "Luas permukaan Kerucut adalah (phi x jari-jari x sisi miring) + (phi x jari-jari kuadrat)\n";
			cout << "Luas selimut kerucut adalah (phi x jari-jari x sisi miring)\n";
			cout << "----------------------------\n";
			cout << "Masukkan jari-jari kerucut : "; cin >> jari;
			cout << "Masukkan tinggi kerucut : "; cin >> tinggi;
			cout << "----------------------------\n";
			sisi_miring = sqrt(pow(jari, 2) + pow(tinggi, 2));
			selimut = phi * jari * sisi_miring;
			cout << "Volume dari kerucut : " << (phi * jari*jari * tinggi) / 3 << endl;
			cout << "Luas Permukaan Kerucut : " << selimut + (phi * pow(jari,2)) << endl;
			cout << "Luas Selimut Kerucut : " << selimut << endl; 
			
		}
		else if (pilih6 == 4){
			system("CLS");
			cout << "         *\n";
		    cout << "        *|*\n";
		    cout << "       * | *\n";
		    cout << "      *  |  *\n";
		    cout << "     *   |   *\n";
		    cout << "    ***********\n";
		    cout << "    |    |    |\n";
		    cout << "    |    |    |\n";
		    cout << "    |    |    |\n";
		    cout << "    |    |    |\n";
		    cout << "    |    *    |\n";
		    cout << "    |   * *   |\n";
		    cout << "    |  *   *  |\n";
		    cout << "    | *     * |\n";
		    cout << "    |*       *|\n";
		    cout << "    ***********\n";	
			cout << endl;
		    double sisi, tinggi;
		    cout << "Volume dan Luas Permukaan Prisma Segitiga Sama Sisi\n";
		    cout << "-------------------------------------------------\n";
		    cout << "Masukkan panjang sisi segitiga: ";
		    cin >> sisi;
		    cout << "Masukkan tinggi prisma: ";
		    cin >> tinggi;
		    cout << "-------------------------------------------------\n";
		    double volume = Volum(sisi, tinggi);
		    double luas  = luas_permukaan(sisi, tinggi);
		    cout << "Volume Prisma Segitiga: " << volume << endl;
		    cout << "Luas Permukaan Prisma Segitiga: " << luas  << endl;
					
		} else if (pilih6 == 5){
			system("CLS");
			cout << "           *\n";   
			cout << "          * *\n";    
			cout << "         * * *\n";    
			cout << "        *   *  *\n";
			cout << "       *     *  *\n";
			cout << "      *       *  *\n";    
			cout << "     *         *  *\n";
			cout << "    *           *  *\n" ; 
			cout << "   ******************\n";
			cout << "  *              * *\n";
			cout << " *                * \n";
			cout << "******************  \n";
			cout << endl;
			int rusuk, tinggi, tinggi_segitiga;
			cout << "Volume dari Limas Segiempat adalah 1/3 x luas alas x tinggi \n";
			cout << "Luas permukaan Limas Segiempat adalah Luas alas dijumlahkan semua \n";
			cout << "----------------------------\n";
			cout << "Masukkan panjang alas Limas : "; cin >> rusuk;
			cout << "Masukkan tinggi Limas : "; cin >> tinggi;
			cout << "----------------------------\n";
			tinggi_segitiga = sqrt(pow(tinggi, 2) + pow((rusuk/2),2));
			cout << "Volume Limas Segiempat : " <<	(pow(rusuk, 2) * tinggi)/3 << endl;
			cout << "Luas permukaan Limas Segiempat : " << pow(rusuk,2) + 4* (rusuk * tinggi_segitiga /2);
		
			
		}else {
			cout << "Pilihan tidak ditemukan!";
		}
					string c = "y";
			    	string coba;
			    	cout << endl;
			    	cout << "||==========================================================||\n";
					cout << "|| ingin mencoba lagi ? (tekan 'y' jika ingin mencoba lagi) ||\n";
					cout << "||==========================================================||\n";
					cin >> coba;
					if (coba == c){
						goto awal;
					}  	
	}
	else {
			
		}  
		



}

//STATISTIKA
// ranah fitur 7 ==========================================================================================================================
struct statis{
	int top, max;
};

bool isEmpty(int top){
    if(top == 0){
        return true;
    } else {
        return false;
    }
}

bool isFull(int top, int max){
    if(top >= max){
        return true;
    } else {
        return false;
    }
}

void display(int data[],int top,int max){
    if(!isEmpty(top)){
        cout << "Data Tersimpan :" << endl;
        for(int a =0; a< top; a++){
            cout << a+1 << ". " << data[a] << endl;
        }
    } else {
        cout << "Data tidak tersedia" << endl;
    }
    
    if(isFull(top,max)){
        cout << "stack Penuh" << endl;
    }
    cout << endl;
}

void push(int data[],int&top, int max){
    if(!isFull(top,max)){
        cout << "Masukkan Data : ";
        cin >> data[top];
        top++;
    }
}

void pop(int &top){
    if(!isEmpty(top)){
        top--;
    } else {
    	cout << "stack kosong" << endl;
	}
}

void rata(int data[], int top){
    if(!isEmpty(top)){
        float total = 0;
        for(int a =0; a<top; a++){
            total += data[a];
        }
        cout << "Nilai rata-rata: " << total / top << endl;
    }
}

void modus(int data[], int top){
    if(!isEmpty(top)){
        sort(data, data + top);
        int counter = 1;
        int max_count = 0;
        vector<int> mode; // ngebuat vector bernama mode untuk nyimpan nilai modus ke dalam 
        for (int i = 1; i < top; i++){
            if (data[i] == data[i-1]){
                counter++;
            } else {
                if (counter >= max_count){
                    if (counter > max_count) {
                        mode.clear(); // ngehapus nilai vector mode kalau ada modus yang lebih besar
                    }
                    max_count = counter;
                    mode.push_back(data[i-1]); // nyimpan nilai modus ke dalam vector
                }
                counter = 1;
            }
        }
        if (counter >= max_count){
            if (counter > max_count) {
                mode.clear(); // ngebersihin vector kalau ada modus yang lebih besar
            }
            max_count = counter;
            mode.push_back(data[top-1]); // nyimpan nilai modus
        }
        if (max_count == 1) {
            cout << "Tidak ada modus" << endl;
        } else {
            cout << "Nilai modus: ";
            for (int i = 0; i < mode.size(); i++) {
                cout << mode[i] << " "; // nampilin modus dalam vector
            }
            cout << endl;
        }
    }
}


void median(int data[], int top){
    if(!isEmpty(top)){
        sort(data, data + top);
        int mid = top / 2;
        if (top % 2 == 0){
            cout << "Nilai median: " << (data[mid-1] + data[mid]) / 2 << endl;
        } else {
            cout << "Nilai median: " << data[mid] << endl;
        }
    }
}

void find(int data[], int top) {
    if (!isEmpty(top)) {
        int target;
        cout << "Masukkan angka yang ingin dicari: ";
        cin >> target;

        bool ketemu = false;
        cout << "Angka ditemukan pada indeks: ";
        for (int i = 0; i < top; i++) {
            if (data[i] == target) {
                ketemu = true;
                cout << i << " ";
            }
        }

        if (!ketemu) {
            cout << "Angka tidak ditemukan" << endl;
        }
        cout << endl;
    }
}



void filter_7(){
	cout << "\t\t\t|STATISTIKA|" << endl << endl;
	cout << "||======================================================================================================||\n";
	cout << "||-Statistika adalah metode ilmiah untuk mengelola data berdasarkan angka dan menginterpretasikannya	||\n";
	cout << "||-Statistika adalah sebuah ilmu yang mempelajari bagaimana cara merencanakan, mengumpulkan, 		||\n";
	cout << "|| menganalisis, lalu menginterpretasikan, dan akhirnya mempresentasikan data. 				||\n";
	cout << "||-Singkatnya, statistika adalah ilmu yang bersangkutan dengan suatu data				||\n";
	cout << "||======================================================================================================||\n";
	cout << endl;
   	cout <<"\t||ingin mencoba operasi perhitungan Statistika?					||" << endl;
	cout << "\t||ketik 'y' jika ingin mencobanya, ketik apa saja jika tak ingin mencobanya	||\n";
	string ril = "y";
	string pilih7;
	cin >>pilih7;
	
	if(cin.fail()){
		system("CLS");
		cout << "\t !! perintah tidak valid !! \n";
    cin.clear();
	cin.ignore();
	} else if (pilih7 == ril){
		awal :
		    statis sta;
		    int max;
		    cout << "ukuran stacknya ingin berapa : ";
		    cin >> max;
		    if(cin.fail()){
		        cin.ignore();
		        cin.clear();
				Keluar();
		    }
		
		    int data[max];
		    int top = 0;
		    int pil;
		    int isi;
		
		    stack:
		        system("cls");
		        display(data,top,max);
		        cout << "Menu utama\n1. Push\n2. Pop\n3. Rata-rata, Modus, Median (kembali ke menu)\n4. Find\n\nPilih: ";
		        cin >> pil;
		        if(!cin){
		            cin.clear();
		            cin.ignore();
		            goto stack;
		        }
		        else if(pil == 1){
		            system("cls");
		            push(data, top, max);
		            goto stack;
		        } else if (pil == 2){
		            system("cls");
		            pop(top);
		            goto stack;
		        } else if (pil == 3){
		
		            rata(data, top);
		            if(!isEmpty(top)){
		                modus(data, top);  
		                median(data, top);
		            } else {
		                cout << "Belum mencapai data maksimum" << endl;
		
		            }
		        } else if (pil == 4) {
		
		            find(data, top);
		
		        }  else {
		            goto stack;
		        }
		   			string c = "y";
			    	string coba;
			    	cout << endl;
			    	cout << "||==========================================================||\n";
					cout << "|| ingin mencoba lagi ? (tekan 'y' jika ingin mencoba lagi) ||\n";
					cout << "||==========================================================||\n";
					cin >> coba;
					if (coba == c){
						goto awal;
					}  	     
		        
	} 
	else {
		
	}
}

//GRAF
// ranah fitur 8 ==========================================================================================================================
struct Edge {
    int src, dest, weight;
};

bool compareSisi(Edge e1, Edge e2) {
    return e1.weight < e2.weight;
}

int finds(int parent[], int i) {
    if (parent[i] == -1)
        return i;
    return finds(parent, parent[i]);
}

void Union(int parent[], int x, int y) {
    int xset = finds(parent, x);
    int yset = finds(parent, y);
    parent[xset] = yset;
}

int kruskal(Edge edges[], int V, int E) {
	//di sortir
    sort(edges, edges + E, compareSisi);

    int *parent = new int[V];
    //diubah single element
    for (int i = 0; i < V; i++)
        parent[i] = -1;

    int numEdges = 0, cost = 0;
    
    for (int i = 0; i < E && numEdges < V - 1; i++) {
        int x = finds(parent, edges[i].src);
        int y = finds(parent, edges[i].dest);

        if (x != y) {
            cost += edges[i].weight;
            Union(parent, x, y);
            numEdges++;

            cout << "Jalan yang harus dipilih adalah (" << edges[i].src << " , " << edges[i].dest << ") dengan jarak " << edges[i].weight << " Kilometer" << endl;
        }
    }

    return cost;
}

void grap(){
	awal :
		int V; // Jumlah simpul 4
	    cout << "Ada berapa Tempat (V) : ";
	    cin >> V;
	    	if(cin.fail()){
			cin.ignore();
			cin.clear();
			}
	    int E; // Jumlah sisi 5
	    cout << "Ada berapa jalan (E) : ";
	    cin >> E;
			if(cin.fail()){
			cin.ignore();
			cin.clear();	
			}	
	    
	    double kecepatan;
	    cout << "Kecepatan bergerak (Km/jam) : ";
	    cin >> kecepatan;
	    	if(cin.fail()){
			cin.ignore();
			cin.clear();	
			}
	    
	    Edge edges[E];
	    // Menambahkan sisi-sisi
	//    edges[0].src = 0; edges[0].dest = 1; edges[0].weight = 10;
	//    edges[1].src = 0; edges[1].dest = 2; edges[1].weight = 6;
	//    edges[2].src = 0; edges[2].dest = 3; edges[2].weight = 5;
	//    edges[3].src = 1; edges[3].dest = 3; edges[3].weight = 15;
	//    edges[4].src = 2; edges[4].dest = 3; edges[4].weight = 4;
		
		for(int s=0; s<E; s++){
			cout << "-----------------------------\n";
			cout << "Skenario Perjalanan ["<<s+1<<"]";
			cout <<" Dari tempat : ";
			cin>> edges[s].src;
			
			if(!cin){
			cin.ignore();
			cin.clear();	
			}		
				
			cout <<" Ke Tempat :";
			cin>> edges[s].dest;
			
			if(cin.fail()){
			cin.ignore();
			cin.clear();	
			}
			
			cout << "Jaraknya (kilometer) : ";
			cin>> edges[s].weight;
			
			if(cin.fail()){
			cin.ignore();
			cin.clear();	
			}

		}
		cout << endl;
		cout << "====================================================================\n";
		for(int a=0; a<E; a++){
			cout << "Tempat (" << edges[a].src << " , " << edges[a].dest << " ) " << "memiliki jarak : " << edges[a].weight << " Kilometer"<< endl;
		}
		
		cout << endl;
		cout << "====================================================================\n";
		cout << "Menurut Algoritma Kruskal.." << endl;
	    int cost = kruskal(edges, V, E);
	    cout << endl;
		cout << "====================================================================\n";    
	    cout << "Berkaca dari hal tersebut" << endl;
	    cout << "Maka jarak minimum agar menghampiri ke-" << V <<" tempat tersebut adalah : " << cost << " Kilometer" << endl;
	    //t = s / v
	    double waktu = cost/kecepatan;
	    cout << "Jika kecepatan bergerak sekitar : " << kecepatan << " Km/Jam" << " maka waktu yang bisa ditempuh adalah : " << waktu << " Jam atau " << waktu*60 << " Menit\n";
    
    				string c = "y";
			    	string coba;
			    	cout << endl;
			    	cout << "||==========================================================||\n";
					cout << "|| ingin mencoba lagi ? (tekan 'y' jika ingin mencoba lagi) ||\n";
					cout << "||==========================================================||\n";
					cin >> coba;
					if (coba == c){
						system("CLS");
						goto awal;
					}  	
    
    

}

void filter_8(){

    cout <<"\t\t\t| GRAPH / GRAF |" << endl << endl;
    cout <<"||======================================================================================================||\n";
    cout <<"||-Graf merupakan sekumpulan objek terstruktur di mana beberapa pasangan objek                          ||\n"; 
    cout <<"|| mempunyai hubungan ataupun keterkaitan tertentu.                                                     ||\n";
    cout <<"||-Dalam bahasa sehari-hari, sebuah graf adalah himpunan dari objek-objek yang dinamakan titik, simpul, ||\n";
    cout <<"|| atau sudut dihubungkan oleh penghubung yang dinamakan garis atau sisi.                               ||\n"; 
    cout <<"||-Dalam graf yang memenuhi syarat, di mana biasanya tidak berarah,                                     ||\n";
    cout <<"|| sebuah garis dari titik A ke titik B dianggap sama dengan garis dari titik B ke titik A.             ||\n";
    cout <<"||======================================================================================================||\n";
	cout << endl;
	cout << endl;
   	cout <<"\t||ingin mencoba menggunakan graf?						||" << endl;
	cout << "\t||ketik 'y' jika ingin mencobanya, ketik apa saja jika tak ingin mencobanya	||\n";
	string ril = "y";
	string pilih8;
	cin >>pilih8;
	
	if(cin.fail()){
		system("CLS");
		cout << "\t !! perintah tidak valid !! \n";
    cin.clear();
	cin.ignore();

	} else if (pilih8 == ril){
		system("CLS");
		cout << "||==============================================================================================||\n";
		cout << "|| Skenario harus menghampiri semua tempat yang telah direncanakan				||\n";
		cout << "|| Fitur Aplikasi MATPEMA yang satu ini berguna untuk mencari kilometer paling minimum		||\n";
		cout << "||==============================================================================================||\n";
		cout << endl;
		grap();
	} else {
		
	}
}








void menu(){
	cout << "\t||==============================================||\n";
	cout << "\t||                                              ||\n";
	cout << "\t||      Selamat Datang di Aplikasi Kelompok 1   ||\n";
	cout << "\t||           Matematika Untuk Pemula            ||\n";
	cout << "\t||                   MATPEMA                    ||\n";
	cout << "\t||                                              ||\n";
	cout << "\t||==============================================||\n";
	cout << endl;
	cout << "\t (1) Sistem Bilangan Real \n";	
	cout << "\t (2) Himpunan \n";
	cout << "\t (3) Persamaan dan Pertidaksamaan Linear \n";
	cout << "\t (4) Bangun datar \n";
	cout << "\t (5) Matriks \n";
	cout << "\t (6) Bangun Ruang \n";
	cout << "\t (7) Statistika Sederhana \n";
	cout << "\t (8) Graf \n";
	cout << "\t (9) Ketik untuk keluar dari aplikasi MATPEMA \n";
}
	



void log(){

	string username = "admin";
	string password = "admin";
	string inputuser,inputpass,konfirmasi;
	int filter;
	char ch = ' ';
	bool berhasilMasuk = false;
	int coba =2;
    	cout<<"\t||================================================||\n";
        cout<<"\t||                 MATPEMA LOGIN                  ||\n";
        cout<<"\t||================================================||\n";		 	

    do {

        cout << "\t||Masukkan Username : ";
        cin >> inputuser;
        cout << "\t||Masukkan Password : ";

        inputpass = "";
        ch = getch();
        while (ch != 13) {
            if (ch == '\b') {
                if (!inputpass.empty()) {
                    cout << "\b \b";
                    inputpass = inputpass.substr(0, inputpass.size() - 1);
                }
            } else {
                inputpass.push_back(ch);
                cout << "*";
            }
            ch = getch();
        }
        
        if (inputuser == username && inputpass == password) {
        	
			berhasilMasuk = true;
            system("CLS");
            menu();
		 do {

            system("CLS");
            menu();
            cout<<"\n Pilih fitur  : ";
            cin>>filter;
            
            if(cin.fail()){
            	system("CLS");
            	cout << "\t !! 	perintah tidak valid 		!! \n";
			    cin.clear();
				cin.ignore();
			}
            else if (filter == 1)
            {
                system("CLS");
                filter_1();
            }else if (filter == 2){
                system("CLS");
                filter_2();
            }else if (filter == 3){
                system("CLS");
                filter_3();
            }else if (filter == 4){
            	system("CLS");
            	filter_4();
			}else if (filter == 5){
				system("CLS");
				filter_5();
			}else if (filter == 6){
				system("CLS");
				filter_6();
			}else if (filter == 7){
				system("CLS");
				filter_7();
			} 
			else if (filter == 8){
				system("CLS");
				filter_8();
			} 

			else if (filter == 9){
				Keluar();			
			}
			else {
                cout<<"||================================================||\n";
                cout<<"|| Maaf Fitur Tidak Ditemukan                     ||\n";
                cout<<"||================================================||\n";
            	}
            
            cout << endl << endl;
            cout << "----------------------------------------------------------------------------------------------------\n";
            cout<<"||================================================||\n";
            cout<<"|| (tekan 'y' untuk kembali ke menu)              ||\n";            
            cout<<"||================================================||\n";

            cin>> konfirmasi;
            
            } while (konfirmasi == "y");
            system("CLS");
            cout<<"||================================================||\n";
            cout<<"|| Anda kembali ke Halaman Login                  ||\n";
            cout<<"||================================================||\n";

        	 
        	
        	
        } else if (coba > 0 ) {
		
            cout<<"\n\n\t||Username atau Password Salah! Silahkan Coba Lagi\n";
            cout<<"\t||Kesempatan Anda Tinggal "<<coba--<<"x Lagi!\n\n";
        
       } else {
	   
            cout<<"\tAnda Tidak Diperkenankan Masuk!\n";
            break;
 		}
     
	}while (coba > -1);

		

}

int main (){
	cout << "||---------------------------------- MATPEMA -----------------------------------||\n";
	cout << "||==============================================================================||\n";
	cout << "|| 	Matpema atau Matematika Untuk Pemula merupakan sebuah aplikasi		||\n";
	cout << "||   Non-GUI dengan basis pemrograman C++, aplikasi ini dirancang untuk		||\n";
	cout << "||   mereka yang kesulitan terhadap beberapa materi matematika sederhana.	||\n";
	cout << "|| aplikasi ini secara singkatnya adalah kumpulan beberapa rumus matematika.	||\n";
	cout << "||==============================================================================||\n";
	cout << endl << endl;
	
	log();
}
