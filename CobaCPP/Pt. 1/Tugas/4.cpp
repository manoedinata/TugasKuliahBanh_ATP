#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
  string nama;
  int umur;
  string alamat;
  float tinggi_badan;
  double berat_badan;

  cout << "Hai! Kenalan yuk." << endl;

  cout << "Nama kamu siapa?      ";
  getline(cin, nama);
  
  cout << "Umur kamu berapa?     ";
  cin >> umur;
  cin.ignore(); // Membersihkan newline character dari buffer
  
  cout << "Kamu tinggal dimana?  ";
  getline(cin, alamat);

  cout << "Tinggi badan berapa?  ";
  cin >> tinggi_badan;
  cin.ignore();
  
  cout << "Berat badan berapa?   ";
  cin >> berat_badan;
  cin.ignore();

  // Siapkan output
  char msg[100];
  sprintf(msg, "Jadi, kamu %s, umur %d tahun, tinggal di %s, tinggi badan %.2f cm, dan berat badan %.2f kg.", 
          nama.c_str(), umur, alamat.c_str(), tinggi_badan, berat_badan);

  cout << endl << endl;
  cout << msg << endl;
  cout << "Senang berkenalan denganmu!" << endl;
}
