#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, r, op, min_ingred;
    	int *need = new int[n];
    	cout << "Enter total number of Chefs (N): ";
    	cin >> n; 
    	cout << "Enter maximum number of ingredients each chef can claim (R): ";
    	cin >> r;

  	while(1>0) {
    	cout << "\nSelect an option: " << endl;
    	cout << "1. Do not want to assign need of ingredients to each chef: " << endl;
    	cout << "2. Assign need of ingredients to each chef: " << endl;
    	cin >> op;
		
    	switch(op) {
      		case 1:		 
        		min_ingred = (n*(r-1) + 1);
        		cout << "Total number of ingredients that should be present in the kitchen in order";
    			cout << "\nto have a deadlock free execution of work is => "<<min_ingred<<endl;
        		break;
				
      		case 2:	
        		min_ingred=0;
        		for(int i=0; i<n; i++) {
          		cout << "Enter amount of ingredients needed by chef "  << i+1 << ": ";
          		cin >> need[i];
          		min_ingred += need[i] - 1;
        		}
        		min_ingred++;
        		cout << "Total number of ingredients that should be present in the kitchen in order";
    			cout << "\nto have a deadlock free execution of work is => "<<min_ingred<<endl;
        		break;
				
      		default:
        		cout << "Invalid input" << endl;
    		}
  	}
  return 0;
}
