#include<iostream>
#include<array>

int main()
{
	std::array<int, 5> container{ 5,2,1,3,4 };

	std::array<int, 5>::iterator itr = container.begin();
	while (itr != container.end())
	{
		std::cout << *itr << std::endl;
		itr++;
	}

	int min = container[0];
	for (auto e : container)
	{
		if (e < min)
		{
			min = e;
		}
	}
	std::cout << min << std::endl;
}