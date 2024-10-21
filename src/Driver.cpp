#include "Driver.h"
#include "STLReader.h"
#include "Triangulation.h"
#include "DatWriter.h"

void Driver::translateSTLtoDAT(const string& inputFilePath, const string& outputFilePath)
{
    Triangulation tri;
    STLReader Reader;
    Reader.read(inputFilePath, tri);
    DatWriter Writer;
    Writer.write(outputFilePath, tri);
}