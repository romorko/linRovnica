//
// Created by roman on 21. 10. 2020.
//

#ifndef LINROVNICA_LINROVNICA_H
#define LINROVNICA_LINROVNICA_H

class Rovnica
{
private:
    float koefA;
    float koefB;
public:
    Rovnica();
    Rovnica(float mojeA,float mojeB);
    Rovnica(float mojKoef, char ktory='a');
    void vypisRovnicu() const;
    float vratKoren() const;
    float getKoefA() const;
    void setKoefA(float koefA);
    float getKoefB() const;
    void setKoefB(float koefB);
};



#endif //LINROVNICA_LINROVNICA_H
