  class teacher {
//prop
public: 
  string name;
  string dept;
  string sub;
private:
 double sallary;

//method 
void changeDept(string newDept){
  dept = newDept;
  }
//seter
void setSallary (double s){
  sallary = 5;
}
//gettter
double getsallary(){
  return sallary;
}

};
//object
int main(){
  teacher t1;
  teacher t2;
  t1.name= "balchand";
  t1.sub = "reels";
  t1.dept = "insta";
  t1.sallary= "45";
  cout << t1.name <<endl;
  return 0;
}


----------------------------------------------------
//encapsulation 

  class Account {
  private:
  double balance; //data hiding
  string password;
  
  public:
  string  accountId;
  string username;
  
  }
  -----------------------------------------------------

  //constructor
  here in the code teacher t1 //constructor call
exapmple:
public:
teacher(){
  cout<< "hi i am constructor\n";
}
int main(){
  teacher t1; 
  teacher t2;
}
//output hi i am constructor
  -----------------------------------------------------------
  // initilastion in constructor
    public: 
    teacher(){
    dept ="Computer Science";
    }
int main(){
  cout<< t1.dept;
  cout << t2.dept;
}
//output computer science 2 times
----------------------------------------------
  //parameterized constructor 
  public:
  teacher(string n, string d, string s, double sal){
  name= n;
  dept =d;
  subject = s;
  salary = sal;
  }
//here we have initilized the
//we have to accese it
void getInfo(){
  cout << "name";
  cout<< "subject";
}
int main(){
  teacher t1("balchand","reels", "insta", 45);
  t1.getinfo();
  return 0;
}

-----------------------
  //copy constructor
  int main(){
  teacher t1("balchand","reels", "insta", 45);
  teacher t2(t1);//copy of t1 in t2 like t1
  t2.getinfo()
  t1.getinfo();
  return 0;
}
