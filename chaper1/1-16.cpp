#include <iostream>

int main()
{
	int i = 0, sum = 0;

	while ( std::cin >> i ) 
	{
		sum += i;
	}
	
	std::cout << "The sum is: " << sum << std::endl;
	return 0;

}

