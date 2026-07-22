	#include <iostream>
	#include <string>
	using namespace std;
	
	int main() {
		double gradepoints,totalgradepoints,GPA;
		string lettergrade;
		int totalcoursecode;
		int studentscore ,credithours;
		 int totalcredithours ;
		 
		 cout<<" Enter totalcoursecode count:"<< endl;
			cin>> totalcoursecode;
		for(int i=0; i < totalcoursecode; i++){
				cout<<"Enter totalcoursecode:" <<(i+1) << endl;
		
		cout<<"Enter credithours:" << endl;
		cin>> credithours;
		
		cout<< "Enter studentscore:"<< endl;
		cin>> studentscore;
		
		
			if(studentscore>=85) {
				gradepoints= 5.0;
				cout<<"A+"<< endl;
		}
				else if (studentscore>=80){
						gradepoints=4.5;
						cout<<"A"<< endl;
									
				}
			else if (studentscore >=75){
				gradepoints=4.0;
				cout<< "B+"<< endl;
			}
				else if (studentscore >= 70) {
					gradepoints=3.5;
					cout<< "B"<< endl;
					}
				else if (studentscore >= 65){
					gradepoints=3.0;
					cout<< "c+" << endl;
			}
					else if (studentscore >= 60){
					 gradepoints= 2.5;
					 cout << "C"<<endl;	
					}
				
				else if (studentscore >= 55) {
					gradepoints=2.0;
					cout<<"D+"<< endl;
			}
					else if (studentscore >= 50){
					gradepoints=1.0;
					cout << "D" <<endl;
				}
					else (studentscore >=45);
					gradepoints=0.0;
					cout<< "F" << endl;
			
					}
				
				//calulations
					totalgradepoints += gradepoints*credithours;
					totalcredithours += credithours;
					
					if (totalcredithours>0){
					GPA = totalgradepoints/totalcredithours;
					cout<< "Your GPA is:" << GPA<< endl;		
				}
					
					
				return 0;
	}
	