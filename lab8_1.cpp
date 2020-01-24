#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double prevB,payment,x=1;
	float rate;
	cout<<"Enter initial loan : ";
	cin>>prevB;
	cout<<"Enter interest rate per year (%) : ";
	cin>>rate;
	cout<<"Enter amount you can pay per year : ";
	cin>>payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
		

	int year =1;
	float interest ;
	float total=0 ;
	float NewBalance = prevB ;

	while(true){
		
		
		prevB = NewBalance;
		interest = prevB*rate/100;
		total = prevB+interest;
		if(total<payment){
			payment = total;
		}
		NewBalance = total - payment ;
		cout << fixed << setprecision(2);
		cout << setw(13) << left << year;
		cout << setw(13) << left << prevB;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;
		cout << setw(13) << left << payment;
		cout << setw(13) << left << NewBalance;
		cout << "\n";
		year++;
		if(NewBalance==0) break;
		
		}
	}
	
		
		

		



	

	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	/*cout << fixed << setprecision(2); 
	cout << setw(13) << left << 1; 
	cout << setw(13) << left << 1000.0;
	cout << setw(13) << left << 50.0;
	cout << setw(13) << left << 1050.0;
	cout << setw(13) << left << 100.0;
	cout << setw(13) << left << 950.0;
	cout << "\n";	*/

