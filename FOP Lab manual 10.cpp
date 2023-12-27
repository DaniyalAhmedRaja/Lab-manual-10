                        //TASK 1
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
// 	vector<int> v;
// 	vector<int>::iterator rem=v.begin()+5;
// 	for(int i=1; i<11; i++){
// 		v.push_back(i);
// 	}
// 	cout<<"The values in the vector are: \n";
// 	for(vector<int>::iterator i=v.begin(); i!=v.end(); i++){
// 		cout<<*i<<'\t';
// 	}
// 	cout<<endl;
// 	v.push_back(5);
// 	rem=v.begin()+5;
// 	v.erase(rem);
// 	cout<<"After pushing 5 and removing integer at posiiton 5"<<endl;
// 	for(vector<int>::iterator i=v.begin(); i!=v.end(); i++){
// 		cout<<*i<<'\t';
// 	}
// 	return 0;
// }


                        //TASK 2
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;
// int main(){
// 	vector<string> name;
// 	string iname, temp_name;
// 	vector<int> grade;
// 	vector<int> mode_score;
// 	int igrade, sum=0, mean=0, temp=0, temp_grade=0; 
// 	cout<<"Input the name and grade of each student."<<endl
// 		<<"Input backslash 0 in the name and any charecter in the grade to stop inputs."<<endl;
// 	while(cin>>iname && cin>>igrade){
// 		name.push_back(iname);
// 		grade.push_back(igrade);
// 	}
// 	cout<<"The values in the array are: \n";
// 	for(int i=0; i<name.size(); i++){
// 		cout<<name[i]<<"\t"<<grade[i]<<endl;
// 	}
// 	for(int i=0; i<grade.size(); i++){
// 		sum+=grade[i];
// 	}
// 	for(int i=0; i<grade.size(); i++){
// 		mode_score.push_back(0);
// 	}
// 	for(int i=0; i<grade.size(); i++){
// 		for(int j=1; j<grade.size(); j++){
// 			if(grade[i]>grade[j]){
// 				temp_grade=grade[i];
// 				grade[i]=grade[j];
// 				grade[j]=temp_grade;
// 				temp_name=name[i];
// 				name[i]=name[j];
// 				name[j]=temp_name;
// 			}
// 		}
// 	}
// 	cout<<"The median score is: ";
// 	if(grade.size()%2==0){
// 		cout<<endl<<grade[grade.size()/2]<<endl;
// 	}
// 	else{
// 		cout<<grade[((grade.size()/2)+((grade.size()/2)-1))/2]<<endl;
// 	}
// 	mode_score.resize(grade.size());
// 	mean=sum/grade.size();
// 	for(int i=0; i<grade.size(); i++){
// 		for(int j=0; j<grade.size(); j++){
// 			if(grade[i]==grade[j]){
// 				mode_score[i]++;	
// 			}
// 		}
// 	}
// 	for(int i=0; i<mode_score.size()-1; i++){
// 		if(mode_score[i]>temp){
// 			temp=mode_score[i];
// 		}
// 	}
// 	cout<<endl<<"The mean of the grades is :"<<mean<<endl;
// 	cout<<endl<<"The most repeated score and their scorer are: \n";
// 	for(int i=0; i<grade.size(); i++){
// 		if(mode_score[i]==temp){
// 			cout<<name[i]<<'\t'<<grade[i]<<endl;
// 		}
// 	}
// 	return 0;
// }


                    //TASK 3
// #include <bits/stdc++.h>
// using namespace std;

// class Triangle{
// 	public:
// 		float dimension1, dimension2, dimension3;
// 	float area(){
// 		double s=(dimension1+dimension2+dimension3)/2;
// 		return (sqrt(s*(s-dimension1)*(s-dimension2)*(s-dimension3)));
// 	}
// 	float perimeter(){
// 		return dimension1+dimension2+dimension3;
// 	}
// };

// int main(){
// 	Triangle triangle;
// 	cout<<"\n"<<"Enter dimension 1: ";
// 	cin>>triangle.dimension1;
// 	cout<<"Enter dimension 2: ";
// 	cin>>triangle.dimension2;
// 	cout<<"Enter dimension 3: ";
// 	cin>>triangle.dimension3;
// 	cout<<"The area of the triangle is: "<<triangle.area()<<endl;
// 	cout<<"The perimeter of the triangle is: "<<triangle.perimeter()<<endl;
// 	return 0;
// }


                    //TASK 4
#include <iostream>
#include <string>
using namespace std;

struct EmployeeSalary {
    string emp_name;
    int base_payment, working_hours, total_salary;
    
    void calculateSalary() {
        if (working_hours < 8) {
            total_salary = base_payment;
        } else if (working_hours < 10 && working_hours >= 8) {
            total_salary = base_payment + 50;
        } else if (working_hours < 12 && working_hours >= 10) {
            total_salary = base_payment + 100;
        } else {
            total_salary = base_payment + 150;
        }
    }
};

int main() {
    int num_employees, check_entry;
    cout << "Input the number of employees: ";
    cin >> num_employees;
    
    EmployeeSalary employees[num_employees];
    
    for (int i = 0; i < num_employees; i++) {
        cout << "Input the Name, Base Payment, and Hours of Work Per Day of Employee number " << i + 1 << endl;
        cin >> employees[i].emp_name;
        cin >> employees[i].base_payment;
        cin >> employees[i].working_hours;
        employees[i].calculateSalary();
    }    
    
    cout << "Input the entry number to check employee salary: \n"
         << "Input a character to exit \n";
    
    do {
        cin >> check_entry;
        if (check_entry >= 1 && check_entry <= num_employees) {
            cout << employees[check_entry - 1].emp_name << '\t'
                 << employees[check_entry - 1].working_hours << '\t'
                 << employees[check_entry - 1].total_salary << '\n';
        } else {
            cout << "Entry number does not exist." << endl;
        }
    } while (!cin.fail());
    
    return 0;
}
