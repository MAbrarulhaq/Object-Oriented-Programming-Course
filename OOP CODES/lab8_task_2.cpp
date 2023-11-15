#include<iostream>
using namespace std;
class secretType{
    private:
        string name;
        int age;
        int weight;
        double height;
    public:
        void print();
        void setName(string n);
        void setAge(int a);
        void setWeight(int w);
        void setHeight(double h);
        string getName();
        int getAge();
        int getWeight();
        double getHeight();
        secretType();
        secretType(string name,int Age, int weight,double height);    
};
void secretType::print(){
            cout<<"Name of type = "<<name<<endl;
            cout<<"Age of type = "<<age<<endl;
            cout<<"Weight of type = "<<weight<<endl;
            cout<<"Height of type = "<<height<<endl;
        }
void secretType:: setName(string n){
            n = name;
        }
void secretType::setAge(int a){
            a = age;
        }
void secretType::setWeight(int w){
            w = weight;
        }
void secretType:: setHeight(double h){
            h=height;
        }
string secretType:: getName(){
            string n;
            return n;
        }
int secretType::getAge(){
            int a;
            return a;
        }
int secretType:: getWeight(){
            int w;
            return w;
        }
double secretType::getHeight(){
            double h;
            return h;
        }
secretType::secretType(){
            name = " ";
            age = 0;
            weight = 0;
            height = 0;
        }
secretType::secretType(string name,int Age, int weight,double height)
{
            cout<<"Constructor with parameter!!!"<<endl;
        }
int main(){
    secretType s;
    s.print();
    s.setName("Samad");
    s.setAge(18);
    s.setWeight(67);
    s.setHeight(5.11);
    s.getName();
    s.getAge();
    s.getWeight();
    s.getHeight();   
}