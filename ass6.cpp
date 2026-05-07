#include<iostream>
using namespace std;

// Q1

class Book{

    string title;
    string author;
    int ISBN;

public:

    bool addNewBook(string &title,string &author,int &ISBN);

    bool removeBooks(int &ISBN);

    void displayDetails();
};

bool Book::addNewBook(string &title,string &author,int &ISBN){

    this->title=title;
    this->author=author;
    this->ISBN=ISBN;

    return true;
}

bool Book::removeBooks(int &ISBN){

    if(this->ISBN==ISBN){

        title="";
        author="";
        this->ISBN=0;

        return true;
    }

    return false;
}

void Book::displayDetails(){

    cout<<title<<endl;
    cout<<author<<endl;
    cout<<ISBN<<endl;
}


// Q2

class Book2{

    string title;
    string author;
    int ISBN;

public:

    Book2(){

        title="None";
        author="None";
        ISBN=0;
    }

    Book2(string title,string author,int ISBN){

        this->title=title;
        this->author=author;
        this->ISBN=ISBN;
    }

    Book2(Book2 &b){

        title=b.title;
        author=b.author;
        ISBN=b.ISBN;
    }

    bool removeBooks(int ISBN){

        if(this->ISBN==ISBN){

            title="";
            author="";
            this->ISBN=0;

            return true;
        }

        return false;
    }

    void displayDetails(){

        cout<<title<<endl;
        cout<<author<<endl;
        cout<<ISBN<<endl;
    }
};


// Q3

class Account{

    const long accno;

    long tid;

    string type;

    double balance;

public:

    Account(long a,double b)
    : accno(a){

        balance=b;

        tid=0;
    }

    long depositAmount(const long to,
                       const long from,
                       const double amount){

        balance+=amount;

        tid++;

        type="Credit";

        return tid;
    }

    long creditAmount(const long to,
                      const long from,
                      const double amount){

        balance-=amount;

        tid++;

        type="Debit";

        return tid;
    }

    void displayDetails() const{

        cout<<accno<<endl;
        cout<<balance<<endl;
        cout<<tid<<endl;
        cout<<type<<endl;
    }
};


// Q4

class B;

class A{

    int x;

public:

    A(int a){

        x=a;
    }

    friend void add(A,B);
};

class B{

    int y;

public:

    B(int b){

        y=b;
    }

    friend void add(A,B);
};

void add(A a1,B b1){

    cout<<a1.x+b1.y<<endl;
}


// Q5

class Complex{

    int real,img;

public:

    Complex(int r=0,int i=0){

        real=r;
        img=i;
    }

    Complex(Complex &c){

        real=c.real;
        img=c.img;
    }

    void display(){

        cout<<real<<" + "<<img<<"i"<<endl;
    }

    friend Complex sum(Complex,Complex);
};

Complex sum(Complex c1,Complex c2){

    Complex temp;

    temp.real=c1.real+c2.real;

    temp.img=c1.img+c2.img;

    return temp;
}


int main(){

    // Q1

    Book b[5];

    string t,a;

    int id;

    t="OOP";
    a="ABC";
    id=101;

    b[0].addNewBook(t,a,id);

    t="DBMS";
    a="XYZ";
    id=102;

    b[1].addNewBook(t,a,id);

    t="OS";
    a="PQR";
    id=103;

    b[2].addNewBook(t,a,id);

    t="CN";
    a="LMN";
    id=104;

    b[3].addNewBook(t,a,id);

    t="DSA";
    a="EFG";
    id=105;

    b[4].addNewBook(t,a,id);

    int rem=103;

    b[2].removeBooks(rem);

    for(int i=0;i<5;i++){

        b[i].displayDetails();
    }



    // Q2

    Book2 b1;

    Book2 b2("Math","AAA",201);

    Book2 b3(b2);

    b1.displayDetails();

    b2.displayDetails();

    b3.displayDetails();



    // Q3

    Account ac1(1001,5000);

    ac1.depositAmount(1001,2001,1000);

    ac1.creditAmount(3001,1001,500);

    ac1.displayDetails();



    // Q4

    A obj1(10);

    B obj2(20);

    add(obj1,obj2);



    // Q5

    Complex c1(3,4);

    Complex c2(5,6);

    Complex c3;

    c3=sum(c1,c2);

    c3.display();


    return 0;
}