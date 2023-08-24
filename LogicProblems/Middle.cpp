#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int N, x;
	vector<int> nums;
	
	cout << "How many numbers do you want to test? ";
	cin >> N;
	
	for(int i=1;i<=N;i++){
		cout << "Type the " << i << " number: ";
		cin >> x;
		nums.push_back(x);
	}sort(nums.begin(),nums.end());
	
	cout << "The middle number is " << nums[N/2];
	
}
