#include<iostream>
#include<cstdlib>  //for system("pause");
#include<ctime>
#include<iomanip>
using namespace std;

unsigned long long Fibonacci_Iteration(unsigned long long);
unsigned long long Fibonacci_Recursion (unsigned long long);

const int num=100000;

int main()
{
      unsigned long long answer;
      double the_start, the_end;

      cout<<"The iteration part:"<<endl;
      //start iteration of Fibonacci
      the_start=clock();
      for(int i=0;i<num;i++)
      {
            for(int counter=0;counter<=10;counter++)
                  answer=Fibonacci_Iteration(counter);
            answer=Fibonacci_Iteration(20);
            answer=Fibonacci_Iteration(30);
            answer=Fibonacci_Iteration(35);
      }
      the_end=clock();
      cout<<fixed<<setprecision(3)<<"Iteration of Fibonacci spends "<<(the_end-the_start)/1000<<" s."<<endl;
      //end iterationof Fibonacci

      cout<<endl<<"The recursion part:"<<endl;

      //start recursion of Fibonacci
      the_start=clock();
      for(int i=0;i<num;i++)
      {
            for(int counter=0;counter<=10;counter++)
                  answer=Fibonacci_Recursion(counter);
            answer=Fibonacci_Recursion(20);
            answer=Fibonacci_Recursion(30);
            answer=Fibonacci_Recursion(35);
      }
      the_end=clock();
      cout<<fixed<<setprecision(3)<<"Recursion of Fibonacci spends "<<(the_end-the_start)/1000<<" s."<<endl;
      //end recursion of Fibonacci

      system("pause");
      return 0;
}

unsigned long long Fibonacci_Iteration(unsigned long long number)
{
      if(number==0||number==1)
            return number;
      else
      {
            unsigned long ans,i, n1=1, n2=0;
            for(i=2; i<=number; i++)
            {
                  ans=n1+n2;
                  n2=n1;
                  n1=ans;
            }
            return ans;
      }
}

unsigned long long Fibonacci_Recursion (unsigned long long number)
{
      if (number==0||number==1)
            return number;
      else
            return Fibonacci_Recursion(number-1)+Fibonacci_Recursion(number-2);
}
