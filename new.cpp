// // #include<iostream>
// // using namespace std ;

// // int main(){

// //     int x ;
// //     cin >> x;
// //     int count = 0;

// //     for(int i =2; i<=x; i++){
// //         if(x%i==0){
// //             count ++;
// //         }
// //     }

// //     if(count==1){
// //         cout << "Prime";
// //     }else{
// //         cout<<"Not Prime";
// //     }

// // }




// //palendrom;
// // #include<iostream>
// // using namespace std ;

// // int main(){
// //     int reverse = 0;
// //     int c;
// //     cin>>c;
// //     int original = c ;

// //     while(c!=0){
// //         int remainder = c % 10;
// //         reverse = reverse*10 + remainder;
// //         c = c / 10;
// //     }

// //     if(reverse==original){
// //         cout<<"yes palendrom";
// //     }else{
// //         cout<<"Not palendrom";
// //     }

// //     return 0;

// // }




// //palendrom ';
// #include<iostream>
// #include<cstring>
// using namespace std ;

// int main(){
//     string name ;
//     getline(cin,name);

//     int i = 0;

//     int len =  name.length();
//     int j = len - 1;

//     while(i<j){
//         if(name[i++]!=name[j--]){
//             cout<<"Not palendrom string";
//             return 0;
//         }else{
//             cout<<"Palendrom string";
//             return 0;
            
//         }
//     }
// }