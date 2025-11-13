#include <iostream>
#include <stack>


using namespace std;

void przesunPrawo(int tab[], int n, int ile) {
    int size = 0, temp;
    
    while (tab[size]) {
        size++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << tab[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < ile; i++)
    {   
        for (int j = 0; j < size; j++)
        {
            
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << tab[i] << " ";
    }
}

int main()
{
    int tab[] = {1,2,3,4,5};
    przesunPrawo(tab, 2, 2);
}

/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <stack>
#include <iomanip>

using namespace std;

double avg(int numbers[3][3]) {
    double num = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            num += numbers[i][j];
        }
    }
    return num / 9.0;
}

int main()
{
    int tab[3][3] = {{1,3,2},{2,2,1},{0,5,3}};
    cout << setprecision(3)<< avg(tab);
}


/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <stack>
#include <iomanip>

using namespace std;


int sumTab2D(int numbers[5][5]) {
    int result = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
        {
            if (j>i)
            {
                result += numbers[i][j];
            }
        }
    }
    return result;
}

int main()
{
    int tab[5][5] = {   {1,3,2,-1,-3},
                        {2,2,1,-1,0},
                        {0,5,3,1,-3},
                        {1,6,0,1,1},
                        {1,2,3,1,7}    };
    cout << sumTab2D(tab);
}


/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <stack>
#include <iomanip>

using namespace std;

double antidiagonal(double tab[4][4]) {
    double result = 1;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
        {
            if (j == 3 - i)
            {
                result *= tab[i][j];
            }
        }
    }
    return result;
}

int main()
{
    double tab[4][4] = {{1,3,2,-1},
                        {2,2,1,-1},
                        {0,5,3,1},
                        {1,6,0,1}   };
    cout << antidiagonal(tab);
}

