#include "Reader.h"
#include "Data.h"
#include <iostream>
#include "DataCollector.h"
#include "ShapeWriter.h"
using namespace std;

int main()
{
    Reader Reader;
    DataCollector Collector;
    Data* D;
    ShapeWriter Writer;
    D = new Data();
    Reader.readData("cube-ascii.stl", D);
    Collector.processData(D->rawData, D);
    Writer.write(*D, "output.dat");
}

