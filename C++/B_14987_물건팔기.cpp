#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int Mprice[n], deliv[n], max(0);
	for(int i = 0; i < n; i++){
		
		cin >> Mprice[i] >> deliv[i];
		
		if(Mprice[i] > max)		max = Mprice[i];
	}
	
	int Mprofit(0), bestPrice(0);
	for(int price = 1; price <= max; price++){
		
		int profit(0);
		
		for(int j = 0; j < n; j++){
			
			if(Mprice[j] >= price){
				int customerProfit = (price - deliv[j]);
				
				if(customerProfit > 0){
					profit += customerProfit;
				}
			}
		}
		
		if(profit  > Mprofit){
			Mprofit = profit;
			bestPrice = price;
		}
	}
	
	cout << bestPrice;
	
	return 0;
}
