#include <iostream>
#include "Driver.h"

using namespace std;

int main()
{
    string iFilePath = "D:\\narayanWorkspace\\Translator\\Test Cases\\cube-ascii.stl";
    string oFilePath = "output.dat";
    Driver driver;
    driver.translateSTLtoDAT(iFilePath, oFilePath);
}