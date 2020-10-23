#include <iostream>
#include "linRovnica.h"

int main()
{
    Rovnica Prva(2);
    Rovnica Druha(3,'b');
    Rovnica Tretia(4,5.f);
    Rovnica Stvrta;
    Prva.vypisRovnicu();
    Druha.vypisRovnicu();
    Tretia.vypisRovnicu();
    Stvrta.vypisRovnicu();

    return 0;
}

Rovnica::Rovnica(float mojKoef, char ktory)
{
    if(ktory=='a')
    {
        koefA=mojKoef;
        std::cout<<"Zadaj b:";
        std::cin>>koefB;
    }
    else
    {
        koefB=mojKoef;
        std::cout<<"Zadaj a:";
        std::cin>>koefA;
    }
}

Rovnica::Rovnica(float mojeA, float mojeB):koefA(mojeA),koefB(mojeB)
{

}

float Rovnica::vratKoren() const
{
    return -koefB/koefA;
}

Rovnica::Rovnica()
{
    std::cout<<"Zadaj a:";
    std::cin>>koefA;
    std::cout<<"Zadaj b:";
    std::cin>>koefB;

}

void Rovnica::vypisRovnicu() const
{
    std::cout<<"Ronica ma tvar: "<<koefA<<"*x"<<((koefB<0)?" ":" + ")<<koefB<<" = 0";
}

float Rovnica::getKoefA() const
{
    return koefA;
}

void Rovnica::setKoefA(float mojkoefA)
{
    Rovnica::koefA = mojkoefA;
}

float Rovnica::getKoefB() const
{
    return koefB;
}

void Rovnica::setKoefB(float mojkoefB)
{
    Rovnica::koefB = mojkoefB;
}
