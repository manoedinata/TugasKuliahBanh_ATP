#include <iostream>

using namespace std;

int main() {
  string nama;
  int umur;

  cout << "Ketikkan nama dan umur anda." << endl;
  cout << "Nama : ";
  getline(cin, nama);  // Membaca input nama termasuk spasi

  cout << "Umur : ";
  cin >> umur;
  cout << "Hai! Selamat datang sdr/i " << nama << " di bioskop XXI.";
}
