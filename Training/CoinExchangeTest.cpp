#include "CoinExchangeTest.h"
bool CoinExchangeTest::Test1()
{
	vector<int> coins = { 5, 1, 25, 10 };
	int amount = 68;

	int noCoins = coinExchange.MinCoinExchangeGreedy(coins, amount);
	if (noCoins == 7) return true;
	return  false;
}

bool CoinExchangeTest::Test2()
{
	vector<int> coins = { 5, 1, 50, 25, 10 };
	int amount = 77;
	int noCoins = coinExchange.MinCoinExchangeGreedy(coins, amount);
	if (noCoins == 4) return true;
	return false;
}

bool CoinExchangeTest::Test3()
{
	vector<int> coins = { 1, 3, 20, 25 };
	int amount = 68;
	int noCoins = coinExchange.minCoinExchangeDynamicProgramming(coins, amount);
	if (noCoins == 4) return true;
	return false;

}

bool CoinExchangeTest::Test4()
{
	vector<int> coins = { 1, 5, 10, 18, 30 };
	int amount = 77;
	int noCoins =coinExchange.minCoinExchangeDynamicProgramming(coins, amount);
	if (noCoins == 5) return true;
	return false;

}

void CoinExchangeTest::coinExchangeTest()
{
	int count = 0;
	accuracy.push_back(Test1());
	accuracy.push_back(Test2());
	accuracy.push_back(Test3());
	accuracy.push_back(Test4());
	for(auto item : accuracy)
		item?cout<<"Test "<<count++<<" passed!\n": cout << "Test" << count++ << " FAILED!\n";
}
