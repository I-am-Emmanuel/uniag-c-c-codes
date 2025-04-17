# include <iostream>
# include <stdio.h>
using namespace std;


// encapsulation
class Rectangle{
  private : int length; int breadth;

  // public : Rectangle(int len, int brth) : length(len), breadth(brth){

  // };

  public :
  void setLength(int len){
    length = len;
  }
  void setBreadth(int brth){
    breadth = brth;
  }

  int getLength(){
    return length;
  }

  int getBreadth(){
    return breadth;
  }

  int getArea(){
    return length * breadth;
  }
};

int main(){
  Rectangle rec1;

  rec1.setLength(7);
  cout<<rec1.getLength()<<endl;
  rec1.setBreadth(3);
  cout<<rec1.getBreadth()<<endl;
  cout<<rec1.getArea()<<endl;
  return 0;
}


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