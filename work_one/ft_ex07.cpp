#include <iostream>

void printTree (void) {
	std::cout       << "    ###\n"
                                << "   #o###\n"
                        << " #####o###\n"
                        << "#o#\\#|#/###\n"
                                << " ###\\|/#o#\n"
                                << "  # }|{  #\n"
                                << "    }|{\n"
                                << "-------------\n";

}

int main () {

	int tree;

	std::cout << "how many trees to print? :" <<std::endl;
	std::cin >> tree;

	if (tree <= 0)
		return 0;
	
	for (int i = 0; i < tree; i++)
	{
		printTree();
	}
	std::cout <<std::endl;
	return 0;
}