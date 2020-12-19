#include <iostream>

int main()
{
	int v1 = 0, v2 = 0, temp = 0;

	std::cout << "Enter two number: " << std::endl;
	std::cin >> v1 >> v2;
	if (v1 > v2)
	{
		temp = v1;
		v1 = v2;
		v2 = temp;
	}

	while (v1 <= v2) 
	{
		std::cout << "Number is: " << v1 << std::endl;
		++v1;
	}

	return 0;

}

