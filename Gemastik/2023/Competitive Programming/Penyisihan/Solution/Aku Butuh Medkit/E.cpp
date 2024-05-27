#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define boost                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

using namespace std;

int main()
{
  boost;
  long long N, a = 0, z = 0;
  long long awal = 0, akhir, simpanan;
  bool q = true;
  cin >> N;

  vector<long long> numbers(N);

  long long arr[N];

  string hasil[N];

  for (long long i = 0; i < N; i++)
  {
    cin >> numbers[i];
  }

  sort(numbers.begin(), numbers.end());

  for (long long i = 0; i < N; i++)
  {
    if (numbers[i] != numbers[i + 1])
    {
      arr[a] = numbers[i];
      a++;
    }
  }

  for (long long i = 0; i < a; i++)
  {
    if (arr[i + 1] - arr[i] == 1 && q == true)
    {
      awal = arr[i];
      q = false;
    }
    else if (arr[i + 1] - arr[i] != 1 && q == false)
    {
      akhir = arr[i];
      q = true;
    }
    else if (awal == 0)
    {
      simpanan = arr[i];
    }

    if (q == true)
    {
      if (awal == 0)
      {
        hasil[z] = to_string(simpanan);
      }
      else
      {
        hasil[z] = to_string(awal) + "-" + to_string(akhir);
        awal = 0;
      }
      z++;
    }
  }

  for (long long i = 0; i < z - 1; i++)
  {
    cout << hasil[i] << ",";
  }
  cout << hasil[z - 1];
}
