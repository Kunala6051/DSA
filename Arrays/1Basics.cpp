# include <iostream>

using namespace std;

struct Student{
    int id;
    string name;
    float marks;
};

int main(){
    Student s1 = {101,"Kunal",100};

    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;

    int x,y;
    cin >> x >> y;
    cout << "Sum of the two numbers is: " << x+y << endl;

    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num%2==0) cout << num << " is even.";
    else cout << num << " is odd.";
    
    return  0;
}