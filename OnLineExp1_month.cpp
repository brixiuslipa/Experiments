/*This illustrates a program that will accept integer values for month*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int q, w, e;
	
	cout<<"Please enter the following\n";
	cout<<"\nEnter Month = ";
	cin>>q;
	cout<<"\nEnter Day = ";
	cin>>w;
	cout<<"\nEnter Year = ";
	cin>>e;
	cout<<"\n";
	
	while ((int(float(q))) == float(q) && (int(float(w))) == float(w)  && (int(float(e))) == float(e))
	
	{
	if (q==1 && w>0 && w<32 && e>999 && e<10000)
	cout<<"January "<<w<<", "<<e;
	else if (q==2 && w>0 && w<29 && e>999 && e<10000)
	cout<<"February "<<w<<", "<<e;
	else if (q==3 && w>0 && w<32 && e>999 && e<10000)
	cout<<"March "<<w<<", "<<e;
	else if (q==4 && w>0 && w<31 && e>999 && e<10000)
	cout<<"April "<<w<<", "<<e;
	else if (q==5 && w>0 && w<32 && e>999 && e<10000)
	cout<<"May "<<w<<", "<<e;
	else if (q==6 && w>0 && w<31 && e>999 && e<10000)
	cout<<"June "<<w<<", "<<e;
	else if (q==7 && w>0 && w<32 && e>999 && e<10000)
	cout<<"July "<<w<<", "<<e;
	else if (q==8 && w>0 && w<32 && e>999 && e<10000)
	cout<<"August "<<w<<", "<<e;
	else if (q==9 && w>0 && w<31 && e>999 && e<10000)
	cout<<"September "<<w<<", "<<e;
	else if (q==10 && w>0 && w<32 && e>999 && e<10000)
	cout<<"October "<<w<<", "<<e;
	else if (q==11 && w>0 && w<31 && e>999 && e<10000)
	cout<<"November "<<w<<", "<<e;
	else if (q==12 && w>0 && w<32 && e>999 && e<10000)
	cout<<"December "<<w<<", "<<e;
	else
	cout<<"\nInvalid date!";
	break;
	}
}
