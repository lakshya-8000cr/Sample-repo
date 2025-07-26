// // input 
// // Enter book type:
// // 1. Fiction (14 days)
// // 2. Non-Fiction (21 days)
// // 3. Reference (7 days)
// // Choice: 1
// // Enter days since borrowed: 20
// // output
// // Book Type: Fiction
// // Allowed period: 14 days
// // Days borrowed: 20 days
// // Overdue by: 6 days
// // Fine Calculation:
// // Days 1-6 overdue: 6 × $0.50 = $3.00
// // Total Fine: $3.00
// // Please return the book and pay fine at counter.

// #include<iostream>
// #include<cmath>
// using namespace std ;

// class Solution {
//     public: 
//     int type;
//     int Borrow;
    
//     void Detail(int type , int Borrow){
//          this->Borrow = Borrow;
//          this->type = type;
//     }

//     int overdue ;

//     void overdue(){

//         if(type==1){
//             int period = 14 ;
//             int overdue ;
//             overdue = abs(Borrow - period) ;
//             cout<<"Book Type: Fiction"<<endl;
//             cout<<"Allowed Period: 14 Days"<<endl;
//             cout<<"Days Borrowed: "<<Borrow<<endl;
//             cout<<"Overdue: "<<overdue;
//         }

//         else if(type==2){
//             int period = 21 ;
//             int overdue ;
//             overdue = abs(Borrow - period) ;
//             cout<<"Book Type: Non Fiction"<<endl;
//             cout<<"Allowed Period: 21 Days"<<endl;
//             cout<<"Days Borrowed: "<<Borrow<<endl;
//             cout<<"Overdue: "<<overdue; 
//         }

//         else{
//             int period = 7 ;
//             overdue = abs(Borrow - period) ;
//             cout<<"Book Type: 7 Days"<<endl;
//             cout<<"Allowed Period: 7 Days"<<endl;
//             cout<<"Days Borrowed: "<<Borrow<<endl;
//             cout<<"Overdue: "<<overdue; 
//         }

//     }

//     void Fine(int overdue){
//         if(type==1){
//            int fine = 
//         }
//     }

// };

// int main(){

//     cout<<"Enter Book Type: "<<endl;
//     cout<<"1.Fiction (14 Days)"<<endl;
//     cout<<"2.Non Fiction (21 Days)"<<endl;
//     cout<<"3.Refrences (7 Days)"<<endl;

//     cout<<"Enter Choice: ";
//     int type ;
//     cin>>type;
    
//     cout<<"Enter Days Since Borrowed: ";
//     int Borrow;
//     cin>>Borrow ;


//     Solution obj ;

//    return 0;
// }