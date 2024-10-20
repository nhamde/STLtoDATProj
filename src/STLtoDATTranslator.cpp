#include <iostream>
#include "STLReader.h"
#include "Triangulation.h"
#include "DatWriter.h"

using namespace std;

int main()
{
    Triangulation tri;
    STLReader Reader;
    Reader.read("E:\\CCTECH\\Translator\\Test Cases\\cube-ascii.stl", tri);
    DatWriter Writer;
    Writer.write("output.dat", tri);
}