//Anika Tabassum (ID:193311018,Sem:3rd,Sec:A)
#include<iostream>
using namespace std;
class student
{
    public:char name [20],dept[10],university[20];
    int id;
    void input();
    void display ();
};
void student::input()
{
    cout <<"Enter Name:";
    cin>>name;
    cout<<"Enter Dept:";
    cin>>dept;
    cout<<"Enter ID:";
    cin>>id;
    cout<<"Enter University:";
    cin>>university;
}
void student::display()
{
    cout<<"\nName:"<<name;
    cout<<"\nDept:"<<dept;
    cout<<"\nID:"<<id;
    cout<<"\nUniversity:"<<university;
}
int main()
{
student s;
s.input();
s.display();
}
