# include <iostream>
# include <string>
using namespace std;

int add(int a, int b) {
    return a + b ;
}

int main() {
    string input ;
    getline(cin, input) ;
    cout << "hello " << input << endl ;
    cout << add(5, 6) ;
    return 0 ;
}