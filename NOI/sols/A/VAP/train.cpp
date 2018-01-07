#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> nPerm[5];

	int n = 0;
	cin >> n;

	for (short j = 0; j < 5; j++)
		for (int i = 0; i < n; i++)
		{
			int nAdd;
			cin >> nAdd;

			nPerm[j].push_back(nAdd);
		}

	vector<bool> bPassed;

	bool bResult[5];

	for (int i = 0; i < 5; i++)
		bResult[i] = true;

	for (int i = 0; i < n; i++)
		bPassed.push_back(false);

	for (short j = 0; j < 5; j++)
	{
		for (int i = 0; i < n; i++)
			bPassed.pop_back();

		for (int i = 0; i < n; i++)
			bPassed.push_back(false);

		for (int i = 0; i < n && bResult[j] == true; i++)
		{
			for (int k = 0; k < n; k++)
				bPassed.pop_back();

			for (int k = 0; k < n; k++)
				bPassed.push_back(false);

			for (int k = 0; k < i && bResult[j] == true; k++)
				bPassed[nPerm[j][k] - 1] = true;

			for (int k = i + 1; k < n && bResult[j] == true; k++)						// Finds a number less than i
				if (nPerm[j][k] < nPerm[j][i])
				{
					bPassed[nPerm[j][k] - 1] = true;
					for (int l = nPerm[j][k]; l < nPerm[j][i] - 1; l++)
						if (bPassed[l] == false)
						{
							bResult[j] = false;
							break;
						}

				}
		}
	}

	for (int i = 0; i < 5; i++)
		cout << bResult[i];

	cout << endl;

	return 420;
}