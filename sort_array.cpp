/*#include<bits/stdc++.h>
using namespace std;

void insort(vector<int>&a,int temp)
{
    if(a.size()==0 || a[a.size()-1]<=temp)
    {
        a.push_back(temp);
    }
    int value=a[a.size()-1];
    a.pop_back();
    insort(a,value);
    return;
}

void sort(vector<int>&n)
{
    if(n.size()==1)return;
    int temp=n[n.size()-1];///last element
    n.pop_back();
    sort(n);
    insort(n,temp);
}


int main()
{
    vector<int>v={1,0,5,2};
    sort(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}*/
#include<bits/stdc++.h>

using namespace std;


void insort(vector<int>& v,int temp)
{
    if(v.size() == 0 || v[v.size()-1] <= temp){
        v.push_back(temp);
        return;
    }else if(v[0] >= temp){
        v.insert(v.begin(),temp);
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    insort(v,val);
    return;
}
void sort(vector<int>& arr)
{
    if(arr.size() == 1){
        return;
    }
    int temp = arr[arr.size() -1];
    arr.pop_back();
    sort(arr);
    insort(arr,temp);
}


int main(){
    vector<int> arr = {3,2,4,5,10,1};
    sort(arr);
    for(int i=0;i< arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
