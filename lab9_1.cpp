#include<iostream>
#include<iomanip> 
using namespace std;

int main(){
	double balance, InterRate, payment, Inter, total;
	cout << "Enter initial loan: ";
	cin >> balance;
	cout << "Enter interest rate per year (%): ";
	cin >> InterRate;
	cout << "Enter amount you can pay per year: ";
    cin >> payment;
	

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	cout << fixed << setprecision(2);
	for(int i = 1 ; 1 ; i++){
	    Inter = balance*(InterRate/100);
	    total = balance+Inter;
	    
	    cout << setw(13) << left << i;   
	    cout << setw(13) << left << balance;
	    cout << setw(13) << left << Inter;
	    cout << setw(13) << left << total;
	    if(payment >= total)payment = total;
	    cout << setw(13) << left << payment;
	    balance = total - payment;
	    cout << setw(13) << left << balance;
    	cout << "\n";	
    	if(balance==0) break;
	}
	return 0;
}