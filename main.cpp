#include <iostream>
using namespace std;

int main() {
    int  a=1, b=1, c=0, n=0;
    cin >> n;
    cout << a << endl << b << endl;
    for ( int i =2; i <=n ; i++ ) {
        c = a+b ;
        a=b;
        b=c;
        if (c<=n)
        cout << c << endl;
    }
    return 0;
}
