#include<bits/stdc++.h>
using namespace std;

void decrease(int n)
{
    if(n == 0)
    {
        return;
    }

    cout << n << " ";
    decrease(n-1);
}

void increase(int n)
{
     if(n == 1){
         cout << "1" << " ";
         return;
     }

     increase(n-1);
     cout<<n<< " ";


}

int firstoccurance(int arr[], int n, int i, int key)
{
    if(i == n)
    {
        return -1;
    }

    if(arr[i] == key)
    {
        return i;
    }

    return firstoccurance(arr, n, i+1, key);
}

int lastoccurance(int arr[], int n, int i , int key){
    if(i == 0)
    {
        return -1;
    }

    if(arr[i] == key)
    {
        return i;
    }

    return lastoccurance(arr, n ,i-1, key);
}

void towerofHanoi(int n, char src, char destin, char helper)
{
    if(n == 0){
        return; // Base case
    }

    towerofHanoi(n-1, src, helper, destin);
    cout << "Move from " << src << " to " << destin << endl;
    towerofHanoi(n-1, helper, destin, src);
}

string removeDuplicates(string s){
    if(s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = removeDuplicates(s.substr(1));
    
    if(ch == ans[0]){
        return ans;
    }
    return (ch + ans);
}
//Move all the Xs to the end of the string
string moveallX(string s)
{
    if( s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = moveallX(s.substr(1));

    if(ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}

void substringofstring(string s, string ans)
{
    if(s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string reststring = s.substr(1);

    substringofstring(reststring, ans);
    substringofstring(reststring, ans + ch);
}  



int main(){
    int n;
    cin >> n;
    // decrease(n);
    // increase(n);
    int arr[6] = {1,2,3,4,2,5};
    // cout << firstoccurance(arr,5,0,3);
    // cout << lastoccurance(arr,6,6,2);
    // towerofHanoi(3,'A','C','B');
    // cout << removeDuplicates("aaabbbbbcccccdddeeee");
    // cout << moveallX("axxxbcxxxxdxxxxbx");
    substringofstring("ABC", "");   

return 0;
}