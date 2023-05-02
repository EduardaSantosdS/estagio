#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c = 0;
    bool encontrado = false;
    
    cout << "Digite um número: ";
    cin >> n;
    
    if (n == 0 || n == 1) {
        encontrado = true;
    }
    else {
        while (c < n) {
            c = a + b;
            a = b;
            b = c;
            if (c == n) {
                encontrado = true;
                break;
            }
        }
    }
    
    if (encontrado) {
        cout << n << " pertence à sequência de Fibonacci." << endl;
    }
    else {
        cout << n << " não pertence à sequência de Fibonacci." << endl;
    }
    
    return 0;
}
