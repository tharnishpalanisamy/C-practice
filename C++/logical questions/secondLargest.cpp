// #include<iostream> 
// #include<climits>
// #include<vector>
// using namespace std ; 


// int main(){ 
//     vector<int> v = {10, 5, 20, 8, 20, 15 , 10 , 20 }; 
//     int largest = INT_MIN ; 
//     int second = INT_MIN  ; 
//     //for unique second largest
//     for(int n : v ) {
//         if (n > largest) {
//             second = largest ; 
//             largest = n ;  
//         }
//         else if(n < largest && n > second) {
//             second = n ; 
//         }
//     }

//     cout<<largest <<" " <<second ; 
//     return 0 ; 
// }