#include <iostream>
using namespace std;

class student {
        private : 
                string name;
                int age, rollno;
                char grade;
                float cgpa ; 

        public : 
                void setDetails(string name , int age , int rollno , char grade){
                        if(name.length() == 0){
                                cout << "Name cannot be empty";
                                return ; 
                        }
                        cout << "The size of name is " <<  name.size() << endl ; 
                        this->name = name ; 
                        this->age = age ; 
                        this->rollno = rollno ; 
                        this->grade = grade ; 
                }
                void  setCgpa(float x){
                        cgpa = x ; 
                }
                void printDetails(){
                                cout << "Name : "<<name<<endl;
                                cout <<  "Age : "<<age<<endl;
                                cout << "Rollno : "<<rollno<<endl;
                                cout << "Grade : "<<grade<<endl;
                }
                int GPA(int pin){
                        if(pin == 123){
                                return int(cgpa) ; 
                        }
                        else return -1 ; 
                }
};

int main()
{
        student s1;
        s1.setDetails("Shamsher" , 20 , 19 , 'A') ; 
        s1.setCgpa(10.5) ; 
        s1.printDetails();
        cout << s1.GPA(13);
        return 0;
}