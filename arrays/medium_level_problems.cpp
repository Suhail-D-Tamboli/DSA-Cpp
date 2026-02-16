//1)Longest Consecutive Sequence
//Brute Force Approach

// #include<bits/stdc++.h>
// using namespace std;

// bool linearSearch(vector<int>&arr , int num)
// {
//     int m = arr.size();

//     for(int i=0;i<m;i++)
//     {
//         if(arr[i] == num)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int main()
// {
//     vector<int>arr = {102, 4, 100, 1, 101, 3, 2, 1};
//     int n = arr.size();

//     int longest = 1;
//     for(int i=0;i<n;i++)
//     {
//         int x = arr[i];
//         int cnt = 1;

//         while(linearSearch(arr,x + 1) == true)
//         {
//             x = x + 1;
//             cnt = cnt + 1;
            
//         }
//         longest = max(longest,cnt);
//     }
//     cout<<longest;


// }

//Better Solution
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int>arr = {102, 4, 100, 1, 101, 3, 2, 1};
//     int n = arr.size();

//     sort(arr.begin(), arr.end());

//     int lastSmaller = INT_MIN;
//     int longest = 1;
//     int cnt = 0;

//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] - 1 == lastSmaller)
//         {
//             cnt++;
//             lastSmaller = arr[i];
//         }
//         else if(arr[i] != lastSmaller)
//         {
//             lastSmaller = arr[i];
//             cnt = 1;
//         }
//         longest = max(longest , cnt);
//     }
//     cout<<longest;


// }


//2)Set Matrix Zeroes
//Brute Force Approach

#include<bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>>&matrix,int n, int m, int i)
{
    for(int j=0;j<m;j++)
    {
        if(matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}

void markCol(vector<vector<int>>&matrix,int n, int m, int j)
{
    for(int i=0;i<n;i++)
    {
        if(matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}

int main()
{
    vector<vector<int>>matrix = {{1,1,1}, {1,0,1}, {1,1,1}};
    int n = matrix.size();
    int m = matrix[0].size();

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j] == 0)
            {
                markRow(matrix,n,m,i);
                markCol(matrix,n,m,j);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j] == -1)
            {
                matrix[i][j] = 0;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
    }
}































