#include<bits/stdc++.h>
using namespace std;
int cal (int r, int unit, int arr[], int n)
{
  if (n == 0)
    return -1;
  int tot = r * unit;
  int food = 0;
  int i = 0;
  for (i = 0; i < n; ++i)
    {
      food += arr[i];
      if (food >= tot)
	{
	  break;
	}
    }
  if (tot > food)
    return 0;
  return i + 1;
}
int main ()
{
  int r;
  cin >> r;
  int unit;
  cin >> unit;
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i)
    {
      cin >> arr[i];
    }
  cout << cal (r, unit, arr, n);
  return 0;
}