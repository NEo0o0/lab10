#include<iostream>
using namespace std;

int main(){
	int count[5] = {},i=1;
	char grade; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" <<i<< "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='A') // if grade is A
			{count[0]++;
			i++;}//Do something
		else if(grade=='B') // if grade is B
			{count[1]++;
			i++;}//Do something
		else if(grade=='C') // if grade is B
			{count[2]++;
			i++;}//Do something
		else if(grade=='D') // if grade is B
			{count[3]++;
			i++;}//Do something
		else if(grade=='F') // if grade is B
			{count[4]++;
			i++;}//Do something
		//and so on ... for grade = C, D, F	
		else if(grade!='0'){
			cout<<"Wrong input. Please input again.\n";} 
	}		
	while(grade!='0');
	
	
	cout << "In total " <<i-1<< " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;	
	//	and so on ... for grade = C, D, F	
	
	return 0;
	}
