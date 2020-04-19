#include <iostream>

using namespace std;

bool TryFerce(int i);
void setFerce(int i, int j);
void resetFerce(int i, int j);

int board[8][8];

int main()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			board[i][j] = 0;
		}
	}
	
	TryFerce(0);
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (board[i][j] == -1)
			{
				cout << "1";
			}
			else
			{
				cout << '0';
			}
		}
		cout << endl;
	}
	cout << endl;
	
}

bool TryFerce(int i)
{
	bool result = false;
	for (int j = 0; j < 8; j++)
	{
		if (board[i][j] == 0)
		{
			setFerce(i, j);
			if (i == 7)
			{
				result = true;
			}
			else
			{
				if (!(result = TryFerce(i + 1)))
				{
					resetFerce(i, j);
				}
			}
		}

		if (result)
		{
			break;
		}
	}
	return result;
}

void setFerce(int i, int j)
{
	for (int x = 0; x < 8; x++)
	{
		board[x][j]++;
		board[i][x]++;
		int diag = j - i + x;
		if (diag >= 0 && diag < 8)
		{
			board[x][diag]++;
		}
		diag = j + i - x;
		if (diag >= 0 && diag < 8)
		{
			board[x][diag]++;
		}
		board[i][j] = -1;
	}
}

void resetFerce(int i, int j)
{
	for (int x = 0; x < 8; x++)
	{
		board[x][j]--;
		board[i][x]--;
		int diag = j - i + x;
		if (diag >= 0 && diag < 8)
		{
			board[x][diag]--;
		}
		diag = j + i - x;
		if (diag >= 0 && diag < 8)
		{
			board[x][diag]--;
		}
		board[i][j] = 0;

	}
}