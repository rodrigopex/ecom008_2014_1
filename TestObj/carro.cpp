#include "carro.h"
#include <QDebug>

Carro::Carro(int cilindradas, int rodas): Veiculo(rodas) {
    m_cilindradas = cilindradas;
}

int Carro::cilindradas() {
    return m_cilindradas;
}

//void Carro::ligar() {
//    qDebug() << "Carro ligado!";
//}
