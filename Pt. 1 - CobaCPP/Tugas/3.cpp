#include <iostream>

using namespace std;

int main() {
  string nama;
  int umur;
  string alamat;
  int tinggi_badan;
  int berat_badan;

  cout << "Hai! Kenalan yuk." << endl;

  cout << "Nama kamu siapa?      ";
  getline(cin, nama);
  
  cout << "Umur kamu berapa?     ";
  cin >> umur;
  cin.ignore(); // Membersihkan newline character dari buffer setelah getline
  
  cout << "Kamu tinggal dimana?  ";
  getline(cin, alamat);

  cout << "Tinggi badan berapa?  ";
  cin >> tinggi_badan;
  
  cout << "Berat badan berapa?   ";
  cin >> berat_badan;

  cout << endl << endl;
  cout << "Jadi, kamu " << nama << ", umur "
    << umur << " tahun, tinggal di " << alamat
    << ", tinggi badan " << tinggi_badan << " cm, dan berat badan "
    << berat_badan << " kg." << endl;
  cout << "Senang berkenalan denganmu!" << endl;
}
