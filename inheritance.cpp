#include<iostream>
using namespace std;
class Human{
public:
int height;
int age;
int weight;
public getAge(){
  return this->age;
}
void setWeight(int w){
  this->weight = w;
}
};
class male: public: Human{
public:
string color;
void sleep(){
  cou<< "Male is sleeping"<<endl;
  }
};
int main(){
  Male object1;
  cout << object1.age<<endl;
  cout<< object.weight<<endl;
  cout<< object1.height<<endl;
  
  //function call
  
  cout<<object1.color<<endl;
  cou<<object1.setWeight(69);
  cout<< object1.weight <<endl;
  obejct1.sleep();
  return 0;
}
