#include <iostream>
#include <string>

int main(){
	std::string Name;
	std::cout << "Enter Your Name: ";
	std::cin >> Name;
	for (int i=Name.size()-1;i>=0;i--) std::cout << Name[i];
	std::cout << "\n";
	return 0;
}
