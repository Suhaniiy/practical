
#include <iostream>
using namespace std;
template<class T>  T accept(T a ,int  n){
    for(int i=0;i<n;i++){
        cout<<"Enter the elements for the sort :";
        cin >>a[i];
        
        
    }
}
template<class T>T  selection_sort(T a,int n ){
    for(int i=0;i<n;i++){
        for (int j =i+1;j<n;j++){
            if (a[i]>a[j]){
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
template<class T> T display(T a,int n){
    cout<<"The sorted array is:";
    for(int i=0;i<n;i++){
          cout<<a[i]<<" ";
    }
}
int main() {
    int n,r;
    cout<<"Enter the choice you want :"<<endl;
    cout<<"press:1 :Interger \npress:2 :Float \nSelected Choice :";
    cin>>r;
    if(r==1){
    cout<<"Enter the size of the array :";
    cin>>n;
    int a[n];
    accept(a,n);
    selection_sort( a, n );
    display(a,n);
    }
    if(r==2){
    cout<<"Enter the size of the array :";
    cin>>n;
    float a[n];
    accept(a,n);
    selection_sort( a, n );
    display(a,n);
    }
    return 0;
}
