//https://www.geeksforgeeks.org/is-sizeof-for-a-struct-equal-to-the-sum-of-sizeof-of-each-member/

#include <stdio.h> 

int main() { 
struct A { 

	// sizeof(int) = 4 
	int x; 
	// Padding of 4 bytes 

	// sizeof(double) = 8 
	double z; 

	// sizeof(short int) = 2 
	short int y; 
	// Padding of 6 bytes 
}; 

printf("Size of struct: %ld\n", sizeof(struct A)); 

struct B { 
        // sizeof(double) = 8 
        double z; 
  
        // sizeof(int) = 4 
        int x; 
  
        // sizeof(short int) = 2 
        short int y; 
        // Padding of 2 bytes 
    }; 
  
printf("Size of struct: %ld\n", sizeof(struct B)); 

struct C { 
// sizeof(double) = 8 
double z; 
// sizeof(short int) = 2 
short int y; // Padding of 2 bytes 
// sizeof(int) = 4 
int x; 
}; 

printf("Size of struct: %ld\n", sizeof(struct C)); 
struct D { 

	char x; 
	char y;
	//2 padding
	
	int z; 
	
	char k;
	char k2;
	char k3;
	char k4;
				
	int t; 
}; 
printf("Size of struct: %ld\n", sizeof(struct D)); 
return 0; 
} 

