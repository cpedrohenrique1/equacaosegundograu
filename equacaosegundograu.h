#ifndef EQUACAOSEGUNDOGRAU_H_
#define EQUACAOSEGUNDOGRAU_H_

class Equacaosegundograu
{
private:
    int a, b, c;

public:
    Equacaosegundograu();
    void setA(int);
    void setB(int);
    void setC(int);
    bool delta();
    double calcularx1();
    double calcularx2();
};

Equacaosegundograu::Equacaosegundograu()
{
    a = 1;
    b = 1;
    c = 1;
}

void Equacaosegundograu::setA(int aux)
{
    a = aux;
}
void Equacaosegundograu::setB(int aux)
{
    b = aux;
}
void Equacaosegundograu::setC(int aux)
{
    c = aux;
}

bool Equacaosegundograu::delta(){
    if ((b * b) - 4 * a * c < 0){
        return false;
    }else{
        return true;
    }
}

double Equacaosegundograu::calcularx1()
{
    return ((-b+(sqrt((b*b)-4*a*c)))/(2*a));
}
double Equacaosegundograu::calcularx2()
{
    return ((-b-(sqrt((b*b)-4*a*c)))/(2*a));
}

#endif