#include <iostream>

using namespace std;

double v;
double r;
double g;
double vinf;
double inf;
double infcum = 1;
int year = 8;
int erb = 10000;

int main() {
    cout << "What is your net worth ?" << endl << endl ;
    cin >> v ;
    //cout << "What is the interest rate you get ?" << endl << endl;
    //cin >> r ;
    //cout << "What is the actual inflation rate ?" << endl << endl;
    //cin >> inf ;

    r = 1.06;
    inf = 1.04;

    cout << "What is your actual income ?" << endl << endl;
    cin >> g;

        for (int i = 1; i < 9; ++i) { //The Growing Loop: Start and First 8 years
            g = g * 1.15;
            v = v * r + g * 0.6;
            infcum = infcum * inf;
            erb = erb * r;
        }

        cout << "Your net worth after 8 years will be " << v << endl << endl;
        cout << "Your salary after 8 years will be " << g << endl << endl;
        cout << "Your age will be " << year + 25 << endl << endl;
        cout << "The cumulative inflation rate over 8 years is " << infcum << endl << endl;

        vinf = v / infcum;

        cout << "Your salary after 8 years to the present value will be " << g/infcum << endl << endl;
        cout << "Your net worth after 8 years to the present value will be " << vinf << endl << endl;
        cout << "---------------------------------------------------------" << endl << endl;

    for (int b = 0; b < 8 ; ++b) { //The Growing Loop: Post First 8 years and a Promotion every 4 years

        g = g * 1.4;
        year = year + 4;

        if(year < 30) {
            //statement(s) will execute if the boolean expression is true, here if 30 years are not over yet
            for (int i = 0; i < 4; ++i) {
                g = g * 1.06;
                v = v * r + g * 0.7;
                infcum = infcum * inf;
                erb = erb * r;
            }
            cout << "Your net worth after " << year << " years will be " << v << endl << endl;
            cout << "Your salary after " << year << " years will be " << g << endl << endl;
            cout << "Your age will be " << year + 25 << endl << endl;
            cout << "The cumulative inflation rate over " << year << " years is " << infcum << endl << endl;

            vinf = v / infcum;

            cout << "Your salary after " << year << " years to the present value will be " << g/infcum << endl << endl;
            cout << "Your net worth after " << year << " years to the present value will be " << vinf << endl << endl;
            cout << "---------------------------------------------------------" << endl << endl;

        }
        else { //heritage after 30 years, Promotion and Carrier Path is the same
            // statement(s) will execute if the boolean expression is false, here if 30 years are over
            for (int i = 0; i < 4; ++i) {
                g = g * 1.06;
                v = v * r + g * 0.9 ;
                infcum = infcum * inf;
                erb = erb * r;
            }
            cout << "Your net worth after " << year << " years will be " << v + erb << endl << endl;
            cout << "Your salary after " << year << " years will be " << g << endl << endl;
            cout << "Your age will be " << year + 25 << endl << endl;
            cout << "The cumulative inflation rate over " << year << " years is " << infcum << endl << endl;

            vinf = (v + erb) / infcum;

            cout << "Your salary after " << year << " years to the present value will be " << g/infcum << endl << endl;
            cout << "Your net worth after " << year << " years to the present value will be " << vinf << endl << endl;
            cout << "---------------------------------------------------------" << endl << endl;
        }


    }

    return 0;
}