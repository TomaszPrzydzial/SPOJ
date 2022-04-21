    #include <iostream>
 
    using namespace std;
 
    char operat;
    long a, b;
    int rejestr[10];
    bool new_rej;
 
    int main()
    {
        while(cin >> operat)
        {
            cin >> a >> b;
 
            new_rej=false;
            long int result;
 
            switch(operat)
            {
                case '+': result = rejestr[a]+rejestr[b];
                break;
 
                case '-': result = rejestr[a]-rejestr[b];
                break;
 
                case '*': result = rejestr[a]*rejestr[b];
                break;
 
                case '/': result = rejestr[a]/rejestr[b];
                break;
 
                case '%': result = rejestr[a]%rejestr[b];
                break;
 
                case 'z':
                rejestr[a]=b;
                new_rej=true;
                break;
            }
 
            if(new_rej==false) cout << result << endl;
 
        }
 
        return 0;
    }
