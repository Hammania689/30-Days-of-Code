#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double TotalCost();
double mealCost, tip, tax, tipPercent, taxPercent;

int main() 
{
    /* Enter your code here. Read input from STDIN.  Print output to STDOUT */   
  
 
    cin >> mealCost >> tipPercent >> taxPercent;
    
    cout << "The total meal cost is " << round(TotalCost()) << " dollars.";
    
    return 0;
}

double TotalCost()
{
  double total;
  tip = mealCost * (tipPercent/100);
  tax = mealCost * (taxPercent/100);

  total = mealCost + tip + tax;
  return total;
}
