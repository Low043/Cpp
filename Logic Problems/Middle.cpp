#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int x;
	vector<int> nums;
	
	for(int i=1;i<=3;i++){
		cout << "Type the " << i << " number: ";
		cin >> x;
		nums.push_back(x);
	}sort(nums.begin(),nums.end());
	
	cout << "The middle number is " << nums[1];
	
}
