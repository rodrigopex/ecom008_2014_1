#include "veiculo.h"
#include "carro.h"

#include <iostream>
using namespace std;

int main() {
    Carro *c = new Carro(1349);
    cout << c->rodas() << endl;
    Veiculo *v = c;
    Veiculo *v1 = new Veiculo(150);
    //cout << v->cilindradas() << endl;
    //Veiculo * v1 = new Veiculo(8);
    //Carro *c1 = v1;
    c->ligar();
    v->ligar();
}
