#include <iostream>
#include<string.h>
#include<vector>
#include<list>
#include<set>
#include<map>


extern "C"
{
#include"E:\madhu\NameMangling\test.h"
}
using namespace std;


int printf(const char *format,...);
class A
{


    int size;
    char *ptr;

public:
    A()
    {
     
     cout<<"git push origin success";
     ptr=0;
        cout<<"Default Constructor"<<endl;
    }

    A(char *ptr1)
    {
        size=strlen(ptr1);
        ptr=new char [size+1];

        strcpy(ptr,ptr1);

    }
    A(A & i)
    {
        size=i.size;
        ptr=new char[size+1];
        strcpy(ptr,i.ptr);

    }

    void show()
    {
        cout<<ptr<<endl;
        cout<<size<<endl;
    }

~A()
    {
        cout<<"Desctructor called"<<endl;
        delete [] ptr;
        ptr=0;

    }


   };
class B
{
    int a;
public:
    B(int a1=0)
    {

        a=a1;
    }
    void disp()
    {
        cout<<"a is "<<a<<endl;

    }

};

class Img
{
    float real;
    float img;

public:

    Img()
    {

    }

    Img(float x ,float y) {

        real=x;
        img=y;

    }

    // operator overloading in c++

 Img operator +(Img  other)
 {

     Img temp;

     temp.real=real + other.real;
     temp.img=img+other.img;
     return temp;

 }

 void display()
 {
     cout<<real<<"+j";
     cout<<img<<endl;

 }

};

// forward declaration

class second;

class first
{
    int x;
public:

    first(int xx)
    {
        x=xx;

    }

   friend int  sum(first obj1,second obj2);


    void disp2()
    {
    cout<<x<<endl;


    }

};

class second
{
    int y;
public:
    second(int yy)
    {
        y=yy;
    }

    friend int  sum(first obj1,second obj2);
    void disp3()
    {
     cout<<y<<endl;

    }


};

int  sum(first obj1,second obj2)
{

    return(obj1.x + obj2.y);

}

class AB
{

    static int data3;
    int data1;
public:

    AB()
    {
        data1=12;
        data3++;

    }

  static  void show()
    {
        //cout<<"object "<<data3<<" created"<<endl<<endl;
        cout<<"No of objects "<<data3<<endl;


    }


};

int AB::data3; //fdefinitions of a static variable



class A1
{
    int size;
    char *ptr6;



public:
        A1(char *ptr5)
        {
            size=strlen(ptr5);

            ptr6=new char[size +1];

            strcpy(ptr6,ptr5);

        }


        A1(A1 & other)
        {
            size=other.size;
            ptr6=new char[size + 1];
            strcpy(ptr6,other.ptr6);





        }

        ~A1()
        {
          cout<<"in Destructor"<<endl;
          delete [] ptr6;



        }

    void values()
    {
        cout<<ptr6<<endl;

    }




};


int main(int argc, char *argv[])
{

vector<int> v1;
vector<int> v2(3,444);

vector<int>::iterator it1=v2.begin();

cout<<"int vector v2 3 int value is 444"<<endl;
cout<<"no of elements in v2 is  "<<v2.size()<<endl;

for(it1=v2.begin();it1!=v2.end();it1++)
{

    cout<<*it1<<endl;


}



cout<<endl<<endl;




v1.push_back(34);
v1.push_back(55);
v1.push_back(66);
v1.push_back(77);
v1.push_back(99);
v1.push_back(111);
cout<<"no of elements in v1 is "<<v1.size()<<endl;
v1.pop_back();
cout<<"After Pop Operation"<<endl;
cout<<"no of elements in v1 is "<<v1.size()<<endl;


vector<int> myvec (100,418);

cout<<"size of myvec is  "<<sizeof(myvec)<<endl;
cout<<"size of myvec is  "<<myvec.size()<<endl;

myvec.push_back(22);
myvec.push_back(909);


cout<<"Before erase is  "<<myvec.at(0)<<endl;
cout<<"Before erase is  "<<myvec.at(1)<<endl;


myvec.erase(myvec.begin(),myvec.end());

cout<<"after erase is  "<<myvec[0]<<endl;
cout<<"after erase is  "<<myvec[1]<<endl;





vector<int>::iterator it;

for(it=v1.begin();it!=v1.end();it++)
{
    cout<<*it<<endl;

}



    A1 a1_obj1("thinking in cpp");
    {

    A1 a1_obj2(a1_obj1);


    }

    a1_obj1.values();








//
    cout<<"SIZE OF AB Class"<<sizeof(AB)<<endl<<endl<<endl;

     AB ab1;
    // AB::show();

     AB ab2;
    // AB::show();
     AB ab3;
     AB::show();




    int yyy=12;
    cout<<"new is operator"<<endl;


    printf("name mangling in c++\n");


    first f1(100);
    second f2(200);
    cout<<"working with friend functions"<<endl;
    cout<<sum(f1,f2)<<endl;
    cout<<"friend functions can call normal member functions"<<endl;



    Img im(2.3,4.6),im1(2.2,2.4);
    Img im3=im+im1;

    im.display();
    im1.display();
     im3.display();



    B obj5(444);
    B obj6(obj5);
    obj5.disp();
    obj6.disp();


    int i;
   A obj3;

    A obj1("hello world");
    obj1.show();
    {
    A obj2(obj1);
    obj2.show();
    }

obj1.show();

    //cout << "Hello World!" << endl;

    int *p=new int [10];

    p[0]=12;
    p[1]=12;
    p[2]=12;
    p[3]=12;
    p[4]=12;
    p[5]=34;
    p[6]=34;
    p[7]=34;
    p[8]=34;
    p[9]='\0';

    for(i=0;i<10;i++)
        cout<<p[i]<<endl;
    delete [] p;
    p[4]=999;
    for(i=0;i<10;i++)
        cout<<p[i]<<endl;


    return 0;
}
