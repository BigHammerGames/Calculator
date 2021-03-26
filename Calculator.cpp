#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <ios>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::setprecision;
using std::sort;
using std::streamsize;
using std::vector;

using namespace std;

void EndOfProgram()
{
    exit(0);
}
void Subtraction()
{
while(true)
{
    int Sub, Subtract, total;

    cout << "\nEnter The Two Numbers To Be Subtract: ";
    cin >> Sub >> Subtract;

    try
    {
        if(Sub == 0 && Subtract == 0 || Sub > 0 && Subtract == 0 || Sub == 0 && Subtract > 0)
        {
            throw Sub;
            throw Subtract;
        }

        else
        {
            total = Sub - Subtract;
            cout << "The Result Is: " << total << "\n";
            EndOfProgram();
        }
    }
    catch(int Zero)
    {
        cout << "Zero Is A Invalid Number Please Try A Different Numbers To Be Subtracted ";
    }
    
}

    }

void Addition()
{
 while(true)
    {
    int Sum, Add, Total;
    cout << "Enter The Two Number To Be Adding: ";
    cin >> Sum >> Add;

    try
    {

        if(Sum == 0 && Add == 0 || Sum > 0 && Add == 0 || Sum == 0 && Add > 0)
        {
            throw Sum;
            throw Add;
        }

        else
        {
            Total = Sum + Add;
            cout << "The Result Is: " << Total << "\n";
            Subtraction();

        }
        
        
    }
    catch(int Zero)
    {
        cout << "Zero Is A Invalid Number Please Try A Different Numbers To Be Adding " << endl;
    }
}
    
    }



void Multiplication()
{
while(true)
{
     int multiply, product, Result;
     
        cout << "\nEnter A Two Numbers To Be Multiplied: ";
        cin >> multiply >> product;
       
    try
        {
    
    if(multiply == 0 && product == 0 || multiply > 0 && product == 0 || multiply == 0 && product > 0)
   {
    throw multiply;
    throw product;


   } 

else
{
Result = multiply * product;
cout << "\nThe Result Is: " << Result << "\n";
Addition();
}
       }
       catch(int zero)
       {
    cout << "Zero Is A Invalid Number Please Try A Different Numbers To Be Multiplied " << endl;
       }
    }
    

}

void Division()
{
    while(true)
    {
    int dividend, divisor, result;
   cout << "\nEnter The Dividend Number: ";
   cin >> dividend;

   cout << "\nEnter The Divisor Number: ";
   cin >> divisor;

   try
   {
       if(divisor == 0 && dividend == 0 || divisor > 0 && dividend == 0 || divisor == 0 && dividend > 0)
       {
        throw divisor;
        throw dividend;
        
       }

       else
       {
    result = dividend / divisor;

    cout << "The Result Is: " << result << "\n";
    Multiplication();
       
       }
   }
   catch(int Zero)
   {
    cout << "Zero Is A Invalid Number Please Try A Different Numbers To Be Divided " << endl;
   }
    }
}


int main()
{
Division();



    // Finding The Median - skipping this exercise to solve this for later
    /* cout << "Please Enter Your First Name: ";
    string name;
    cin >> name;

    cout << "Hello, " << name << "!" << endl;

    cout << "Please Enter Your Midterm And Final Exam Grades: ";
    double midterm, final;
    cin >> midterm >> final;

    cout << "Enter All Your Homework Grades, " "followed by end-of-file: ";

    vector<double> homework;
    double x;
    while(cin >> x)
    
        homework.push_back(x);

        typedef vector<double>::size_type vec_sz;
        vec_sz size = homework.size();
        if(size == 0)
        {
            cout << endl << "You Must Enter Your Grades. " "Please Try Again...." << endl;
            return 1;
        }
    
   sort(homework.begin(), homework.end());

   vec_sz mid = size/2;
   double median;
   median = size % 2 == 0 ? (homework[mid] + homework[mid]) / 2
                                            : homework[mid];

    streamsize prec = cout.precision();
    cout << "Your Final Grade Is " << setprecision(3)
         << 0.2 * midterm + 0.4 * final + 0.4 * median
         << setprecision(prec) << endl;

    return 0; */
   
   
    /* int Save = 80;
    int Health = 10;
    for(int Sum = 70; Sum <= 90; ++Sum )
    {
        std::cout << Sum << " ";
    }

    if(Health < Save)
    {
        std::cout << Health << Save << "It's True ";
    }

    else
    {
        std::cout << "It Is False";
    }

    while(Save <= 90)
    {
        ++Save;
        std::cout << Save << " ";
    }
    return 0;
    */


    // Implementing The Two Numbers Which Numbers Are The Largest
    /*int LargeNumber;
    int SmallNumber;
    cout << "Enter The 1st Number And 2nd Number: ";
    std::cin >> LargeNumber;
    std::cin >> SmallNumber;

    if(LargeNumber > SmallNumber)
    {
        cout << "The LargeNumber Is: " << LargeNumber << " It Is The Largest!";
    }

    else
    {
         cout << "The SmallNumber Is: " << SmallNumber << " It Is The Largest!";
    }

    return 0; 
    */









}





