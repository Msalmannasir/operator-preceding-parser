#include <string.h>
#include <iostream>

using namespace std;

int main(){
	int len,flag=0,j=0,temp;
	string grammar;
	char err[30],pars[30],ch;
	while(ch != 'n'){
	system ("CLS");
	cout << "Enter the production in this form '(Non-Terminals)->(Terminals)' \n";
	cout << "Enter a(single) production: ";
	cin >> grammar;
	cout << "\n" << grammar;
	for(int i=0; i<grammar.length()-3;i++){
		pars[i] = grammar[i+3];
		len=i;
	}
	cout << "\n";
	while(j!=len){
		if((pars[j] >= 'A' && pars[j] <= 'Z') && (pars[j+1] >= 'A' && pars[j+1] <= 'Z')){
			flag+=1;
			for(int k=0; k<=j; k++){
				err[k] = pars[k];
				temp=k;
			}
		}
		j++;
	}
	if(flag==0){
		cout << endl << "Production is ok";
		cout << "\ndo you want to enter another production?(y/n): ";
		cin >> ch;
	}else{
		cout << "production not parsable\n";
		cout << "Error is here: ";
		for(int l=0; l<=temp; l++){
			cout << err[l];
		}
		cout << "\nSuggestion: try changing the second terminal with any operator.";
		return 0;
	}
}
		cout << "\ngrammar is parsed";
return 0;
}
