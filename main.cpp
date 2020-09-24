#include <iostream>;
#include <math.h>;
using namespace std;
int SetSign(int n){ //встановлюємо знак
    if (n % 2 == 0) return 1;
    else return -1;
}
double ReturnResult(int n){
    double result;
    result = (n+1) /(pow(n, 3)+1);
    return result = SetSign(n) * (double(int(result * 10000000+0.5)))/10000000;
}
void CountRow(){
    double res;
    double summ;
    int i = 0;
    while((abs)(ReturnResult(i)) >= 0.000001){
        summ+=ReturnResult(i);
        i++;
    }
    cout << summ;

}
double CountingArithmeticProgression(){
    double summ;
    for(int i  = 0; i < 10; i++){
        summ += (ReturnResult(i));
    }
    return  summ;
}
int main(){
    cout << CountingArithmeticProgression() << "\n";
    CountRow();
    return 0;
}