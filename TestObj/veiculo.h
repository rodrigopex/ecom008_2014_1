#pragma once

class Veiculo
{
    int m_rodas;
public:
    Veiculo(int rodas);
    int rodas();
    void setRodas(int nRodas);
    virtual void ligar() = 0;
};

