/*
 _____ ____ _____   ____ _____ ____  
| ____/ ___| ____| |___ \___  | ___| 
|  _|| |   |  _|     __) | / /|___ \ 
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/ 
                                     
 _   _                                         _      _ 
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|
 
 
Aww Geez Man: Interdimensional Mortys.

One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.

*/

// Include the Morty header file
#include "Morty.hpp"
#include <iostream>


int main (int ac, char** av) {
	// Parse the command line arguments. The program is executed as
	// ./AwwGeezMan {start} {stop} {dimension}
	// or 
	// ./AwwGeezMan {start} {stop} {step} {dimension}
	if (ac != 4 and ac != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)" 
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;
		
		return -1;
	}
	else if (ac == 4) {
		int start = std::stoi(*(av + 1));
		int stop = std::stoi(*(av + 2));
		std::string dimension = std::string(*(av + 3));

		if (dimension == "C317") {
			C137::Morty(start, stop);
		}
		else if (dimension == "Z286") {
			Z286::Morty(start, stop);
		}
		else {
			std::cout << "ERROR: Unknown dimension!!" << std::endl;
			return -1;
		}
	}
	else if (ac == 5) {
		int start = std::stoi(*(av + 1));
		int stop = std::stoi(*(av + 2));
		int step = std::stoi(*(av + 3));
		std::string dimension = std::string(*(av + 4));

		if (dimension == "C317") {
			C137::Morty(start, stop, step);
		}
		else if (dimension == "Z286") {
			Z286::Morty(start, stop, step);
		}
		else{
			std::cout << "ERROR: Unknown dimension!!" << std::endl;
			return -1;
		}
	}
	
	// Parse the command line arguments
	
		
	// Depending on the dimension of the arguments, call the appropriate Morty
	// function
	
	
	return 0;
}
