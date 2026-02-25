//1)swap the 2 numbers
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a = 2;
//     int b = 3;

//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;

//     cout<<"a "<<a<<endl;
//     cout<<"b "<<b;
// }

//2)Check if the ith bit is set or not
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 13;
//     int i = 2;

//     if((n & (1<<i)) != 0)
//     {
//         cout<<"set bit";
//     }
//     else{
//         cout<<"not a set bit";
//     }
// }

//3)Set the ith bit
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 12;
//     int i = 1;

//     int ans = n | (1<<i);
//     cout<<ans;
// }


//4)Clear the ith bit
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 13;
//     int i = 2;

//     int ans = n & ~(1<<i);
//     cout<<ans;
// }


//5)Toggle the ith bit
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 13;
//     int i = 1;

//     int ans = n ^ (1<<i);
//     cout<<ans;
// }


//6)Remove the last set bit
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 13;
    
//     int ans = n & (n-1);
//     cout<<ans;
// }

//7)Check if the number is power of 2 or not
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 16;

//     if((n & (n-1)) == 0)
//     {
//         cout<<"Power of 2";
//     }
//     else{
//         cout<<"Not a power of 2";
//     }
// }

//8)Count the number of set bits in a given number
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 13;
    int cnt = 0;
    while(n > 0)
    {
        if(n % 2 == 1)
        {
            cnt = cnt + 1;
        }
        n = n / 2;
    }
    if(n == 1)
    {
        cnt = cnt + 1;
    }
    cout<<"Set Bits: "<<cnt;
}


