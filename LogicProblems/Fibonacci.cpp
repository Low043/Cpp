#include<bits/stdc++.h>
using namespace std;
vector<long long int> result(2,1);
long long int fib(int N){
	if(N<=result.size()) return result[N-1];
	result.push_back(fib(N-2)+fib(N-1));
	return result[N-1];
}
int main(){
	
	int N;
	
	cout << "What fibonacci number do you want? ";
	cin >> N;
	
	cout << "The fibonacci of " << N << " is " << fib(N);
	
}
