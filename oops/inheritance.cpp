#include <bits/stdc++.h>
#include <vector>

using namespace std;

//Concept first base class constructor called then child class


 class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		Person(){
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}

};
class Student: public Person {
     private:
        vector<int> testScores;
    public:
        Student(string firstName, string lastName, int identification,vector<int> testScores){
            this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
			this->testScores=testScores;
        }
         char calculate(){
          float  sum=0;
            for(int i=0;i<testScores.size();i++){
                sum+=testScores[i];
            }
            float a=sum/testScores.size();
            if(a<=100&&a>=90){
                return 'O';
            }
            if(a<90&&a>=80){
                return 'E';
            }
            if(a<80&&a>=70){
                return 'A';
            }
            if(a<70&&a>=55){
                return 'P';
            }
            if(a<55&&a>=40){
                return 'D';
            }

                return 'T';



        }

};
/*class Student :: public Person{



};*/










int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";

	return 0;

}
