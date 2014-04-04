#include "veiculo.h"
#include <QDebug>

Veiculo::Veiculo(int rodas)
{
    m_rodas = rodas;
}

int Veiculo::rodas() {
    return m_rodas;
}

void Veiculo::setRodas(int nRodas) {
    m_rodas = nRodas;
}

//void Veiculo::ligar() {
//    qDebug() << "Veiculo ligado!";
//}
