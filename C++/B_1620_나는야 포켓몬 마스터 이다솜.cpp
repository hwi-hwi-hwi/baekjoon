#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class PokemonDex{
	
public: 

	void AddPokemon(int num, const string &name){
		
		nameToNum[name] = num;
		numToName[num] = name;
	}
	
	int GetNumByName(const string &name){
		
		return nameToNum[name];
	}
	
	string GetNameByNum(int num){
		
		return numToName[num];
	}
	
private:
	unordered_map<string, int> nameToNum;
	unordered_map<int, string> numToName;
};
int main(){
	
	// 입출력 속도 최적화
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    
	int n, m;
	cin >> n >> m;
	
	PokemonDex pokemon;
	
	for(int i = 1; i <= n; i++){
		
		string name;
		cin >> name;
		pokemon.AddPokemon(i, name);
	}
	
	for(int i = 0; i < m; i++){
		
		string x;
		cin >> x;
		
		if(isdigit(x[0])){
			int num = stoi(x);
			cout << pokemon.GetNameByNum(num) << "\n";
		}
		else{
			cout << pokemon.GetNumByName(x) << "\n";
		}
	}
	
	return 0;
}
