#include <iostream>
#include<vector>

using namespace std;
void swap(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int part(vector<int> &v,int start,int end){
    int pivot = v[end];
    int p_ind = start;
    for(int i=start;i<=end-1;i++){
        if(v[i]>pivot){
            swap(&v[i],&v[p_ind]);
            p_ind++;
        }
    }
    swap(&v[end],&v[p_ind]);
    return p_ind;
}

void quicksort(vector<int> &v,int start,int end){
    if(start<end){
        int p_ind = part(v,start,end);
        quicksort(v,start,p_ind-1);
        quicksort(v,p_ind+1,end);
    }
}
int main() {
    int n;
    cin >>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin >>temp;
        v.push_back(temp);
    }
    
    quicksort(v,0,n-1);
    
      for(int i=0;i<n;i++){
        cout << v[i] << " " ;
    }
    
    
}