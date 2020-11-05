#include <iostream>
#include <cstdlib>
#include <bitset>

using namespace std;
int main() { 
int a, b;
cout << "podaj a" << endl;
cin >> a;
cout << "podaj b" << endl;
cin >> b;

cout << bitset<8>(a|b).to_string() <<endl;
cout << bitset<8>(a^b).to_string() <<endl;
cout << bitset<8>(a&b).to_string() <<endl;
cout << bitset<8>(a<<=b).to_string() <<endl;
cout << bitset<8>(a>>=b).to_string();
return 0;
}
