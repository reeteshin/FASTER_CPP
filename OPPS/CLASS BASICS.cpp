#include<iostream>
using namespace std;


class Alpha{
//private:
    // int age;
    // string name;
    // int rollno;
public:
    //attribute
    int age;
    string name;
    int rollno;
    int *pr;

    //perametrise constructor
    Alpha(int age,string name,int roll,int run){
        
        this->age = age;
        this->name = name;
        this->rollno = roll;
        this->pr = new int(run);
    }

    //behaviour
    void study(){
        cout<<"Whos is stydying " <<this->name<<endl;
    }
   
    ~Alpha(){
      delete pr;
      cout<<"Destroctor called"<<endl;
    }

};


int main(){

    //dynamic memory allowcation topic left 

    // Alpha A(2,"reetesh",45);
    // Alpha B(2,"Neelesh",45);
    // A.study();
    // B.study();

    Alpha *PTR = new Alpha(3,"ram",90,900);

    cout<<*(PTR->pr)<<endl;
    PTR->study();
    delete PTR;

    





}