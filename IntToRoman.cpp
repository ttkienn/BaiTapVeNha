#include <iostream>
using namespace std;

string intToRoman(int n) {
    string r = "", s[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int v[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    for(int i=0; n>0; i++) while(n>=v[i]) n-=v[i], r+=s[i];
    return r;
}

int main() {
    int n;
    cin >> n;
    cout << intToRoman(n) << endl;
    return 0;
}
