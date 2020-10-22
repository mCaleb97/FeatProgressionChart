#include <iostream>
#include <vector>
#include <string>

#include "Feats.h"

void printFeat(Feat output)
{
	std::cout << "\nFeat Name: " << output.name << std::endl;
	std::cout << "Feat Type: " << output.type << std::endl;

	std::cout << "Feat Prerequisites: (";
	for(int i=0; i < output.genPrereq.size(); i++){std::cout << output.genPrereq[i] << ", ";}
	std::cout << ')' << std::endl;

	std::cout << "Feat Benefits: " << output.benefits << std::endl;

	std::cout << "Feat Specials: (";
	for(int i=0; i < output.special.size(); i++){std::cout << output.special[i] << ", ";}
	std::cout << ')' << std::endl;

	std::cout << "Feat Book: " << output.sources[0] << std::endl;
}