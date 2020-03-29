#include<bits/stdc++.h>
using namespace std;
void ingred(int i)
{
	cout << "Total number of ingredients that should be present in the kitchen in order";
    	cout << "\nto have a deadlock free execution of work is => "<<i<<endl;
}
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
    		cout << "3. Exit" << endl;
    		cin >> op;
		
    		switch(op) {
      			case 1:		 
        			min_ingred = (n*(r-1) + 1);
        			ingred(min_ingred);
        			break;
				
      			case 2:	
       				min_ingred=0;
        			for(int i=0; i<n; i++) {
          				cout << "Enter amount of ingredients needed by chef "  << i+1 << ": ";
          				cin >> need[i];
          				min_ingred += need[i] - 1;
        			}
        			min_ingred++;
        			ingred(min_ingred);
        			break;
			
      			case 3:
        			exit(0);
				
      			default:
        			cout << "Invalid input" << endl;
    		}
  	}
  return 0;
}
