#include <iostream>
using namespace std;
void permut(int&a,int&b)
{
int x ;
x=a;
a=b;
b=x;
}
void puissance(int a,int b) 
	{
		int i;
		int c=1;
		for(i=1;i<=b;i++)
		{
			c=c*a;
		}
		cout<<a<<" a la puissance "<<b<<" = "<< c;
	}
	int pgcd(int a, int b) {
	      while (a != b) {
	         if (a < b)
	            b = b - a;
	         else
	            a = a - b;
	      }
	      return a;
	   }
	   long fib(long n) {
	      if ((n == 0) || (n == 1))
	         return n;
	      else
	         return fib(n - 1) + fib(n - 2);
	   }
void Min(int a, int b)
{
	if(a<b)
	{
		cout<<"MIN ("<<a<<" , "<<b<<" )  = "<<a<<endl;
	}
	else
	{
		if(a>b)
		{
			cout<<"MIN ("<<a<<" , "<<b<<" )  = "<<b<<endl;
		}
		else
		{
		     cout<<"MIN ("<<a<<" , "<<b<<" )  = "<<b<< " = " <<a<<endl;	
		}
	}
}
void Max(int a, int b)
{
	if(a<b)
	{
		cout<<"MAX ("<<a<<" , "<<b<<" )  = "<<b<<endl;
	}
	else
	{
		if(a>b)
		{
			cout<<"MAX ("<<a<<" , "<<b<<" )  = "<<a<<endl;
		}
		else
		{
		     cout<<"MAX ("<<a<<" , "<<b<<" )  = "<<b<< " = " <<a<<endl;	
		}
	}
}
int facto(int a )
{
	        int f = 1;
	        for (int i=1; i<=a; i++)
	        f=f*i;
	        return(f);
}
void Nbr_Premier(int nbr )
{
	      int reste;
		  bool flag = true;
		        
		  for(int i=2; i <= nbr/2; i++)
		  {
		     reste = nbr%i;
		     if(reste == 0)
		     {
		        flag = false;
		        break;
		     }
		  }
		  if(flag)
		    cout<<nbr<< " est un nombre premier \n";
		  else
		     cout<<nbr<<" n'est pas un nombre premier \n";
}
void Paire_Impaire(int a)
{
	if (a % 2 == 0) {
		      cout<<"Pair \n";
		    }
		    if (a % 2 != 0) {
		      cout<<"Impair \n";
		    }
}
int main(int argc, char** argv) {
    Nbr_Premier(4);
	Paire_Impaire(3);
	cout<<facto(2)<<endl;
	Min(2,4);
	Max(2,4);
	 int a=0,b=0;
	cout<<"a = "; cin>> a;
	cout<<"b = "; cin>>b;
    permut(a,b);
    cout<<"apres permutation : " <<endl;
    cout<<"a = "<<a<<"    " <<endl;
    cout<<"b = "<<b;
	return 0;
}
