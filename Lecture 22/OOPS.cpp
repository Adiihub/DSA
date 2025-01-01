#include<bits/stdc++.h>
using namespace std;

/////////////////template/Blue Print/////////////////////////////////
class Student{
    public:
        char name[100];
        int RollNumber;
        int age;
};


// classes are also called user defined data type
int main(){
    int a=10;// ye ek integer data ko store krega

    Student s1; // s1 ek Student data type ka variable hai
                // yaha pe isko variable na bolker bolte h object

    // to acess properties of an object we use (.) dot operator
    strcpy(s1.name,"abc");
    s1.RollNumber=101;
    s1.age=18;

    // to know  the value of properties
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll Number: "<<s1.RollNumber<<endl;
    cout<<"Age: "<<s1.age<<endl;



    return 0;


}