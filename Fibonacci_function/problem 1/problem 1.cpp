#include<iostream>
#include<cstdlib>  //for system("pause");
#include<ctime>
#include<iomanip>
using namespace std;

unsigned long long Fibonacci_Iteration(unsigned long long);
int main()
{
      cout<<"Input the number of Fibonacci: ";
      unsigned long long n,answer;
      double the_start, the_end;
      cin>>n;
      while(n<0)
      {
            cout<<"Input error! Please input again:";
            cin>>n;
      }

      //start iteration of Fibonacci
      the_start=clock();
      cout<<"Fibonacci ( "<<n<<" ) = ";
      answer=Fibonacci_Iteration(n);
      cout<<answer<<endl;
      the_end=clock();
      cout<<fixed<<setprecision(3)<<"Iteration of Fibonacci spends "<<(the_end-the_start)/1000<<" sec."<<endl;
      //end iteration of Fibonacci

      system("pause");
      return 0;
}

unsigned long long Fibonacci_Iteration(unsigned long long number)
{
      if(number==0||number==1)
            return number;
      else
      {
            unsigned long long ans,i, n1=1, n2=0;
            for(i=2; i<=number; i++)
            {
                  ans=n1+n2;
                  n2=n1;
                  n1=ans;
            }
            return ans;
      }
}
