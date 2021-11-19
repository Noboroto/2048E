#include <iostream>
using namespace std;

void left(int &, int &, int &);
void right(int &, int &, int &);
void print(int, int, int);

int main()
{
    //input gird
    cout << "9 numbers:\n"
    int b0, b1, b2, b3, b4, b5, b6, b7, b8;
    cin >> b0 >> b1 >> b2 >> b3 >> b4 >> b5 >> b6 >> b7 >> b8;
    //input move
    cout << "Move:\n"
    char move;
    cin >> move;
    //output grid
    cout << "Grid:\n";
    print(b0, b1, b2);
    print(b3, b4, b5);
    print(b6, b7, b8);
    //logic
    if (move == 'a')
    {
        left(b0, b1, b2);
        left(b3, b4, b5);
        left(b6, b7, b8);
    }
    if (move == 'd')
    {
        right(b0, b1, b2);
        right(b3, b4, b5);
        right(b6, b7, b8);
    }
    //output next move
    cout << "Next move:\n";
    print(b0, b1, b2);
    print(b3, b4, b5);
    print(b6, b7, b8);    
}

void left(int &b0, int &b1, int &b2)
{
    if (b0 == 0)
    {
        if (b1 == 0)
        {
            b0 = b2;
            b2 = 0;
        }
        else
        {
            if (b1 == b2)
            {
            b0 = b1*2;
            b1 = 0;
            b2 = 0;
            }
            else
            {
                b0 = b1;
                b1 = b2;
                b2 = 0;
            }
            
        }
         
    }
    if (b1 == 0)
    {
        if (b0 == b2)
        {
            b0 = b0*2;
            b2 = 0;
        }
        else
        {
            b1 = b2;
            b2 = 0;
        }       
    }
    if (b2 == 0)
    {
        if (b0 == b1)
        {
            b0 = b0*2;
            b1 = 0;
        }
        if (b0 == 0)
        {
            b0 = b1;
            b1 = 0;
        }    
    }
    if (b0 != 0)
    {
        if (b0 == b1)
        {
            b0 = b0*2;
            b1 = b2;
            b2 = 0;
        }
        else
        {
            if (b1 == b2)
            {
                b1 = b1*2;
                b2 = 0;
            }
            
        }
        
    }    
}

void right(int &b0, int &b1, int &b2)
{
    if (b2 == 0)
    {
        if (b1 == 0)
        {
            b2 = b0;
            b0 = 0;
        }
        else
        {
            if (b1 == b0)
            {
            b2 = b1*2;
            b1 = 0;
            b0 = 0;
            }
            else
            {
                b2 = b1;
                b1 = b0;
                b0 = 0;
            }
            
        }
         
    }
    if (b1 == 0)
    {
        if (b2 == b0)
        {
            b2 = b2*2;
            b0 = 0;
        }
        else
        {
            b1 = b0;
            b0 = 0;
        }       
    }
    if (b0 == 0)
    {
        if (b2 == b1)
        {
            b2 = b2*2;
            b1 = 0;
        }
        if (b2 == 0)
        {
            b2 = b1;
            b1 = 0;
        }    
    }
    if (b2 != 0)
    {
        if (b2 == b1)
        {
            b2 = b2*2;
            b1 = b0;
            b0 = 0;
        }
        else
        {
            if (b1 == b0)
            {
                b1 = b1*2;
                b0 = 0;
            }
            
        }
        
    }
}
void print(int a, int b, int c)
{
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "_ _ _";
            }
            else
            {
                cout << "_ _ " << c;
            }
            
        }
        else
        {
            if (c == 0)
            {
                cout << "_ " << b << " _";
            }
            else
            {
                cout << "_ " << b << " " << c;
            }
        }        
    }
    else
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << a << " _ _";
            }
            else
            {
                cout << a << " _ " << c;
            }
        }
        else
        {
            if (c == 0)
            {
                cout << a << " " << b << " _" ;
            }
            else
            {
                cout << a << " " << b << " " << c;
            }              
        }
        
    }
    cout << endl;
}