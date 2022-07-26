#include <iostream>
#include <string>

using std::string;
int minimum(int x, int y, int z)
{
  if (x <= y && x <= z)
  {
    return x;
  }
  else if (y <= x && y <= z)
  {
    return y;
  }
  else
    return z;
}
int edit_distance(string &str1, string &str2, int m, int n)
{
  // write your code here
  int arr[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
      for (int j = 0; j <= n; j++)
      {
        if (i == 0)
          arr[i][j] = j; // Min. operations = j
        else if (j == 0)
          arr[i][j] = i; // Min. operations = i

        else if (str1[i - 1] == str2[j - 1])
          arr[i][j] = arr[i - 1][j - 1];
        else
          arr[i][j] = 1 + minimum(arr[i][j - 1],      // Insert
                             arr[i - 1][j],      // Remove
                             arr[i - 1][j - 1]); // Replace
      }
    }

    return arr[m][n];
  }

  int main()
  {
    string str1;
    string str2;
    std::cin >> str1 >> str2;

    int m = str1.length();
    int n = str2.length();
    std::cout << edit_distance(str1, str2, m, n) << std::endl;
    return 0;
  }
