//    M-1 -> Two passes method

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={0,1,1,0,1,0,0,1};
//     int n=sizeof(arr)/sizeof(int);

//     int noz=0;
//     int noo=0;

//     for(int i=0;i<n;i++){       // o(n)
//         if(arr[i]==0) noz++;
//         else noo++;
//     }
//     // filling elements

//     for(int i=0;i<n;i++){      // o(n)
//         if(i<noz){
//             arr[i]=0;
//         }
//         else arr[i]=1;
//     }

//     for(int i=0;i<n;i++){      // o(2n)
//         cout<<arr[i]<<" ";
//     }
// }



//    M-2 -> Two pointer method

#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,1,0,1,0,0,1};
    int n=sizeof(arr)/sizeof(int);

    int i=0;
    int j=n-1;

    while(i<j){
        if(arr[i]==0) i++;
        if(arr[j]==1) j--;

        if(i>j) break;

        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}



