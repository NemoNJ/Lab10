#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit." << "\n";
	int i = 1;
	char grade;
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; 

		if(grade == '0') {
		break;
		} //The loop must be terminated when grade = '0'
		
		if(grade == 'A'){ 
		 count[0] += 1;
		}
		else if(grade == 'B'){ 
		 count[1] += 1;
		}
		else if(grade == 'C'){ 
		 count[2] += 1;
		}
		else if(grade == 'D'){ 
		 count[3] += 1;
		}
		else if(grade == 'F'){ 
		 count[4] += 1;
		}
		else{ 
		cout <<  "Wrong input. Please input again.";
		cout << "\n";
		continue;
		} 
		i++;
	}while(true);
	
	int total = count[0] + count[1] + count[2] + count[3] + count[4];
	cout << "In total "<< total <<" students."<<"\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4]  ;

	
	return 0;
}