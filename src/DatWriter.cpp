#include "DatWriter.h"
#include <fstream>
#include <iomanip>

void DatWriter:: write(const string& filename, const Triangulation& tri)
{
	ofstream out(filename);
	for (auto tr : tri.getTriangles())
	{
		for (int i = 0; i < 3; i++)
		{
			out << fixed << setprecision(6)
				<< tri.getUniqueData()[tr.getVertices()[i].getX()] << " " << tri.getUniqueData()[tr.getVertices()[i].getY()] << " " << tri.getUniqueData()[tr.getVertices()[i].getZ()] << endl;
		}
		out << fixed << setprecision(6)
			<< tri.getUniqueData()[tr.getVertices()[0].getX()] << " " << tri.getUniqueData()[tr.getVertices()[0].getY()] << " " << tri.getUniqueData()[tr.getVertices()[0].getZ()] << endl << "\n\n";
	}		
}
