import std;

int main()
{
	std::array<int, 6> ar1 = { 31,41,59,26,41,58 };
	int sum = {};
	int i = {};

	for (i = 0; i < ar1.size(); i++)
	{
		sum = sum + ar1[i];
		std::println("sum = {}", sum);
	}
}