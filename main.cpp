#include <iostream>;
#include <math.h>;
#include <iomanip>
using namespace std;
int SetSign(int n) { return n % 2 == 0 ? 1 : -1; }
double ReturnResult(int n){
    double result = (n+1) /(pow(n, 2)+pow(2, n));
    return result = SetSign(n) * result;
}
void CountRow(){
    double res, summ;
    int i = 0;
    while((abs)(ReturnResult(i)) >= 0.000001){
        summ+=ReturnResult(i);
        i++;
    }
    cout << setprecision(7) << summ;
}
double CountingArithmeticProgression(){
    double summ;
    for(int i  = 0; i < 10; i++) summ += (ReturnResult(i));
    return  summ;
}
int main(){
    cout << setprecision(7) << CountingArithmeticProgression() << "\n";
    CountRow();
    return 0;
}