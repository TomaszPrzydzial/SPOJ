    #include <iostream>
     
    using namespace std;
     
     
    unsigned int n, D;
     
    int main()
    {
     
        cin >> D;
     
        for(int i=0; i<D; i++)
        {
            cin >> n;
     
            unsigned int dziesiatki, jednosci;
     
            dziesiatki = 0;
            jednosci = 1;
     
            if(n!= 0 && n!=1)
            {
                      switch(n)
            {
                case 2: jednosci = 2;
                break;
                case 3: jednosci = 6;
                break;
     
                case 4:
                    {
                        dziesiatki = 2;
                        jednosci = 4;
                    }
                break;
     
                case 5:
                case 6:
                    {
                        dziesiatki = 2;
                        jednosci = 0;
                    }
                break;
     
                case 7:
                    {
                        dziesiatki = 4;
                        jednosci = 0;
                    }
                break;
     
                case 8:
                    {
                        dziesiatki = 2;
                        jednosci = 0;
                    }
                break;
     
                case 9:
                    {
                        dziesiatki = 8;
                        jednosci = 0;
                    }
                break;
     
                default: jednosci = 0;
                break;
            }
     
            }
     
            cout << dziesiatki << " " << jednosci << endl;
     
        }
     
        return 0;
    }
