#include <bits/stdc++.h>
using namespace std;

void next_config(int a[], int n, int i)
{
    //Dat x[i+1], …, x[n] = 0
    a[i] = 1;
    i++;
    while(i < n) {
        a[i] = 0;
        i++;
    }
}

void display_config(int a[], int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i];
    cout << endl;
}

void listing_configs(int n)
{
    int i;
    int a[n] = {0};
    do {
        display_config(a, n);
        i = n-1;
        while (i > -1 && a[i] == 1)
        {
            i--;
        }
        if(i > -1)
            next_config(a, n, i);        
    }
    while(i > -1);
}

int main() {
    int n;
    cout << "Do dai day nhi phan: ";
    cin >> n;
    listing_configs(n);
}