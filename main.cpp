#include <iostream>
#include <boost/filesystem.hpp>

using namespace boost::filesystem;

int main() 
{

	path p("/usr/bin");
	for (directory_entry &de : directory_iterator(p) ){
		std::cout << de.path() << std::endl;
	}		

#ifdef _DEBUG
	std::cout << "Hello debug" << std::endl;
#endif

	std::cout << "Hello always" << std::endl;
	return 0;
}
