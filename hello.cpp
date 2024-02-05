# include <iostream>
# include <string>
using namespace std;

int add(int a, int b) {
    return a + b ;
}
int subtract(int a, int b) {
    return a - b ;
}
int product(int a, int b) {
    return a * b ;
}

int main() {
    string input ;
    getline(cin, input) ;
    cout << "hello " << input << endl ;
    cout << add(5, 6) << endl ;
    cout << subtract(5, 6) << endl ;
    cout << product(5, 6) << endl ;
    return 0 ;
}