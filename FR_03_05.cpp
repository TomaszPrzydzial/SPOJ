    #include <iostream>
 
    using namespace std;
 
    int main()
    {
        int tests;
        cin >> tests;
 
        while(tests--)
        {
            int days;
            cin >> days;
 
            long long int temp_sum, best_sum, best_day=-200000;
 
            temp_sum = best_sum = 0;
 
            for(int i=0; i<days; i++)
            {
                int num;
                cin >> num;
 
                if(i==0) best_day=num;
                else if(num>best_day) best_day=num;
 
                if(temp_sum+num>=0) temp_sum+=num;
                else temp_sum=0;
 
                best_sum = max(temp_sum, best_sum);
 
            }
 
            if(best_day<0 && best_sum==0) best_sum=best_day;
            cout << best_sum << endl;
        }
 
        return 0;
    }
