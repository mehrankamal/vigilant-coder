//Problem:          
//Link:             

#include<bits/stdc++.h>

using namespace std;

class Box
{
    private:
        int l, b, h;
    public:
        Box(void)
        {
            l=0;
            b=0;
            h=0;
        }
        Box(int length, int breadth, int height)
        {
            l=length;
            b=breadth;
            h=height;
        }
        Box(Box &other)
        {
            l = other.getLength();
            b = other.getBreadth();
            h = other.getHeight();
        }
        int getLength(void)
        {
            return l;
        }
        int getBreadth(void)
        {
            return b;
        }
        int getHeight(void)
        {
            return h;
        }
        long long calculateVolume(void)
        {
            return (long long)l*b*h;
        }

        bool operator < (Box &other)
        {
            if(l < other.l)
                return true;
            if(b < other.b && l == other.l)
                return true;
            if(h < other.h && b == other.b && l == other.l)
                return  true;
            return false;
        }

        friend ostream & operator << (ostream & out, Box & B)
        {
            out << B.l << " " << B.b << " " << B.h;
        }
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.calculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}