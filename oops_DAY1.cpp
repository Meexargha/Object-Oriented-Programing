class hero {

//properties
public:
 char name[100]
int health ;
char level;

};
int maian(){
//creation of object 
  hero balchand ;
  hero h1;
//how to acces the elements here 
  cout <<  "health" << balchand.heatlh << endl;
  
  retuen 0;
  
  
  //*empty class we get object of size int 1*//
}

//pubic and private

classs hero {

  public:
  int heatlth;
  private:
  char level;

  void print(){
    cout<<level<<endl;
  }
  int main(){
    hero ramesh 
    ramesh.health = 70;
    cout<< ramesh.health;
  }
  //output - 70
  
}
//geter and setter


class hero {
public:
  int heatlth;
  private:
  char level;

 char getlevel(){
  return level;
  
}
void  sethealth(int h){
  heatlth =h;
}
void setlevel(char ch){
  level = ch;
}
};

int main(){
  hero ramesh;
  cout << ramesh.getheatlth() <<endl;//geter
  ramesh.setlevel ('A');//set level 
}

//static and dynamic 
int main(){
  //stactic 
hero a;
//dynamiclay
  hero *b = new hero;
}

//constructor 
class hero{
 hero (){
   cout<<  "constructor called" <<endl';
 }
}
int main(){
  cout << "hi";
  hero ramesh;
  cout<< "hello" <<endl;
}
//output 
//hi
//constructor called --------constructor 
//hello
//----------------------------------------------------------------------
//paramerterised constructor
hero()
