#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for (; n > 0; --n)
	{
		string input;
		cin >> input;

		vector <int> number;
		vector <char> op;

		int a = 0;
		for (int i = 0; i < input.size(); ++i)
		{
			if (input[i] >= '0' and input[i] <= '9')
			{
				a *= 10;
				a += input[i] - '0';
				//cout << "a " << a << '\n';
			}
			else
			{
				number.push_back(a);
				a = 0;
				op.push_back(input[i]);

				//cout << number[number.size() - 1] << '\n' << op[op.size() - 1] << '\n';
			}
		}
		number.push_back(a);
		//cout << number[number.size() - 1] << '\n';

		vector <int> last;
		bool addedL = false;
		for (int i = 0; i < op.size(); ++i)
		{
			if (op[i] == '*')
			{
				int curr = number[i];
				while (op[i] == '*' and i < op.size())
				{
					curr *= number[i + 1];
					++i;
				}
				last.push_back(curr);
				//cout << curr << '\n';
				//cout << "   " << i << '\n';
				if (i == number.size() - 1)
				{
					addedL = true;
				}
				--i;					
			}
			else
			{
				if (i == 0 or op[i - 1] == '+')
				{
					last.push_back(number[i]);
					if (i == number.size() - 1)
					{
						addedL = true;
					}
					//cout << number[i] << '\n';
				}
				/*else if (i == op.size() - 1 or op[i + 1] != '*')
				{
					last.push_back(number[i + 1]);
					if (i + 1 == number.size() - 1)
					{
						addedL = true;
					}
				}*/
			}
		}
		if (!addedL)
		{
			last.push_back(number[number.size() - 1]);
			//cout << last[last.size() - 1] << '\n';
		}

		int res = 0;
		for (int i = 0; i < last.size(); ++i)
		{
			res += last[i];
			//cout << last[i] << ' ' << res << '\n';
		}
		//cout << "res = " << res << '\n';
		cout << (res % 2 != 0) << '\n';
	}

	return 0;
}
