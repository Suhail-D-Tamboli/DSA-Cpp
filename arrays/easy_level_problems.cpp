//1)Largest element in an array

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {3,2,1,5,2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int max = INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     cout<<max;

// }

//2)Second Largest Element in the Array
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {3,2,1,5,2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int max = INT_MIN;
//     int smax = INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] > max)
//         {
//             smax = max;
//             max = arr[i];
//         }
//     }
//     cout<<smax;

// }


//3)Second Smallest Element in the Array
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {3,2,1,5,2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int min = INT_MAX;
//     int smin = INT_MAX;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] < min)
//         {
//             smin = min;
//             min = arr[i];
//         }
//     }
//     cout<<smin;

// }

//4)Check if the array is Sorted
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for(int i=1;i<n;i++)
//     {
//         if(arr[i] < arr[i-1])
//         {
//             cout<<"Array is not sorted";
//             return 0;
//         }
//     }
//     cout<<"Array is sorted";
// }


//5)Remove the duplicates from the sorted array
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {1,1,2,2,3,3};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int i = 0;
//     for(int j=1;j<n-1;j++)
//     {
//         if(arr[i] != arr[j])
//         {
//             i++;
//             arr[i] = arr[j];
//         }
//     }
//     int k = i + 1;
//     for(int i=0;i<k;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }


//6)Left Rotate the array by one place
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int temp = arr[0];

//     for(int i = 1;i<n;i++)
//     {
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }



//7)Left Rotate the array by d places
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int k = 2;

//     k = k % n;

//     reverse(arr,arr+k);
//     reverse(arr+k,arr+n);
//     reverse(arr,arr+n);

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }

//8)Moving Zeros to end (Brute Force Appraoch)
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {1,2,0,3,0,4,0,0,5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     vector<int>temp;

//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] != 0)
//         {
//             temp.push_back(arr[i]);
//         }
//     }
//     int k = temp.size();
//     for(int i=0;i<k;i++)
//     {
//         arr[i] = temp[i];
//     }

//     for(int i=k;i<n;i++)
//     {
//         arr[i] = 0;
//     }

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }


//Optimal solution
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {1,2,0,3,0,4,0,0,5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int j = -1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] == 0)
//         {
//             j = i;
//             break;
//         }
//     }
//     for(int i=j+1;i<n;i++)
//     {
//         if(arr[i] != 0)
//         {
//             swap(arr[i],arr[j]);
//             j++;
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }

//9)Union of two sorted arrays
//Brute Force Approach 

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr1[] = {1,1,2,3,4,5};
//     int n = sizeof(arr1) / sizeof(arr1[0]);

//     int arr2[] = {2,3,4,4,5,6};
//     int m = sizeof(arr2) / sizeof(arr2[0]);

//     set<int>s;
//     vector<int>Union;

//     for(int i=0;i<n;i++)
//     {
//         s.insert(arr1[i]);
//     }
//     for(int i=0;i<m;i++)
//     {
//         s.insert(arr2[i]);
//     }
//     for(auto &it: s)
//     {
//         Union.push_back(it);
//     }
//     int k = Union.size();
//     for(int i=0;i<k;i++)
//     {
//         cout<<Union[i]<<" ";
//     }
// }

//Optimal Solution
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {1,1,2,3,4,5};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2,3,4,4,5,6};
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int i =0, j = 0;
    vector<int>Union;
    while(i < n && j < m)
    {
        if(arr1[i] <= arr2[j])
        {
            if(Union.size() == 0 || Union.back() != arr1[i])
            {
                Union.push_back(arr1[i]);
            }
            i++;

        }
        else{
            if(Union.size() == 0 || Union.back() != arr2[j])
            {
                Union.push_back(arr2[j]);
            }
            j++;

        }
    }

    while(i < n)
    {
        if(Union.back() != arr1[i])
        {
            Union.push_back(arr1[i]);
        }
        i++;
        
        
    }

    while(j < m)
    {
        if(Union.back() != arr2[j])
        {
            Union.push_back(arr2[j]);
        }
        j++;                
    }
    for(auto &it:Union)
    {
        cout<<it<<" ";
    }
}

























