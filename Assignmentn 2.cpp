#include <iostream>
using namespace std;
int main(){
	int n;
	cout<< "enter number n:" << endl;
	cin>> n;
	cout<< "odd number from 1 to "<< n << "are:" <<endl;
	for (int i=1; i<=n; i++){
		if(i%2 !=0){
		cout<< i << endl;
	}
}
	return 0;
}


