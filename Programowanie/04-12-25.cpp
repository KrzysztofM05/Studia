KOLOKWIUM: 
ZAD1
#include <iostream>

using namespace std;

int main()
{
    int n1, n2, ilosc = 0;
    cout << "Podaj pierwsza liczbe (n1): ";
    cin >> n1;
    cout << "Podaj druga liczbe (n2): ";
    cin >> n2;
    cout << "\n";

    if (n1 % 2 != 0 || n2 % 2 != 0) {
        cout << "zle podane dane";
    }
    else
    {
        while (n1 != n2) {
            if (n1 > n2)
            {
                n1--;
                n2++;
            }
            else
            {
                n1++;
                n2--;
            }
            cout << ilosc + 1 << ": n1 = " << n1 << ", n2 = " << n2 << "\n";
            ilosc++;
        }

        cout << "\nLiczba krokow: " << ilosc;
    }
}
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
ZAD2

#include <iostream>

using namespace std;

int roznica(char napis1[], char napis2[]) {
	int roznica=0, suma=0,i = 0;
	while(napis1[i]>0 || napis2[i]>0) {
		if (napis1[i] < 0 && napis2[i]>0) {
			roznica = napis2[i];
		}
		else if(napis1[i] > 0 && napis2[i]<0){
			roznica = napis1[i];
		}
		else
		{
			roznica = napis1[i] - napis2[i];
		}
		
		if (roznica < 0) {
			roznica *= -1;
		}
		suma += roznica;
		i++;
	}
	return suma;
}

int main()
{
	char napis1[] = { 'k','o','t','e','k'}, napis2[] = {'p','i','e','s'};
	cout<<roznica(napis1, napis2);
}
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
ZAD3

#include <iostream>

using namespace std;

bool czyPierwsze(int tab[], int rozmiar) {
	for (int i = 0; i < rozmiar; i++)
	{	
		if (tab[i] != 1) {
			for (int j = 2; j < tab[i] - 1; j++) {
				if (tab[i] % j == 0)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int main()
{
	int tab[] = { 3,13,17,2};
	cout<<czyPierwsze(tab, 4);
}
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
ZAD4

#include <iostream>

using namespace std;

int main()
{
    int tab1[5][5] = { {0,2,2,3,4},
                       {-1,3,1,0,5},
                       {2,3,4,-2,6},
                       {1,2,3,3,3},
                       {2,1,2,3,1}, };

    int tab2[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            tab2[i][j] = tab1[j][i];
            cout << tab2[i][j] << " ";
        }
        cout << "\n";
    }
           
}


