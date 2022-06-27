// Hoppock, Zachary
// electricBill.cpp
// 9/30/2020
// Calculate the rate of an electric bill based on KWH
// Version # 1
#include <iostream>
using namespace std;

int main()
{ 
  int kwh;
  int kwh_over = 1000;
  double total_cost = 0;
  const double RATE_1 = 0.45;
  const double RATE_2 = 0.60;
  cout << "Please enter the number of KWH (Kilowatt Hours) used: ";
  cin >> kwh;
  if (kwh > kwh_over )
  {  
    total_cost = kwh * RATE_1;
  }
  else
  {
    total_cost = kwh * RATE_2;
  }
    cout <<"Total electric bill: $" << total_cost << endl;
  return 0;
}
