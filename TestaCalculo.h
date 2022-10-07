#ifndef TESTACALCULO_H_
#define TESTACALCULO_H_
#include "equacaosegundograu.h"

class TestaCalculo
{
private:
    Equacaosegundograu *Objeto = new Equacaosegundograu;

public:
    TestaCalculo();
    ~TestaCalculo();
    void menu();
};

TestaCalculo::TestaCalculo()
{
}

TestaCalculo::~TestaCalculo()
{
    delete Objeto;
}

void TestaCalculo::menu()
{
    int flag;
    int entrada;
    do
    {
        do{
            cout << "insira A: ";
            cin >> entrada;
            Objeto->setA(entrada);

            cout << "insira B: ";
            cin >> entrada;
            Objeto->setB(entrada);

            cout << "insira C: ";
            cin >> entrada;
            Objeto->setC(entrada);

            if (Objeto->delta() == false){
                cout << "Delta negativo, insira novamente\n";
            }
        }while(Objeto->delta() == false);

        cout << "x1 com soma eh: " << Objeto->calcularx1() << "\n";
        cout << "x2 com subtracao eh: " << Objeto->calcularx2() << "\n";

        cout << "Digite 0 para encerrar o programa: ";
        cin >> flag;
    } while (flag != 0);
}

#endif