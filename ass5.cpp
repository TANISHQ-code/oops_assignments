#include<iostream>
using namespace std;

// Q1

class Animal{

public:

    void eat(){

        cout<<"Eating"<<endl;
    }
};

class Dog : public Animal{

public:

    void bark(){

        cout<<"Barking"<<endl;
    }
};


// Q2

class Parent{

protected:

    int x;

public:

    void setData(int a){

        x=a;
    }
};

class Child : public Parent{

public:

    void show(){

        cout<<x<<endl;
    }
};


// Q3

class A{

public:

    int a=10;

protected:

    int b=20;
};

class B : public A{

};

class C : protected A{

};

class D : private A{

};


// Q4

// Single Inheritance

class S1{

};

class S2 : public S1{

};


// Multiple Inheritance

class M1{

};

class M2{

};

class M3 : public M1, public M2{

};


// Multilevel Inheritance

class L1{

};

class L2 : public L1{

};

class L3 : public L2{

};


// Hierarchical Inheritance

class H1{

};

class H2 : public H1{

};

class H3 : public H1{

};


// Hybrid Inheritance

class P{

};

class Q : public P{

};

class R : public P{

};

class T : public Q, public R{

};


// Q5

class Base{

public:

    Base(){

        cout<<"Base Constructor"<<endl;
    }

    ~Base(){

        cout<<"Base Destructor"<<endl;
    }
};

class Derived : public Base{

public:

    Derived(){

        cout<<"Derived Constructor"<<endl;
    }

    ~Derived(){

        cout<<"Derived Destructor"<<endl;
    }
};


// Q6

class Book{

protected:

    string title;
    string author;
    int price;

public:

    void setBook(string t,string a,int p){

        title=t;
        author=a;
        price=p;
    }
};

class TextBook : public Book{

    string subject;

public:

    void setSubject(string s){

        subject=s;
    }

    void show(){

        cout<<title<<endl;
        cout<<author<<endl;
        cout<<price<<endl;
        cout<<subject<<endl;
    }
};


// Q7

class Speedometer{

protected:

    int speed;

public:

    void setSpeed(int s){

        speed=s;
    }
};

class FuelGauge{

protected:

    int fuel;

public:

    void setFuel(int f){

        fuel=f;
    }
};

class Thermometer{

protected:

    int temp;

public:

    void setTemp(int t){

        temp=t;
    }
};

class Dashboard : public Speedometer,
                  public FuelGauge,
                  public Thermometer{

public:

    void show(){

        cout<<speed<<endl;
        cout<<fuel<<endl;
        cout<<temp<<endl;
    }
};


// Q8

class LibraryUser{

protected:

    string name;

public:

    void setName(string n){

        name=n;
    }
};

class Student : public LibraryUser{

    int roll;

public:

    void setRoll(int r){

        roll=r;
    }

    void show(){

        cout<<name<<endl;
        cout<<roll<<endl;
    }
};

class Teacher : public LibraryUser{

    int id;

public:

    void setId(int i){

        id=i;
    }

    void show(){

        cout<<name<<endl;
        cout<<id<<endl;
    }
};


// Q9

class Vehicle{

protected:

    string model;

public:

    void setModel(string m){

        model=m;
    }
};

class Truck : public Vehicle{

protected:

    int load;

public:

    void setLoad(int l){

        load=l;
    }
};

class RefrigeratedTruck : public Truck{

    int temp;

public:

    void setTemp(int t){

        temp=t;
    }

    void show(){

        cout<<model<<endl;
        cout<<load<<endl;
        cout<<temp<<endl;
    }
};


// Q10

class Person{

protected:

    string pname;

public:

    void setPerson(string n){

        pname=n;
    }
};

class Staff : virtual public Person{

protected:

    int empid;

public:

    void setStaff(int e){

        empid=e;
    }
};

class Stud : virtual public Person{

protected:

    int roll;

public:

    void setStud(int r){

        roll=r;
    }
};

class TA : public Staff, public Stud{

public:

    void show(){

        cout<<pname<<endl;
        cout<<empid<<endl;
        cout<<roll<<endl;
    }
};


int main(){

    // Q1

    Dog d;

    d.eat();

    d.bark();



    // Q2

    Child c;

    c.setData(50);

    c.show();



    // Q3

    B b1;

    cout<<b1.a<<endl;



    // Q5

    Derived d1;



    // Q6

    TextBook t;

    t.setBook("OOP","ABC",500);

    t.setSubject("C++");

    t.show();



    // Q7

    Dashboard db;

    db.setSpeed(80);

    db.setFuel(50);

    db.setTemp(30);

    db.show();



    // Q8

    Student s;

    s.setName("Rahul");

    s.setRoll(101);

    s.show();



    Teacher tr;

    tr.setName("Amit");

    tr.setId(5001);

    tr.show();



    // Q9

    RefrigeratedTruck rt;

    rt.setModel("Volvo");

    rt.setLoad(1000);

    rt.setTemp(-5);

    rt.show();



    // Q10

    TA ta;

    ta.setPerson("Tanishq");

    ta.setStaff(200);

    ta.setStud(55);

    ta.show();


    return 0;
}