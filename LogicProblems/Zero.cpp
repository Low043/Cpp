#include<bits/stdc++.h>
using namespace std;
int main(){
	
	vector<int> num;
	int N, x, sum = 0;
	
	cout << "Type the number of inputs: ";
	cin >> N;
	
	for(int i=1;i<=N;i++){
		cout << i << " input: ";
		cin >> x;
		if(x){
			sum += x;
			num.push_back(x);
		}else if(i-1){
			sum -= num.back();
			num.erase(num.end()-1);
		}
	}cout << "The sum of all remaining inputs is " << sum;
	
}
