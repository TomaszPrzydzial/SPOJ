    #include <iostream>
    #include<string>
 
    using namespace std;
 
    int liczba_testow;
    int liczba_krokow;
 
    int main()
    {
 
        cin >> liczba_testow;
 
        while(liczba_testow--)
        {
            cin >> liczba_krokow;
 
            cout << liczba_krokow*liczba_krokow << endl;
        }
 
 
 
 
        return 0;
    }
