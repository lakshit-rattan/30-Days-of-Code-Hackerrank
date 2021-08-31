#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x=6,y=6,sum=0,max= INT32_MIN;
    
    int arr[x][y];
    
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {
            cin >> arr[i][j];
        }
    }
    
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {
            if (j+2<x && i+2<y)
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if (sum > max)
            max = sum;
        }
    }
    
    cout << max;
}
