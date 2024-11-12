#include <iostream>
#include <cmath>  // sqrt
 
using namespace std;

int calculate_score(double x, double y){
	
	double distance = sqrt((x * x) + (y * y));
	
	if(distance <= 3)	return 100;
	else if(distance <= 6)	return 80;
	else if(distance <= 9)	return 60;
	else if(distance <= 12)	return 40;
	else if(distance <= 15)	return 20;
	else return 0;
}

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		double x, y;
		int p1(0), p2(0);
		
		for(int i = 0; i < 3; i++){
			
			cin >> x >> y;
			p1 += calculate_score(x, y);
		}
		
		for(int i = 0; i < 3; i++){
			
			cin >> x >> y;
			p2 += calculate_score(x, y);
		}
		
		cout << "SCORE: " << p1 << " to " << p2 << ", ";
		if(p1 > p2)		cout << "PLAYER 1 WINS." << endl;
		else if(p1 < p2)	 cout << "PLAYER 2 WINS." << endl;
		else if(p1 == p2)		cout << "TIE." << endl;
	}
	
	return 0;
}
