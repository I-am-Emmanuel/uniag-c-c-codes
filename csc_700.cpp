#include <iostream>
#include <conio.h>
using namespace std;
#include <iomanip>  // For setprecision


void squareValue(int x) {
    cout << "In integer function: " << x * x << endl;
}

void squareValue(float x) {
    cout << fixed << setprecision(2);
    cout << "In float function: " << x * x << endl;
}

void squareValue(double x) {
    cout << fixed << setprecision(2);
    cout << "In double function: " << x * x << endl;
}

int main() {
    int i = 5;
    float f = 2.2f;
    double d = 3.3;
    
    squareValue(i);  // Calls int version
    squareValue(f);  // Calls float version
    squareValue(d);  // Calls double version
    
    return 0;
}

// // Correct function prototype with default parameters
// void functionWithDefaults(int var1, int var2 = 2, int var3 = 3);

// // Illegal prototype (commented out)
// // void badFunc(int var1 = 1, int var2);  // Error: Cannot have non-defaulted parameters after defaulted ones

// int main() {
//     // functionWithDefaults();  // Illegal - first parameter is required
//     functionWithDefaults(4);     // Output: 423 (uses defaults for var2 and var3)
//     functionWithDefaults(4, 5);  // Output: 453 (uses default for var3)
//     functionWithDefaults(4, 5, 6); // Output: 456 (no defaults used)
// }

// void functionWithDefaults(int one, int two, int three) {
//     cout << one << two << three << endl;
// }





// // Function prototype with default parameter
// double compute(int length, int width, int height = 1);

// int main() {
//     cout << compute(4, 4, 4) << endl;  // Uses three values - result is 64
//     cout << compute(4, 4) << endl;      // Uses two values (height defaults to 1) - result is 16
// }

// // Function definition
// double compute(int length, int width, int height) {
//     return length * width * height;
// }











// // Inline function to calculate gross pay
// inline double computeGross(double hours, double rate) {
//   return hours * rate;  
// }

// int main() {
//   double hrsWorked = 37.5, rateOfPay = 12.45, gross;
  
//   gross = computeGross(hrsWorked, rateOfPay);  // Inline function call
  
//   cout << endl << "Gross pay is " << gross;
// }







// void increaseArray(int nums[]);

// int main() {
//     int nums[4] = {4, 21, 300, 612};
//     int x;
    
//     // Display original array
//     for(x = 0; x < 4; ++x)
//         cout << nums[x] << " ";
//     cout << endl;
    
//     increaseArray(nums);
    
//     // Display modified array
//     for(x = 0; x < 4; ++x)
//         cout << nums[x] << " ";
//     cout << endl;
    
//     getch();
// }

// void increaseArray(int values[]) {  // Fixed parameter declaration
//     int y;
//     for(y = 0; y < 4; ++y)
//         ++values[y];  // Increment each array element
// }
// // Function prototype moved outside main()
// double computeDiscountedPrice(const double &price);

// int main() {
//     double price, priceAfterDiscount;
    
//     cout << "Enter the price of the item ";
//     cin >> price;
    
//     priceAfterDiscount = computeDiscountedPrice(price);
    
//     cout << "The original price is $" << price << endl;
//     cout << "Your final price after discount is $" << priceAfterDiscount;
    
//     getch();
// }

// double computeDiscountedPrice(const double &price) {
//     double newPrice;
    
//     if(price > 100.00)
//         newPrice = price * 0.80;  // 20% discount
//     else
//         newPrice = price * 0.90;  // 10% discount
    
//     return newPrice;
// }


// // Function prototype moved outside main()
// void results(int num1, int num2, int* div, int* mod);

// int main() {
//     int a = 19, b = 7, dividend, modulus;
    
//     results(a, b, &dividend, &modulus);  // Fixed: changed $ to &
    
//     cout << "Dividend is " << dividend 
//          << " and modulus is " << modulus;
    
//     getch();
// }

// void results(int num1, int num2, int* oneAddress, int* anotherAddress) {
//     *oneAddress = num1 / num2;    // Stores division result
//     *anotherAddress = num1 % num2; // Stores modulus result
// }






// // Function prototypes moved outside main()
// int resultDiv(int num1, int num2);
// int remainder(int num1, int num2);

// int main() {
//     int a = 19, b = 7;
//     int dividend, modulus;
    
//     dividend = resultDiv(a, b);  // Call division function
//     modulus = remainder(a, b);   // Call modulus function
    
//     cout << "Dividend is " << dividend 
//          << " and modulus is " << modulus;
    
//     getch();
// }

// int resultDiv(int num1, int num2) {
//     return num1 / num2;  // Simplified return statement
// }

// int remainder(int num1, int num2) {
//     return num1 % num2;   // Simplified return statement
// }




// class Customer {
// public:
//     int custId;
//     char custName[15];
// };

// // Function prototypes (moved outside main())
// Customer getCustomerData();
// void printCustomerData(Customer oneCustomer);

// int main() {
//     Customer oneCustomer;
//     oneCustomer = getCustomerData();
//     printCustomerData(oneCustomer);
//     getch();
// }
// Customer getCustomerData() {
//     Customer cust;
//     cout << "Enter customer ID number ";
//     cin >> cust.custId;
//     cout << "Enter customer's last name ";
//     cin >> cust.custName;
//     return cust;
// }
// void printCustomerData(Customer c) {
//     cout << "ID is #" << c.custId << " and name is " << c.custName << endl;
// }

// void computeTax(double amount);

// int main() {
//     double price;
    
//     cout << "Enter an item's price ";
//     cin >> price;
//     computeTax(price);
//     getch();
// }

// void computeTax(double amount) {
//     double tax;
//     tax = amount * 0.07;  // Changed .07 to 0.07 for better readability
//     cout << "The tax on " << amount << " is " << tax << endl;
// }


// int val = 42;
// int main() {
//   int val = 315; //local val
//   cout <<val<<" "; // 315 display
//   cout<<::val; // 42 display
// }



// int main()
// {
//     const char *firstName = "Mary";
//     const char *secName = "Danielle";
    
//     cout << "First name is " << firstName 
//          << " and second name is " << secName << endl;
    
//     firstName = secName;
    
//     cout << "First name is " << firstName 
//          << " and second name is " << secName << endl;
    
//     getch();
// }









// void main()
// {
//     int sales[7] = {500, 300, 450, 200, 525, 800, 1000};
//     int *p = sales;  // Fixed typo: changed 'scales' to 'sales' and removed [0]
//     int x;

//     for(x = 0; x < 7; ++x)
//         cout << "$" << sales[x] << " ";
//     cout << endl;

//     for(x = 0; x < 7; ++x)
//         cout << "$" << p[x] << " ";
//     cout << endl;

//     for(x = 0; x < 7; ++x)
//         cout << "$" << *(sales + x) << " ";
//     cout << endl;

//     for(x = 0; x < 7; ++x)
//         cout << "$" << *(p + x) << " ";
//     cout << endl;

//     getch();
// }

// int main()
// {
//     int *p1, *p2;

//     p1 = new int;
//     *p1 = 42;
//     p2 = p1;
//     cout << "*p1 == " << *p1 << endl;
//     cout << "*p2 == " << *p2 << endl;

//     *p2 = 53;
//     cout << "*p1 == " << *p1 << endl;
//     cout << "*p2 == " << *p2 << endl;

//     p1 = new int;
//     *p1 = 88;
//     cout << "*p1 == " << *p1 << endl;
//     cout << "*p2 == " << *p2 << endl;

//     cout << "Hope you got the point";
//     return 0;
// }





// int main()
// {
//     char firstName[10] = "Mary";
//     char secName[10] = "Mary";
    
//     if(strcmp(firstName, secName) == 0)
//         cout << firstName << " and " << secName << " are the same" << endl;
//     else
//         cout << firstName << " and " << secName << " are different" << endl;
    
//     strcpy(firstName, "Danielle");
    
//     if(strcmp(firstName, secName) == 0)
//         cout << firstName << " and " << secName << " are the same" << endl;
//     else
//         cout << firstName << " and " << secName << " are different" << endl;
    
//     getch();
// }








// int main()
// {
//     char name[10];
//     cout<<"Enter a name ";
//     cin>>name;
//     cout<<"You entered "<<name;
//     getch();
// }

// // Figure 3-19 A program that reads a name
// int main()
// {
//     char firstName[12];
//     cout<<"Enter a name ";
//     cin>>firstName;
//     cout<<"First name is "<<firstName<<endl;
//     cin>>firstName;
//     cout<<"First name is "<<firstName<<endl;
//     getch();
// }



// class Automobile {
// public:
//     int year;
//     double milesPerGallon;
// };

// int main() {
//     const int fleetSize = 4;
//     Automobile fleet[fleetSize];
//     int x;
//     double total = 0, avg;

//     for (x = 0; x < fleetSize; ++x) {
//         cout << "Enter car year: ";
//         cin >> fleet[x].year;

//         cout << "Enter miles per gallon: ";
//         cin >> fleet[x].milesPerGallon;

//         total += fleet[x].milesPerGallon;
//     }

//     avg = total / fleetSize;

//     for (x = 0; x < fleetSize; ++x) {
//         cout << "The " << fleet[x].year << " car gets "
//              << fleet[x].milesPerGallon << " miles per gallon.\n";
//     }

//     cout << "The fleet average is " << avg << " miles per gallon." << endl;

//     return 0;
// }


// void fillUp(int a[], int size) {
//     cout << "Enter " << size << " numbers:\n";
//     for (int i = 0; i < size; i++)
//         cin >> a[i];

//     cout << "The last array index used is " << (size - 1) << endl;
// }

// int main() {
//     const int SIZE = 5;
//     int numbers[SIZE];

//     fillUp(numbers, SIZE);

//     return 0;
// }








// int main()
// {
//     const int arraySize = 4;
//     int partNum[arraySize] = {210, 312, 367, 456};
//     double partPrice[arraySize] = {1.29, 2.45, 5.99, 1.42};

//     int neededPart;
//     int x;

//     cout << "Enter the part number you want: ";
//     cin >> neededPart;

//     for (x = 0; x < arraySize; ++x)
//         if (neededPart == partNum[x])
//             cout << "The price is $" << partPrice[x] << endl;
//     return 0;
// }













// int main(){
//   double premium[4] = {49.95, 76.25, 93.55, 102.95};
//   int dependents;
//   cout <<"How many dependents fo you have? ";
//   cin>>dependents;
//   if (dependents > 3)
//    dependents = 3;
//    cout<<"Your premium is $"<<premium[dependents]<<endl;
// }




// int main (){
//   int testScore[30];
//   int test = 0, a;
//   double total = 0;
//   double average;
//   cout<<"Enter first test score, or 999 to quit ";
//   cin>>testScore[test];
//   while (testScore[test] != 999){
//     total += testScore[test];
//     ++test;
//     cout<<"Enter next test score or 999 to quit ";
//     cin >>testScore[test];
//   }
//   cout <<"The entered test scores are: ";
//   for(a = 0; a < test; ++a)
//   cout <<testScore[a]<<" ";
//   average = total/test;
//   cout <<"The average test score is "<<average<<endl;
//   getch();
// }



// int main(){
//   const int arraySize = 12;
//   double sales[arraySize];
//   int a;
//   // Data entry loop 
//   // enter sales figure for each salesperson
//   for (a = 0; a< arraySize; ++a){
//     cout <<"Enter sales for salesperson #" <<a<<", ";
//     cin >>sales[a];
//   }
//   // Arithmetic loop -
//   // compute 8 percent commission for each salesperson
//   for (a=0; a< arraySize; ++a)
//   sales[a] = sales[a] * .08;
//   // output loop
//   // - print commission for each salesperson
//   for (a=0; a < arraySize; ++a)
//   cout <<"commission for salesperson #"<<a<<" is "
//       <<sales[a]<<endl;
//       getch();
//   return 0;
// }



// int add_two_numbers(int a, int b){
//   return a + b;
// };

// int main(){
//   int result = add_two_numbers(76, 20);
//   cout << result <<endl;
// };

// void greet(){
//   cout << "Hello world"
// };
// void arrayInsertion(){
//   int arrayInt[5] = {34, 56, 12, 3, 99};
//   int x;
//   for (x = 0; x < (sizeof(arrayInt) - sizeof(arrayInt[0])); ++x){
//       cout << arrayInt[x] <<endl;
//   }
// }
// void arrayInsertion2(){
//   double prices[10];
//   int sub;
//   for (sub = 0; sub < 10; ++sub){
//       cout <<"Enter a price: ";
//       cin >> prices[sub];   
//   }
// }
// int main()
// {
//   cout << "Question Page 10" <<endl;
//   arrayInsertion();
//   arrayInsertion2();
// }






// void counter(){
//     int count = 0;
//     cout << count << endl;
//     count = count + 1;
//     cout << count << endl;
//     count += 1;
//     cout << count << endl;
//     count ++;
//     cout << count << endl;    
// };


// // C++ LECTURE1 PAGE 27
// void displaySum()
// {
//     cout << 12 + 9 << endl;
//     int sum = 12 + 9;
//     cout << sum << endl;
// };

// void premiumDueCalculation(){
//     int driverAge, numTickets;
//     double premiumDue = 75.32;
//     cout <<"Enter driver's age :";
//     cin >> driverAge;
//     cout << "Enter traffic tickets issued :";
//     cin >> numTickets;
//     if (driverAge<26)
//         premiumDue += 100;
//     if (driverAge > 50)
//         premiumDue -= 50;
//     if (numTickets==2)
//         premiumDue += 60.25;
//     cout << "Premium due is "<<premiumDue;
// }



// C++ LECTURE1 PAGE 35 $ 36 The if statement
// void getGenderCode1(){
//     char genderCode;
//     cout << "Enter F for female or M for male : ";
//     cin >> genderCode;
//     if (genderCode == 'F')
//         cout << "Female" << endl;
//     else
//         cout <<"Male"<< endl;
// };
// void getGenderCode2(){
//     char genderCode;
//     double premium = 99.95;
//     cout << "Enter F for female or M for male : ";
//     cin >> genderCode;
//     if (genderCode == 'F')
//         cout << "Female. Premium is "<< premium <<endl;
//     else
//         {
//             premium += 40.00;
//             cout <<"Male. Premium is "<< premium << endl;
//             }
// };

// void getDept(){
//   int dept;
//   cout <<"Enter this value for department:  (1: Hr, 2: Sales, 3: Production): ";
//   cin >> dept;

//   switch (dept)
//   {
//   case 1:
//     cout << "Human Resources";
//     break;
//   case 2:
//     cout <<"Sales";
//     break;
//   case 3:
//     cout << "Production";
//     break;
  
//   default:
//   cout << "No available department";
//     break;
//   }
// }

// THE WHILE LOOP 
// void countLoop(){
//   int count = 1;
//   while (count < 5)
//   {
//     cout << count <<endl;
//     ++count;
//   }
// }

// void countLoop2(){
//   int e = 1;
//   while (e < 2)
    
//   {
//     cout << "Help I can't stop!"<< endl;
//   }
  
// }

// void countingLoop2(){
//   int e = 1;
//   while (e < 2)
//   {
//     cout << "I do stop as soon as e becomes 2 ";
//     ++e;
//   }
  
// };
// // THE for Statement PAGE 49
// void countLoop3(){
// int num;
// num = 1;
// while (num < 4)
// {
//   cout << num<< endl;
//   ++num;
// }
// for (num = 1; num < 4; ++num){
//   cout << num <<endl;
// }
// }


// void consoleIO(){
//   int myAge = 21;
//   cout <<"The value of myAge is "<<myAge<<endl;
//   cout <<"The value of &myAge is "<<&myAge<<endl;
//   getch();
// }

// void arrayDelare(){
//   int singleInt = 52;
//   int arrayInt[5] = {12, 36};
//   cout <<singleInt<<endl;
//   cout <<arrayInt[0]<<endl;
//   ++singleInt;
//   ++arrayInt[0];
//   cout <<singleInt<<endl;
//   cout <<arrayInt[0]<<endl;
//   singleInt *= 2;
//   arrayInt[0] *= 2;
//   cout <<singleInt<<endl;
//   cout <<arrayInt[0]<<endl; 
//   getch();
// }
