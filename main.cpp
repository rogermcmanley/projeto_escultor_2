#include <iostream>
#include <fstream>
#include <string>
#include "Voxel.h"
#include "Sculptor.h"
#include "interpretador.h"
#include <vector>
#include "putvoxel.h"
#include "putbox.h"
#include "putsphere.h"
#include "putellipsoid.h"
#include "cutvoxel.h"
#include "cutbox.h"
#include "cutsphere.h"
#include "cutellipsoid.h"
#include "figurageometrica.h"
using namespace std;

int main()
{
    Sculptor *sx;
    Interpretador anl;
    vector<FiguraGeometrica*> fig;

    fig = anl.anl("projeto/PORCO.txt"); 

    sx = new Sculptor(anl.getdimx(),anl.getdimy(),anl.getdimz());

    for (size_t x=0; x<fig.size(); x++){
        fig[x] -> draw(*sx);
    }

    sx->writeOFF((char*)"PORCO.off"); // cria o arquivo .off

    for (size_t x=0; x<fig.size(); x++){
        delete fig[x];
    }
    delete sx;
}