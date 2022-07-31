#include <iostream>

using namespace std;

int main() {

    const int light_speed = 299792458;

    int velocidade;
    cout << "Digite sua velocidade, viajante do espaço: ";
    cin >> velocidade;

    if (velocidade >= light_speed) {
        cout << "Sua velocidade é maior ou igual que a velocidade da luz, o que é fisicamente ímpossivel, logo você é um mentiroso.";
    }
    else {
        cout << "Ótimo, abaixo da velocidade da luz, assim como einstein preveu.";
    }

    return 0;
    
    
}