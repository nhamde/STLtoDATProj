#include "Reader.h"
#include "Data.h"
#include <iostream>
#include "Triangulation.h"
#include "ShapeWriter.h"
using namespace std;

int main()
{
    Reader Reader;
    Triangulation Triangulator;
    Data* D;
    ShapeWriter Writer;
    D = new Data();
    vector<string>rawData = Reader.readData("cube-ascii.stl", D);
    unordered_map<double, size_t> map;
    Triangulator.processData(rawData, D, map);
    Writer.write(*D, "output.dat");
}