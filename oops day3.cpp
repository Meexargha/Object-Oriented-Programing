//shalow and deep copy
class student {
public:
  string name;
  double cgpa;
student(string name, float cgpa){
    this->name = name;
    this->cgpa = cgpa;
}
void getinfo(){
    cout<< name;
    cout<< cgpa;
  }
};
int main(){
  student s1("balchand1", 6.9);
  
}

class Demo:
    data = pointer to int

    constructor(value):
        allocate memory for int
        store value

    copy constructor:   // default provided by compiler
        just copy pointer (same memory)

    destructor:
        delete data
------------------------------------------------------
          class Demo:
    data = pointer to int

    constructor(value):
        allocate memory for int
        store value

    copy constructor(custom):
        allocate new memory
        copy value from original object

    destructor:
        delete data
--------------------------------------------------------------
          student(string name, double cgpa){
              this->name = name;
              cpgaptr = cgpa;
          }
//destructor
            ~student(){
                cout <<"balchand delete"
            }
int main(){
  student s1("balchand bc", 6.0);
  s1.getinfo();
  return 0;
}
--------------------------------------------------------
  inheritance 

  class person (){

  public: 
  string name;
  int age;
  person(string name, int age){
    this->name = name;
    this-.age = age;
    }
  }
class student: public person{
//here we get name and age from parent class 
int roll;

void getinfo(){
  cout << name;
  cout << age;
  cout << roll;
    } 
} 


int main (){
  student s1;
  s1.name = "abcd";
  s1.age = 22;
  s1.roll = 69;
  s1.getinfo();
  return 0;
}
