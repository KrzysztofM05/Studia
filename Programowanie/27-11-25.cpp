#include <iostream>

using namespace std;

int nwd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else
    {
        return nwd(b, a % b);
    }
}

int main()
{
    cout << nwd(12,6);
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int startF = 17;

void wypiszliczby(int start) {
	cout << start << " ";
	if (start<0)
	{
		while (start != startF) {
			start += 5;
			cout << start << " ";
		}
		return;
	}
	else
	{	
		wypiszliczby(start - 5);
	}
}

int main()
{
	wypiszliczby(startF);
}

//////////////////////////////////////////////////////////////////
//Inny sposob //
//////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int startF = 17;

void wypiszliczby(int start) {
	if (start>0)
	{
		cout << start << " ";
		wypiszliczby(start - 5);
	}
	cout << start << " ";
}

int main()
{
	wypiszliczby(startF);
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

void trojkat(int *tab,int rozmiar) {
	if (rozmiar != 0)
	{
		for (int i = 0; i < rozmiar-1; i++)
		{
			tab[i] = tab[i] + tab[i + 1];
		}
		trojkat(tab, rozmiar - 1);

		for (int i = 0; i < rozmiar; i++)
		{
			cout << tab[i] << " ";
		}
		cout << "\n";
	}

}

int main()
{
	int tab[] = {0, 1, 2, 3, 4};
	trojkat(tab, 5);
}
