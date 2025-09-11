#include <iostream>

using namespace std;

int main()
{
    // n candies
    long long n;
    // buying price
    long long x;
    // selling price
    long long y;

    cin>>n>>x>>y;

    long long TotalBuyingPrice, TotalSellingPrice, TotalProfit;

    // totalBuyingPrice
    TotalBuyingPrice = n * x;

    // totalSellingPrice
    TotalSellingPrice = n * y;

    TotalProfit = TotalSellingPrice - TotalBuyingPrice;

    cout<<TotalProfit<<endl;

    return 0;
}
