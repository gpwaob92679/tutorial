# include <iostream>
# include <string>
using namespace std;

int subtract(int a, int b) {
    return a - b ;
}

int main() {
    string input ;
    getline(cin, input) ;
    cout << "hello " << input ;
    cout << subtract(5, 6) ;
    return 0 ;
}