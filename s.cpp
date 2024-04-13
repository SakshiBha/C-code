#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    cout<<"enter no.";
    cin>>n;
    // for(int row=0;row<n;row=row+1){
    //     int start=2*row;
    //     for(int col=0;col<row;col=col+1){
    //         cout<<start;
    //         start=start-1;
    //     }
    //     cout<<endl;
    // }
}
    //HOLLOW RECTANGLE
//     for(int row=0;row<n;row=row+1){
       //first row or last row ->print 5*
//         if(row==0 || row==2){
//             for(int col=0; col<5; col++){
//                 cout<<"*";
//             }
//         }
//         else{
             //remaining middle rows
            //first star
//             cout<<"*";
             //spaces
//             for(int i=0;i<3;i=i+1){
//                 cout<<" ";
//             }
            //last star
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
    
// for(int row=0; row<n; row=row+1){
//     int col;
//     for(col=0; col<row+1; col=col+1){
//         int ans=col+1;
//         char ch=ans+'A' -1;
//         cout<<ch;
//     }
    
    //REVERSE COUNTING PRINTING 
//     for(col=row; col>=1; col=col-1 ){ 
//         int ans=col;
//         char ch=ans+'A' -1;
//         cout<<ch;
//     }
//     cout<<endl;
// }

// }
        
    // for(int row=0;row<n;row=row+1){
    //     for(int col=0;col<row+1;col=col+1){
    //         cout<<row+1;
        
    //     if(col!=row)
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int row=0;row<n;row=row+1){
    //     for(int col=0;col<n-row;col=col+1){
    //         cout<<n-row;
    //         if(col!=n-row-1)
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }
//}

    // for(int row=0;row<n;row=row+1){
         //half pyramid
    //     for(int col=0; col<n-row;col=col+1){
    //         cout<<"*";
    //     }
        //space wla full pyramid
    //     for(int col=0;col<2*row+1;col=col+1){
    //         cout<<" ";
    //     }
         //half pyramid
    //     for(int col=0;col<n-row;col=col+1){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
     //half pyramid
    // for(int row=0;row<n;row=row+1){
    //     for(int col=0;col<row+1;col=col+1){
    //         cout<<"*";
    //     }
        //space
//         for(int col=0;col<2*n-2*row-1;col=col+1){
//             cout<<" ";
//         }
//         //half pyramid
//        for(int col=0;col<row+1;col=col+1){
//             cout<<"*";
//         } 
//         cout<<endl;
//     }
// }

    // FULL PYRAMID
    // for(int row=0;row<n;row=row+1){
    //     for(int col=0;col<n-row-1;col=col+1){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<row+1;col=col+1){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // INVERTED PYRAMID
//         for(int row=0;row<n;row=row+1){
       
//         for(int col=0;col<row;col=col+1){
//             cout<<" ";
//         }
//         for(int col=0;col<n-row;col=col+1){
//             cout<<"* ";
//         }
//         cout<<endl;
    
//     }
// }
