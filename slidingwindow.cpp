#include <bits/stdc++.h>
using namespace std;
int maxSum(int arr[], int n, int k)
{
	if (n < k) {
		cout << "Invalid";
		return -1;
	}
	int max_sum = 0;
	for (int i = 0; i < k; i++)
		max_sum += arr[i];
	int window_sum = max_sum;
	for (int i = k; i < n; i++) {
		window_sum += arr[i] - arr[i - k];
		max_sum = max(max_sum, window_sum);
	}
	return max_sum;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int k;
	cin>>k;
	cout << maxSum(arr, n, k);
	return 0;
}
