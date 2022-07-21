#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "Sculptor.h"

// Classe abstrata
class FiguraGeometrica
{
protected:
    float r,g,b,a; 
public:
    virtual void draw(Sculptor &t)=0;
    virtual ~FiguraGeometrica(){};
};

#endif // FIGURAGEOMETRICA_H