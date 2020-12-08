#include "MinCoinExchange.h"

int MinCoinExchange::MinCoinExchangeGreedy(vector<int>& coins, int amount)
{
	sort(coins.begin(), coins.end(), greater<int>());
	int countOfCoins = 0;
	for (auto it : coins)
	{
		countOfCoins += amount / it;
		amount %= it;
	}
	return countOfCoins;

}

int MinCoinExchange::minCoinExchangeDynamicProgramming(vector<int>& coins, int amount)
{
	int *coinCounts = new int[amount];
	coinCounts[0] = 0;
	int c;
	for (int i = 1; i <= amount; i++)
	{
		coinCounts[i] = INT_MAX;
		for (int j = 0; j < coins.size(); j++)
		{
			if (coins[j] <= i)
			{
				coinCounts[i] = findMin(coinCounts[i - coins[j]] + 1, coinCounts[i]);
			}
		}
	}
	return coinCounts[amount];
}
