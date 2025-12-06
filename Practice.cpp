#ifndef STUDENTS //include if previously not defined
#include "cylinder.h"
#include "constants.h"
#include<iostream>
#include <string>
#include <iomanip>
#include<cmath>
#include <cstring>
// #include <concepts> // checkout 4 requirements in concepts, combining concepts
// #include "operations.h"

using namespace std;

// class A{
// public:
//     int a, b;
//     A() = default;
//     A(int a, int b){
//         a = a;
//         b = b;
//     }
// };

// auto add(integral auto a, integral auto b){
//     return a + b;
// } // integral concept

// template <typename T>
// concept increment = requires (T a, T b){
//     a++;
//     b++;
//     a=a+1;
// }

// int assign(int &a, int &b){
//     a = 5;
//     b = 6;
// }

// template <typename T> T maximum(T a, T b); //this is just a blueprint, compiler generates function based on parameters' datatype

// template <typename T> T& minumum(const T& a, const T&b);

// template <typename T>
// requires integral<T>
// T add(T a, T b); // you need to do #include<concepts>

int main(){

    // Comment

    /* Block comments*/
    /* Block comments cant be nested*/
    // std::cout << "Hellow world" << std::endl;
    // std::cout << "number 1" << std::endl;
    // std:: cout << "Number 2" << std :: endl;
    
    // int a = 7/0;
    // std::cout << "Values is: " << a << std::endl;

    // declaration

    // int a {1};
    // int b {2};
    // int n{}; // intialize n to 0
    // int sum {a + b};
    // cout << sum;

    // int a (10);
    // int b (a);
    // int c (); // Initialize to 1
    // int d {};
    // cout<< a << b << c << d;

    // std::cout<< a << " " << b << std::endl;
    // std::cout << "Enter your name and Age: ";
    // std::string name;
    // int age1;
    // std::cin >> name;
    // std::cin >> age1;

    // std::cout<< "Hi " << name << ". Your age is: " << age1<< std::endl;

    // std::string full_name;
    // std::cout << "Enter your full name: " << std::endl;
    // std::getline(std::cin, full_name);
    // std::cout<< full_name<< std::endl;

    // int n1 = 15;
    // int n2 = 017;
    // int n3 = 0xF;

    // cout << n1 << n2 << n3;

    // float n1{123456.0};
    // float n2{};
    // cout << n1;

    // auto n1{33u};
    // n1 = -3;
    // cout<<n1;

    // std::right;
    // std::cout << std::setfill('-');
    // std::cout << std::setw(10) << "Aman" << std::setw(10) << endl;
    // std::internal;
    // std::cout << std::uppercase;
    // std::cout << std::setw(10) << std::hex << 45;
    // std::cout<<"abc" << endl;
    // std:: cout<< std::dec;
    // std :: cout << std::showpoint;
    // std::cout << 12;

    // std::cout << std::numeric_limits<int>::min();

    // cout << floor(6.2) << ceil(6.4);
    // cout << log(exp(2)) << endl;
    // cout << abs(-100) << endl;
    // cout << exp(2) << endl;
    // cout << log(7)<<endl;
    // cout << pow(2, 2);
    
    // char a = 40;
    // char b = 50;
    // short int a = 40;
    // short int b = 50;

    // cout << a << " " << b << endl;
    // cout << sizeof(a+b);

    // bool a = true;

    // cout << a << endl;
    // cout << boolalpha << a << endl;

    // auto max = (22<5) ? 4 : 22.5f;    
    // cout << max;

    // size_t a = -1; // unsigned int
    // cout << a << endl;
    // cout << sizeof(a);

    // int a[5] {1,2,3,4};
    // int b[5] {};
    // int length = sizeof(a)/sizeof(a[0]);
    // for(int i = 0; i<length; i++){
    //     cout << a[i] <<endl;
    // }
    // cout<< endl;
    // for(auto i : b){
    //     cout << i << endl;
    // }
    // cout<<endl;
    // cout<< &a;

    // int a[] {12.75};
    // cout<<a[0]<<endl;

    // const int arr[] = {1,2,3,4,5};
    // arr[0] = 5; // error

    // char array[5] {'H', 'e', 'l', 'l', 'o'};
    // char array1[] = {"Hello"};
    // cout << array << endl;
    // cout << array1<<endl;
    // for( auto ch : array){
    //     cout<<ch;
    // }
    // int arr[5] {1,2,3,4,5};
    // cout << arr[6];
    // arr[6] = 6; // crashes the program
    // cout << arr[6];

    // double * p {nullptr}, pp; // pp is variable
    // cout << sizeof(p) << endl;
    // cout << sizeof(pp) << endl;

    // int var {23};
    // int *p {&var};
    // cout << p << endl;
    // cout << *p << endl;
    // var = 45;
    // cout << *p << endl << p << endl;

    // const char * message {"Hello There"};
    // cout << *message;

    // int * ptr = new int(5);
    // cout << *ptr << endl;
    // delete ptr; // dont call delete twice or more for same pointed
    // ptr = nullptr;// point to null after deleting
    // ptr = new int (22); // you can reuse in this format only
    // cout << *ptr << endl;
    // int * ptr1 {new int (11) }; // memory allocated in heap 
    // cout << ptr1 << endl;

    // int * ptr {new int(20)};
    // // int * ptr1 = ptr;
    // cout << *ptr << "Hi" << endl;
    // // delete ptr;
    // // cout << *ptr1;

    // try{
    //     int *ptr = new(nothrow) int[100];
    // }catch(exception &ex){
    //     cout << "Something got wrong" << ex.what()<< endl;
    // }

    // int size;
    // cin >> size;

    // int * students = new int[size] {}; // intialized to 0
    // int * students1 {new int[size] {}}; // intialized to 0
    // for(int i = 0; i<size; i++){
    //     cout << students[i] << endl;
    //     cout << students1[i] << endl;
    // } // range based for loop won't work for dyanamically allocated array
    // delete [] students1;
    // students1 = nullptr;

    // int a = 20;
    // int& reference = a;
    // cout << reference<< endl;
    // a = 50;
    // cout << reference<< endl;
    // cout << sizeof(reference) << endl;
    // cout << "reference address " << &reference << endl;
    // cout << "a address " << &a << endl;
    // reference = 30;
    // cout << "value of a is " << a << endl;
    // int b = 20;
    // &reference = b; // gives error that expression must be of modifiable value
    // // reference must be intialized
    // // dont use for dereferencing
    // // cant change to reference to something else, reference are like const pointers
    // you can also make reference const after which you can't alter value using reference, making reference like read only
    // int a = 10;
    // const int * p = &a;
    // *p = 20; // gives error as pointer is const

    // cout << isalnum('C') << endl;
    // cout << isalnum('&') << endl;
    // cout << isalnum('7') << endl; // outputs 4
    // cout << isalpha('7') << endl << endl;
    // string s = "Hello there my Friend. Here is my PIN code 364001";
    // int blank = 0;
    // int upper = 0;
    // int lower = 0;
    // int digit = 0;
    // for(int i = 0; i<s.length(); i++){
    //     if(isblank(s[i])) blank++;
    //     if(isupper(s[i])) upper++;
    //     if(islower(s[i])) lower++;
    //     if(isdigit(s[i])) digit++;
    // }
    // cout << blank << endl << upper << endl << lower << endl << digit << endl;
    // s[6] = toupper(s[6]);
    // cout << s[6];
    // cout << sizeof(s) << endl;
    // cout << s.length() << endl;

    // const char * s1 = "bbcd";
    // const char * s2 = "abcd";
    // cout << strcmp(s1, s2, 4) << endl; // has to be const char *
    // // print -1 if lhs before rhs
    // cout << strchr(s1, 'c') << endl; // gets first occurence of character and returns iterator to first occurence
    // cout << strrchr(s1, 'b') << endl; // gets last occurence of char and returns iteratir to last occurence
    // cout << strlen(s1) << endl; // works for const char* only
    // cout << sizeof(s1) << endl;
    
    // char s1[50]= "Hello ";
    // char s2[50] = "World";
    // cout << strcat(s1, s2) << endl;
    // char s1 [50] = {"HEllo"};
    // char s2[50] = {"Hi "};
    // strcpy(s2, s1);
    // cout << s1 << endl << s2<< endl;

    // string s {"Helloo World", 5}; // first 5 chars only
    // cout << s <<endl;

    // int a;
    // int b;
    // assign(a, b);
    // cout << a << " "<< b << endl;
   
    // [](){
    //     cout << "YOu can use this block only once" << endl;
    // }();
    // auto fun = [](){
    //     cout << "Hello" << endl;
    // };
    // fun();
    // auto fun1 = [](double a, double b){
    //     cout << a+b << endl;
    // };
    // fun1(5,10);
    // auto fun2 = [](int a, int b){
    //     return a+b;
    // };
    // auto result = fun2(10, 20);
    // cout << result << endl;
    // cout << [](int a, int b){
    //     return a+b;
    // }(2,3) << endl;

    // auto fun3 = [](double a, double b)->double{
    //     return a + b;
    // };
    // auto result1 = fun3(5.1, 10.2);
    // cout << result1 << endl;

    // int a = 10;
    // auto fun4 = [a](){
    //     cout << a << endl;
    // }; // this is call by value
    // fun4();
    // a++;
    // fun4();

    // auto fun5 = [&a](){
    //     cout << a << endl;
    // }; // call by referece
    // fun5();
    // a++;
    // fun5();

    // auto fun6 = [=](){
    //     cout << a << endl;
    // }; // capture all variables by VALUE declared ABOVE this lambda function, you can't access b using this
    // int b = 6;
    // auto fun7 = [&](){
    //     cout << b << endl;
    // }; // capture all variable by REFERENCE ABOVE this function

    
    // cout << maximum(2,3); // data tyoes of all parameters passed have to be same
    // cout << maximum(1,2) << endl;
    // cout << maximum<double>(1,1.2) << endl; // we can enforce to pass any parameter as double if possible otherwise cause compilation error
    // cout << maximum("abc", "bca");
    // const char*g{"abc"};
    // const char*h{"bcd"};

    // A a;
    // cout << a.a << endl;
    // cout << a.b;

    Cylinder c1;
    c1.setHeight(2);
    c1.setRadius(2);
    cout << c1.volume();
    

    return 0;
}

// template <typename T> 
// requires integral<T>
// T add(T a, T b){
//     return a + b;
// } 

// template <typename T>
// requires is_integral<T>
// T add(T a, T b){
//     return a + b;
// }

// template <integral T>
// T add (T a, T b){
//     return a + b;
// }

// template <typename T> T
// maximum(T a, T b)
// {
//     return (a>b)?a:b;
// }

// template <typename T> T& minimum(const T& a, const T& b){
//     return (a<b)?a:b;
// }

// template <>
// const char* maximum<const char *>(const char *a, const char * b){
//     return (strcmp(a,b) > 0) ?a:b;
// }



#endif