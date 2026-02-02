#include <iostream>
using namespace std;

int n[5], v[5];
float media;

void soma() {
    int soma = 0;

    for(int i = 0; i < 5; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> n[i];

        v[i] = n[i];
        soma = soma + v[i];
    }

    media = soma / 5.0;
    cout << "Media: " << media << endl;
}

int main() {
    soma();
}
