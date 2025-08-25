// Logical error

#include <iostream>
using namespace std;

int main()
{
    int n = 10;
 
    // logical error : a semicolon after loop
    for(int i = 0; i < n; i++);
    {
       cout << "Hello " ;
    }
    return 0;
}
