/*
 * @Author: Hakan CERAN
 * @Time: 06.08.2022
 * @Content: Box It
 * 
 * */

#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength (); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box
{
    private:
        int l, b, h;

    public:
        Box()
		{
            l = 0;
            b = 0;
            h = 0;
        }
        
        Box(const Box& A)
		{
            l = A.l;
            b = A.b;
            h = A.h;
        }

        Box(int x, int y, int z)
		{
            l = x;
            b = y;
            h = z;
        }

        friend bool operator < (Box& A, Box& B)
		{
            
            bool result = false;
            
            if (A.l < B.l)
			{
                result = true;
            }
			else if ((A.b < B.b) && (A.l == B.l))
			{
                result = true;
            }
			else if ((A.h < B.h) && (A.l == B.l) && (A.b == B.b))
			{
                result = true;
            }
            
            return result;
        }
        
        friend ostream& operator << (ostream& out, Box& B)
		{
            out << B.l << " " << B.b << " " << B.h;
            
            return out;
        }
    
        int getLength ()
		{
            return l;
        }
        int getBreadth ()
		{
            return b;
        }
        int getHeight ()
		{
            return h;
        }
        long long CalculateVolume()
		{
            return (long long) l * b * h;
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
			cout<<temp.CalculateVolume()<<endl;
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

