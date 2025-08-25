// Runtime error

#include <iostream>
using namespace std;
 
int main()
{
    int a=9, b=0, hasil;
   
    // number is divided by 0,
    // so this program abnormally terminates
    cout << "sebelum pembagian dengan 0" << endl;
    hasil = a/b;
    cout << "setelah pembagian dengan 0" << endl;
     
    cout << "hasil = "<< hasil << endl;
}
