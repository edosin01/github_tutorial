#include <bits/stdc++.h>
using namespace std;

string str[] = {"Tam", "Toan", "Trang", "Cong", "Trung", "Tu"};

void swap(int &a, int &b)
{
    int tg = a;
    a = b;
    b = tg;
}

void next_config(int a[], int n, int i)
{
    //Tim x[k] be nhat trong doan cuoi lớn hon x[i]
    int k = n-1;
    while (a[k] < a[i])
    {
        k--;
    }
    //Dao gia tri a[i] va a[k]
    swap(a[i], a[k]);
    //Dao nguoc doan cuoi
    int j = n-1; i++;
    while (i < j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }
}

void display_config(int a[], int n)
{
    for(int i = 0; i < n; i++)
        cout << str[a[i] - 1] << " ";
    cout << endl;
}

void listing_configs(int n)
{
    int i;
    int a[n];
    for(int i = 0; i < n; i++)
        a[i] = i+1;
    do {
        display_config(a, n); //In một cấu hình
        //Tim phan tu lien truoc doan cuoi giam dan
        i = n - 2;
        while (i > -1 && a[i] > a[i+1])
            i--;
        if (i > -1) 
        {
            next_config(a, n, i);
        }
    } while (i > -1);
}

int main() {
    int n;
    cout << "So cac chu so: ";
    cin >> n;
    listing_configs(n);
}