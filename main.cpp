
#include <iostream>

#include "fly.h"
#include "rubberDuckFly.h"
#include "mountainDuck.h"

int main() {
	std::cout << "Main function of design patterns " << std::endl; 

	/*
	Demo of loosely coupled classes. 

	Design Principle in use: Everything that varies encapsulate it 
	
	*/
	rubberDuckFly rubberDuck;
	rubberDuck.flying();
	rubberDuck.quacking();

	mountainDuck mountains; 
	mountains.flying();
	mountains.quacking();
	
}