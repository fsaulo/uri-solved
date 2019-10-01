#include <iostream>
#include <string>

using namespace std;

string loop ( string p){

	string s="";
	bool virgula = false;

	if(p.size() == 0)return "error";

	for(char c : p){
		if(c == 'l'){
			s += '1';
		} else if(c=='o'|| c=='O'){
			s+='0';
		}else if(c == ','){
			virgula = true;
			continue;

		}else if(isdigit(c)){
			s+= c;
		}else if(isalpha(c)|| isxdigit(c) || ispunct(c)){
			return "error";
		}
	}

	const char *c = s.c_str();
	while((char) *c == '0'){
		c++;
	}

	s = c;

	if(virgula == true && s.size()==0)return "error";
	if(s.size() > 10)return "error";
	if(s.size()==0 && virgula == false ) return "0";

	if(stoll(s)<=2147483647)
	return s;
	else
	return "error";

}

int main(){

	string p;

	while(getline(cin, p)) {
		if(p.size() == 0 || p == " "){
			cout<< "error\n";
		} else{
			p = loop(p);
			cout << p;
			cout << "\n";
		}
	}


	return 0;
}
