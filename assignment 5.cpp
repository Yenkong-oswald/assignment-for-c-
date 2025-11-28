#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    double discriminant = b*b - 4*a*c;

    // Case 1: Real and distinct roots
    if (discriminant > 0) {
        double r1 = (-b + sqrt(discriminant)) / (2 * a);
        double r2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << r1 << endl;
        cout << "Root 2 = " << r2 << endl;
    }

    // Case 2: Real and equal roots
    else if (discriminant == 0) {
        double r = -b / (2 * a);
        cout << "Roots are real and equal." << endl;
        cout << "Root = " << r << endl;
    }

    // Case 3: Complex roots
    else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
