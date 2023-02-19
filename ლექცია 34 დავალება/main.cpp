#include <iostream>
using namespace std;

class Skillwill{
    public:
    string Name;
    int Age;
    int Lectures;

    public:
    Skillwill(string name , int age , int lectures){
        Name = name;
        Age = age ;
        Lectures = lectures ;
    }

    Skillwill(string name , int age ){
        Name = name;
        Age = age;
        Lectures = 0;
    }

    void introduseYourself(){
        cout << "student name is: " << Name << endl;
        cout << "student age is: " << Age << endl;
        cout << "watched lectures: " << Lectures << endl;
    }

};


int main(){
    Skillwill student1("nini", 17);
    student1.introduseYourself();

    Skillwill student2("giorgi",18,10);
    student2.introduseYourself();


    cin.get();
    return 0;
}