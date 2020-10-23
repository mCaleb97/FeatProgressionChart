#include <vector>
#include <string>
#include "Feats.h"

int locateFeat(std::vector<Feat>, std::string);
bool featChain(std::vector<Feat>, int, std::string);
std::vector<Feat> prereqSort(std::vector<Feat>);
std::vector<Feat> prereqDec(std::vector<Feat>);