#include "Driver.h"
#include "STLReader.h"
#include "Triangulation.h"
#include "DatWriter.h"
#include <iostream>

void Driver::translateSTLtoDAT(const string& inputFilePath, const string& outputFilePath)
{
    Triangulation tri;
    STLReader Reader;
    std::cout << "init" << std::endl;
    Reader.read(inputFilePath, tri);
    std::cout << "read" << std::endl;
    DatWriter Writer;
    Writer.write(outputFilePath, tri);
    std::cout << "write" << std::endl;
   }