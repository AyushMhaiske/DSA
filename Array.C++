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
// #include <iostream>
// using namespace std;

// int main(){
//     int marks[5]={11,2,1,4,15};
//     int n = sizeof(marks)/sizeof(int);
//     int max = marks[0];
//     int min = marks[0];
//     // for max in array
//     for(int i=0;i<n;i++){
//         if(marks[i]>max){
//             max = marks[i];
//         } 
//         if(marks[i]<min) {
//             min = marks[i];
//         }
//     }
//     cout<<max<<endl;
//     cout<<min<<endl;
//     return 0;
// }

// Wap to derefrence a arary
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     cout<<*arr<<endl;
//     cout<<*(arr+1)<<endl;
//     return 0;
// }

// program for liner seacrch
// #include <iostream>
// using namespace std;

// int liner_search(int *marks,int n,int number){
//     for(int i=0;i<n;i++){
//         if(number == marks[i]){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int marks[10]={1,2,3,4,5,6,7,8,9,10};
//     int n = sizeof(marks)/sizeof(int);

//     int output =liner_search(marks,n,15);

//     if(output>=0){
//         cout<<"the numebr is found";
//     }if(output ==-1){
//         cout<<"the number does not exist in the list";
//     }
//     return 0;
// }