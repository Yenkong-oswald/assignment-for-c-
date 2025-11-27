#include <iostream>
#include<Cmath>
using namespace std;
int main(){
	float a, b, c;
	cout << "enter coefficents a, b, c: ";
	cin >> a >> b >> c;
	float d = b*b - 4*a*c;
	if(d > 0)
	{
		float root1 = (-b+ sqrt(d)) / (2*a);
		float root2 = (-b - sqrt(d)) / (2*a);
		cout << "roots are real and distinct: "<< root1 << "and" << root2;
} 
	else if (d ==0){
		float root = -b / (2*a);
		cout <<" roots are real and equal: " << root;
	} else {
		float real = -b / (2*a);
		float img = sqrt(-d) / (2*a);
		cout << "roots are complex: " << real  << "+" << img <<"i and" <<real <<"-" << img <<"i";
	}
return 0;
}
