// Illustrates the operation of Insertion-Sort on an array
// initially containing the sequence {5, 2, 4, 6, 1, 3}.

import std;

void insertionSort();

int main()
{
	insertionSort();
}

void insertionSort()
{
	std::array<int, 6> ar1 = {}; // All elements initialized to 0
	
	std::println("Array of size {}",ar1.size());
	for (auto& i : ar1)
	{
		std::cout << i << " ";
	}

	std::cout << '\n' << '\n';

	std::println("Enter six ({}) integers:",ar1.size());
	for (int i = 0; i < 6; i++)
	{
		std::cin >> ar1[i];
	}

	std::cout << '\n';

	std::print("Unsorted Array\n");
	for (auto& i : ar1)
	{
		std::cout << i << " ";
	}

	std::cout << '\n';

	int i = {};
	int j = {};
	int key = {};
	for (i = 1; i < ar1.size(); i++)
	{
		key = ar1[i];
		j = i - 1;
		
		while (j >= 0 && ar1[j] > key)
		{
			ar1[j + 1] = ar1[j];
			j = j - 1;
		}

		ar1[j + 1] = key;
	}

	std::cout << '\n';

	std::print("Sorted Array\n");
	for (auto& i : ar1)
	{
		std::cout << i << " ";
	}

	std::cout << '\n';
}