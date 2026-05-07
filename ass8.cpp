#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// Q2

void countAlpha(){

    ifstream fin("NOTES.txt");

    char ch;

    int count=0;

    while(fin.get(ch)){

        if(isalpha(ch)){

            count++;
        }
    }

    cout<<"Alphabets = "<<count<<endl;

    fin.close();
}


// Q3

class Student{

    int roll;
    char name[20];

public:

    void input(){

        cin>>roll>>name;
    }

    void show(){

        cout<<roll<<endl;
        cout<<name<<endl;
    }
};


int main(){

    // Q1

    ofstream fout("NUM.txt");

    for(int i=1;i<=200;i++){

        fout<<i<<endl;
    }

    fout.close();



    // Q2

    countAlpha();



    // Q3

    Student s1;

    s1.input();

    ofstream f("data.dat",ios::binary);

    f.write((char*)&s1,sizeof(s1));

    f.close();

    Student s2;

    ifstream fin("data.dat",ios::binary);

    fin.read((char*)&s2,sizeof(s2));

    fin.close();

    s2.show();



    // Q4

    ifstream f1("a.txt");

    ofstream f2("b.txt");

    string str;

    while(getline(f1,str)){

        f2<<str<<endl;
    }

    f1.close();

    f2.close();



    // Q5

    string s;

    cout<<"Enter string: ";

    cin>>s;

    ofstream fs("str.txt");

    fs<<s;

    fs.close();

    cout<<"Length = "<<s.length()<<endl;

    ifstream fr("str.txt");

    char ch;

    while(fr.get(ch)){

        cout<<ch;
    }

    cout<<endl;

    fr.close();



    // Q6

    ofstream fp("file.txt");

    fp<<"Hello World";

    cout<<fp.tellp()<<endl;

    fp.close();

    ifstream fi("file.txt");

    fi.seekg(6);

    cout<<fi.tellg()<<endl;

    string x;

    fi>>x;

    cout<<x<<endl;

    fi.close();


    return 0;
}