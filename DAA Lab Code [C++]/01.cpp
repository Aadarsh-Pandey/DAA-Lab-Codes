
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int v[] = {100, 200, 300};       
    int w[] = {10, 20, 30};          
    int n = sizeof(v) / sizeof(v[0]);
    int c = 50;                       
    int maxValue = 0;

    int totalSubsets = pow(2, n);    

    
    for (int subset = 0; subset < totalSubsets; subset++) {
        int cw = 0, cv = 0;
        int temp = subset;

        for (int j = 0; j < n; j++) {
            if (temp % 2 == 1) {
                cw = cw + w[j];       
                cv = cv + v[j];        
            }
            temp = temp / 2;           
        }

        if (cw <= c && cv > maxValue) {
            maxValue = cv;
        }
    }

    cout << "Maximum value = " << maxValue << endl;
    return 0;
}
