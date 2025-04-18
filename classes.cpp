# include <iostream>
# include <stdio.h>
using namespace std;


class Maths{
    public: 
        int add(int a, int b){
            return a + b;
        }

        double add(double a, double b){
            return a + b;
        }

        int add(int a, int b, int c){
            return a + b + c;
        }

};

int main(){
    Maths m;
    cout<<m.add(10,20)<<endl;
    cout<<m.add(10.9,20.1)<<endl;
    cout<<m.add(10,20,10);
}

// class Animals{
//     public : virtual void speak(){
//         cout <<"Animal sound!"<<endl;
//     }
// };

// class Dogs: public Animals{

//     public: void speak() override{
//         cout<<"Woof!"<<endl;
//     }
// };

// class Cats: public Animals{
//     public: void speak() override{
//         cout<<"Meow!"<<endl;
//     }
// };

// int main(){
//     Animals *dog = new Dogs;
//     Animals *cat = new Cats;

//     cat->speak();
//     dog->speak();

//     delete cat;
//     delete dog;

//     return 0;
// };





























// class Animal {
// public:
//     // Virtual function (can be overridden)
//     virtual void speak() {
//         cout << "Animal sound!" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     // Override speak()
//     void speak() override {
//         cout << "Woof!" << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     // Override speak()
//     void speak() override {
//         cout << "Meow!" << endl;
//     }
// };

// int main() {
//     Animal *animal1 = new Dog();  // Pointer of base class, object of derived
//     Animal *animal2 = new Cat();

//     animal1->speak();  // Calls Dog's speak() (not Animal's)
//     animal2->speak();  // Calls Cat's speak()

//     delete animal1;
//     delete animal2;

//     return 0;
// }

// // Virtual Inheritance
// // base class with a speciesName member variable
// class Animal {
// private:
//     string species_name;

// public:

//     // constructor that accepts 
//     // a species name for initialization
//     Animal(const string& name) : species_name(name) {
//         cout << "Animal constructor called" << endl;
//     }

//     void show_species() const {
//         cout << "This animal belongs to the species: " << species_name << endl;
//     }
// };

// // WingedAnimal class with virtual inheritance from Animal
// class WingedAnimal : virtual public Animal {
// public:
//     // constructor that initializes 
//     // the Animal part of WingedAnimal
//     WingedAnimal(const string& name) : Animal(name) {
//         cout << "WingedAnimal constructor called" << endl;
//     }
// };

// // Mammal class with virtual inheritance from Animal
// class Mammal : virtual public Animal {
// public:
//     // constructor that initializes 
//     // the Animal part of Mammal
//     Mammal(const string& name) : Animal(name) {
//         cout << "Mammals constructor called" << endl;
//     }
// };

// // Bat class inherits from WingedAnimal and Mammal
// class Bat : public WingedAnimal, public Mammal {
// public:
//     // Bat constructor
//     // note that Animal's constructor will only be called once
//     // due to virtual inheritance.
//     Bat() : Animal("Bat"), WingedAnimal("Bat"), Mammal("Bat") {
//     }

//     void show_info() {
//         cout << endl << "It's a unique animal! Here are some details:" << endl;
        
//           // show the species_name
//           // demonstrating the shared member variable
//         show_species();
//     }
// };

// int main() {
//     Bat my_bat;
//     my_bat.show_info();
//     return 0;
// }



// // Example 3: C++ private Inheritance
// // C++ program to demonstrate the working of private inheritance
// class Base {
//   private:
//     int pvt = 1;

//   protected:
//     int prot = 2;

//   public:
//     int pub = 3;

//     // function to access private member
//     int getPVT() {
//       return pvt;
//     }
// };

// class PrivateDerived : private Base {
//   public:
//     // function to access protected member from Base
//     int getProt() {
//       return prot;
//     }

//     // function to access private member
//     int getPub() {
//       return pub;
//     }
// };

// int main() {
//   PrivateDerived object1;
//   cout << "Private cannot be accessed." << endl;
//   cout << "Protected = " << object1.getProt() << endl;
//   cout << "Public = " << object1.getPub() << endl;
//   return 0;
// }



// // C++ program to demonstrate the working of protected inheritance

// class Base {
//   private:
//     int pvt = 1;

//   protected:
//     int prot = 2;

//    public:
//     int pub = 3;

//     // function to access private member
//     int getPVT() {
//       return pvt;
//     }
// };

// class ProtectedDerived : protected Base {
//   public:
//     // function to access protected member from Base
//     int getProt() {
//       return prot;
//     }

//     // function to access public member from Base
//     int getPub() {
//       return pub;
//     }
// };

// int main() {
//   ProtectedDerived object1;
//   cout << "Private cannot be accessed." << endl;
//   cout << "Protected = " << object1.getProt() << endl;
//   cout << "Public = " << object1.getPub() << endl;
//   return 0;
// }




// // C++ program to demonstrate the working of public inheritance

// class Base {
//   private:
//     int pvt = 1;

//   protected:
//     int prot = 2;

//   public:
//     int pub = 3;

//     // function to access private member
//     int getPVT() {
//       return pvt;
//     }
// };

// class PublicDerived : public Base {
//   public:
//     // function to access protected member from Base
//     int getProt() {
//       return prot;
//     }
// };

// int main() {
//   PublicDerived object1;
//   cout << "Private = " << object1.getPVT() << endl;
//   cout << "Protected = " << object1.getProt() << endl;
//   cout << "Public = " << object1.pub << endl;
//   return 0;
// }


// // base class
// class Animal {

//   private:
//    string color;

//   protected:
//    string type;

//   public:
//    void eat() {
//        cout << "I can eat!" << endl;
//    }

//    void sleep() {
//        cout << "I can sleep!" << endl;
//    }

//    void setColor(string clr) {
//        color = clr;
//    }

//    string getColor() {
//        return color;
//    }
// };

// // derived class
// class Dog : public Animal {

//   public:
//    void setType(string tp) {
//        type = tp;
//    }

//    void displayInfo(string c) {
//        cout << "I am a " << type << endl;
//        cout << "My color is " << c << endl;
//    }

//    void bark() {
//        cout << "I can bark! Woof woof!!" << endl;
//    }
// };

// int main() {
//    // Create object of the Dog class
//    Dog dog1;

//    // Calling members of the base class
//    dog1.eat();
//    dog1.sleep();
//    dog1.setColor("black");

//    // Calling member of the derived class
//    dog1.bark();
//    dog1.setType("mammal");

//    // Using getColor() of dog1 as argument
//    // getColor() returns string data
//    dog1.displayInfo(dog1.getColor());

//    return 0;
// }


// class Animal{

//   public: void sleep(){
//     cout<<"I am sleeping"<<endl;
//   }
//   public: void eat(){
//     cout<<"I am eating"<<endl;
//   }

// };

// class Dog : public Animal{
//   public : string speak(string action){
//     if (action == "happy"){
//       return "whinning";
//     } else if (action == "angry")

//     {
//       return "backing";
//     }
    
//   }
// };

// int main(){
//   Dog dog1;
//   dog1.eat();
//   dog1.sleep();
//   string action;
//   cout<<"Enter dog word action: ";
//   cin>>action;
//   cout<<dog1.speak(action);

// }

// class ClassB;

// class ClassA {
//     private:
//         int numA;

//         // friend class declaration
//         friend class ClassB;

//     public:
//         // constructor to initialize numA to 12
//         ClassA() : numA(12) {}
// };

// class ClassB {
//     private:
//         int numB;

//     public:
//         // constructor to initialize numB to 1
//         ClassB() : numB(1) {}
    
//     // member function to add numA
//     // from ClassA and numB from ClassB
//     int add() {
//         ClassA objectA;
//         return objectA.numA + numB;
//     }
// };

// int main() {
//     ClassB objectB;
//     cout << "Sum: " << objectB.add();
//     return 0;
// }


// class Distance {
//   private:
//       int meter;
      
//       // friend function
//       friend int addFive(Distance);

//   public:
//       Distance() : meter(0) {}
      
// };

// // friend function definition
// int addFive(Distance d) {

//   //accessing private members from the friend function
//   d.meter += 5;
//   return d.meter;
// }

// int main() {
//   Distance D;
//   cout << "Distance: " << addFive(D);
//   return 0;
// }


// encapsulation
// class Rectangle{
//   private : int length; int breadth;

//   public :
//   void setLength(int len){
//     length = len;
//   }
//   void setBreadth(int brth){
//     breadth = brth;
//   }

//   int getLength(){
//     return length;
//   }

//   int getBreadth(){
//     return breadth;
//   }

//   int getArea(){
//     return length * breadth;
//   }
// };

// int main(){
//   Rectangle rec1;

//   rec1.setLength(7);
//   cout<<rec1.getLength()<<endl;
//   rec1.setBreadth(3);
//   cout<<rec1.getBreadth()<<endl;
//   cout<<rec1.getArea()<<endl;
//   return 0;
// }


// // protected datatype
// class ParentClass{
//   protected: int age;

// };
// // declare child class
// class SampleChild : public ParentClass {

//   public: void displayAge(int a) {
//        age = a;
//        cout << "Age = " << age << endl;
//    }

// };

// int main() {
//    int ageInput;

//    // declare object of child class
//    SampleChild child;

//    cout << "Enter your age: ";
//    cin >> ageInput;

//    // call child class function
//    // pass ageInput as argument
//    child.displayAge(ageInput);

//    return 0;
// }



// // private class 
// class Sample1 {
//   private : int age;

//   public: void displayAge(int a){
//     age = a;
//     cout<< "Age is : "<<age<<endl;

//   }
// };

// int main(){
//   Sample1 samp1;
//   int inputAge;
//   cout<<"Enter your age: ";
//   cin>>inputAge;
//   samp1.displayAge(inputAge);

// }


// public class 
// class Sample {
//   public : int age;

//   public: void displayAge(){
//     cout<< "Age is : "<<age<<endl;

//   }
// };

// int main(){
//   Sample samp1;
//   cout<<"Enter your age: ";
//   cin>>samp1.age;
//   samp1.displayAge();

// }

// class Wall {
//     private:
//       double* length;
//       double* height;
  
//     public:
  
//       // initialize variables with parameterized constructor
//       Wall(double len = 1.0, double hgt = 1.0) : length{new double{len}}, height{new double{hgt}} {
//       }
      
//       // copy constructor with a Wall object as parameter
//       // copies data of the obj parameter
//       Wall(const Wall& obj) : length{new double{*(obj.length)}}, height{new double{*(obj.height)}} {
//       }
      
//       void setLength(double len) {
//           *length = len;
//       }
      
//       double calculateArea() {
//         return *length * *height;
//       }
      
//       // destructor to deallocate memory
//       ~Wall() {
//           delete length;
//           delete height;
//       }
//   };
  
//   int main() {
//     // create an object of Wall class
//     Wall wall1(10.5, 8.6);
  
//     // copy contents of wall1 to wall2 by copy constructor
//     Wall wall2 = wall1;
    
//     // change the length of wall2
//     wall2.setLength(11.5);
  
//     // print areas of wall1 and wall2
//     cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
//     cout << "Area of Wall 2: " << wall2.calculateArea();
  
//     return 0;
//   }
  


// // Example 2: Constructor overloading
// // C++ program to demonstrate constructor overloading
// #include <iostream>
// using namespace std;

// class Room {
//    private:
//     double length;
//     double breadth;

//    public:
//     // 1. Constructor with no arguments
//     Room() {
//         length = 6.9;
//         breadth = 4.2;
//     }

//     // 2. Constructor with two arguments
//     Room(double l, double b) {
//         length = l;
//         breadth = b;
//     }
//     // 3. Constructor with one argument
//     Room(double len) {
//         length = len;
//         breadth = 7.2;
//     }

//     double calculateArea() {
//         return length * breadth;
//     }
// };

// int main() {
//     Room room1, room2(8.2, 6.6), room3(8.2);

//     cout << "When no argument is passed: " << endl;
//     cout << "Area of room = " << room1.calculateArea() << endl;

//     cout << "\nWhen (8.2, 6.6) is passed." << endl;
//     cout << "Area of room = " << room2.calculateArea() << endl;

//     cout << "\nWhen breadth is fixed to 7.2 and (8.2) is passed:" << endl;
//     cout << "Area of room = " << room3.calculateArea() << endl;

//     return 0;
// }


// class Person {
//     private:
//      int age;
 
//     public:
//      // 1. Constructor with no arguments
//      Person() {
//          age = 20;
//      }
 
//      // 2. Constructor with an argument
//      Person(int a) {
//          age = a;
//      }
 
//      int getAge() {
//          return age;
//      }
//  };
 
//  int main() {
//      Person person1, person2(45);
 
//      cout << "Person1 Age = " << person1.getAge() << endl;
//      cout << "Person2 Age = " << person2.getAge() << endl;
 
//      return 0;
//  }
 

// class Wall {
//     private:
//       double length;
//       double height;
//       double breadth;
  
//     public:
//       // parameterized constructor to initialize variables
//       Wall(double len, double hgt, double brth) : length{len}, height{hgt}, breadth{brth} 
//         {
//             // length = len, breadth = brth, height=hgt;
//       }
  
//       double calculateArea() {
//         return length * height;
//       }
//       double calculateVolume() {
//         return length * height * breadth;
//       }
//   };
  
//   int main() {
//     // create object and initialize data members
//     Wall wall1(10.5, 8.6, 20);
//     Wall wall2(8.5, 6.3, 2.0);
  
//     cout << "Volume of Wall 1: " << wall1.calculateVolume() << endl;
//     cout << "Area of Wall 2: " << wall2.calculateArea();
  
//     return 0;
//   }
  

// class  Wall {
//     private:
//       double length {5.5};
  
//     public:
//       // defaulted constructor to initialize variable
//       Wall() = default;
      
//       void print_length() {
//           cout << "length = " << length << endl;
//       }
//   };
  
//   int main() {
//     Wall wall1;
//     wall1.print_length();
//     return 0;
//   }
  

// class  Wall {
//     private:
//       double length;
  
//     public:
//       // default constructor to initialize variable
//       Wall()
//         : length{5.5} {
//         cout << "Creating a wall." << endl;
//         cout << "Length = " << length << endl;
//       }
//   };
  
//   int main() {
//     Wall wall1;
//     return 0;
//   }
  

// class CalculateAreaAndVolume{

//     public:
//         int length;
//         int breadth;
//         int height;
    

//     double calculateArea(int length, int breadth){
//         return length * breadth;
//     };

//     double calcuateVolume(){
//         return length * breadth * height;
//     };
// };

// int main(){

//     CalculateAreaAndVolume kalculate;
//     kalculate.length = 10;
//     kalculate.breadth = 10;
//     kalculate.height = 10;
    
//     double area1 = kalculate.calculateArea(8, 9);
//     cout <<"The area of the rectangle one is : "<< area1 <<endl;

//     double volume1 = kalculate.calcuateVolume();
//     cout <<"The volume of the room is : "<< volume1<<endl;

// }