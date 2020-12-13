#include "printValidity.h"

printValidity::printValidity(std::vector<bool>* accuracy)
{
	int counter = 0;
	for (auto item : (*accuracy))
		item ? std::cout << "\tTest " << ++counter << " bas been compleated.\n" : std::cout << "\t! Test " << ++counter << " has been failed \n";
	std::cout << "\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
}
