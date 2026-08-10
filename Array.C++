// #include <iostream>
// using namespace std;

// int main(){
//     int marks[5]={11,12,14,15,16};
//     // to print any element in array using index position 
//     cout<<marks[4]<<endl;

//     // to return the size of araray
//     cout<<sizeof(marks)<<endl;
 
//     // to find the length of an array
//     int n = sizeof(marks)/sizeof(int);
//     cout<<sizeof(marks)/sizeof(int)<<endl;
// } 


// wap to take-out put of an araay
// #include <iostream>
// using namespace std;

// int main(){
//     int marks[5]={1,2,3,4,5};
//     int n = sizeof(marks)/sizeof(int); //length of araay

//     for(int i=0 ;i<n;i++){
//         cout<<marks[i]<<" ";
//     }

//     return 0;
// }


// wap to take in-put in the array
// #include <iostream>
// using namespace std;

// int main(){
//     int array[5];
//     int n = sizeof(array)/sizeof(int);

//     for(int i=0;i<n;i++){
//         cin>>array[i];
//     }

//     for(int i=0;i<n;i++){
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }


// wap to find the largest in array and smallest in array
#include <iostream>
using namespace std;

int main(){
    int marks[5]={11,2,1,4,15};
    int n = sizeof(marks)/sizeof(int);
    int max = marks[0];
    int min = marks[0];
    // for max in array
    for(int i=0;i<n;i++){
        if(marks[i]>max){
            max = marks[i];
        } 
        if(marks[i]<min) {
            min = marks[i];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
    return 0;
}