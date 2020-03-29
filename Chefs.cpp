#include<bits/stdc++.h>
using namespace std;
int n, r, op, min_ingred;
void input()
{
	cout << "Enter total number of Chefs (N): ";
    	cin >> n; 
    	cout << "Enter maximum number of ingredients each chef can claim (R): ";
    	cin >> r;
    	if(n<=0 || r<=0)
    	{
      		cout<<"\nInvalid Entry!! Please Enter the valid Entry\n"; 
      		cout<<endl;
      		input(); 
    	}
}
void ingred(int i)
{
    	cout << "\nTotal number of ingredients that should be present in the kitchen in order";
    	cout << "\nto have a deadlock free execution of work is => "<<i<<endl;
}
int main() {
    int *need = new int[n];
    input();
    
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
        		int i;
        		for(i=0; i<n; i++) {
          			cout << "Enter amount of ingredients needed by chef "  << i+1 << ": ";
          			cin >> need[i];
          			if(need[i] > r)
          			{
            				cout<<"\nInvalid input!! Cannot exceed maximum ingredients(R) which can be claimed by the chef.\n";
            				--i;
            				continue;
          			}
          			min_ingred += need[i] - 1;
        		}
        		min_ingred++;
        		ingred(min_ingred);
        		break;		

      		case 3:
        		exit(0);
				
      		default:
        		cout << "Invalid input !! Try again." << endl;
    		}
  	}
  return 0;
}                          
