#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main(){
	
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int n, m;
	cin >> n >> m;
	
	unordered_map<string, string> sitePw;
	for(int i = 0; i < n; i++){
		
		string site, password;
		cin >> site >> password;
		sitePw.insert(make_pair(site, password));
	}
	
	vector<string> pw;
	for(int i = 0; i < m; i++){
		
		string site;
		cin >> site;
		
		if(sitePw.find(site) != sitePw.end()){
			pw.push_back(sitePw[site]);
		}
	}
	
	for(int i = 0; i < pw.size(); i++){
		
		cout << pw[i] << "\n";
	}
	
	return 0;
}
