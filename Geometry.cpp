#include <iostream>
#include "Progression.h"
#include "Cube.h"

int main()
{
#pragma region Testing Progression
	Progression prog(2, 2);
	int number = 5; 
	std::cout << "Member number " << number << " = " << prog.Member(number) << std::endl;
	number = 3; 
	std::cout << "Summa of " << number << " members = " << prog.Sum(number) << std::endl;
	std::cout << std::endl;
#pragma endregion

#pragma region Cubes
	int N; 
	std::cout << "Enter the number of cubes" << std::endl;
	std::cin >> N;
	double SumSquares = 0; 
	double MaxSquares = 0; 
	int scoreOfMax = 0;
	for (int i = 0; i < N; i++) {
		std::cout << "Enter the side length" << std::endl;
		double a; 
		std::cin >> a; 
		Cube cube(a);
		double square = cube.Square();
		SumSquares += square;
		double exp = 0.0001;
		if (square - MaxSquares > exp) {
			MaxSquares = square;
			scoreOfMax = 1;
		}
		else if (fabs(square - MaxSquares) < exp) scoreOfMax++; 
	}
	std::cout << "Average area = " << (SumSquares / N) << std::endl;
	std::cout << "The number of cubes with the maximum area = " << scoreOfMax << std::endl;
#pragma endregion
}
