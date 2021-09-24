#include <bits/stdc++.h>
using namespace std;

void next_config(int a[], int k, int i)
{
    //Dat x[i+1], …, x[n] = 0
    a[i] += 1;
    i++;
    while(i < k) {
        a[i] = a[i-1] + 1;
        i++;
    }
}

void display_config(int a[], int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i];
    cout << endl;
}

void listing_configs(int n, int k)
{
    int i;
    int a[n];
    for(int i = 0; i < k; i++)
        a[i] = i+1;
    do {
        display_config(a, k);
        i = k-1;
        while (i > -1 && a[i] == (n-k+i+1))
        {
            i--;
        }
        if(i > -1)
            next_config(a, k, i);        
    }
    while(i > -1);
}

int main() {
    int n;
    int k;
    cout << "So cac chu so: ";
    cin >> n;
    cout << "So chu so tao thanh: ";
    cin >> k;
    listing_configs(n, k);
}

//add comment
