#include <iostream>
using namespace std;
int get_change(int m)
{
  // write your code here
  int coins[] = {1, 3, 4};
  int minNumCoins[m];
  minNumCoins[0] = 0;
  for (int i = 1; i <= m; i++)
  {
    minNumCoins[i] = m + 1;
    int numCoins;
    for (int j = 0; j < 3; j++)
    {
      if (i >= coins[j])
      {
        numCoins = minNumCoins[i - coins[j]] + 1;
      
        if (numCoins < minNumCoins[i])
        {
          minNumCoins[i] = numCoins;
        }
      }
    }
  }
  return minNumCoins[m];
}
int main()
{
  int m;
  cin >> m;
  cout << get_change(m);
  return 0;
}
