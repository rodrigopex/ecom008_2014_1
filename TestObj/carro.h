#pragma once

#include "veiculo.h"

class Carro : public Veiculo
{
    int m_cilindradas;
public:
    Carro(int cilindradas, int rodas = 4);
    int cilindradas();
    //void ligar();
};
