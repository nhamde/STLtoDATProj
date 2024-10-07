#include "reader.h"
#include "data.h"
#include <iostream>
#include "collector.h"
#include "shapewriter.h"
using namespace std;

int main()
{
    Reader reader;
    ShapeWriter writer;
    Collector collector;
    Data* D;
    D = new Data();
    reader.readData("cube-ascii.stl", D);
    collector.processData(D->rawData, D);
    for (int i = 0; i < D->trs.size(); i++) {
        D->trs[i]->displayPts();
        cout << endl;
    }
    writer.write(*D, "output.dat");
}