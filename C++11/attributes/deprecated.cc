#include <iostream> 
#include <string> 

[[deprecated("Susceptible to buffer overflow")]] void gets(char* str) 
{       std::cout << "Successfully Executed But Deprecated.";
	// Code for gets dummy 
	// (Although original function has 
	// char* as return type) 
} 

void gets_n(std::string& str) 
{ 
	// Dummy code 
	char st[100]; 
	std::cout << "Successfully Executed"; 
	std::cin.getline(st, 100); 
	str = std::string(st); 
	// Code for new gets 
} 

int main() 
{ 
	char a[100]; 
	gets(a); 

	// std::string str; 
	// gets_n(str); 
} 

