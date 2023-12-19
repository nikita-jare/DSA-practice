#include <iostream>
using namespace std;

void pattern1(int n) {
  /*

* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 

  */
  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
      cout <<"* ";
    }
    cout<<endl;
  }
}
void pattern2(int n) {
/*

* 
* * 
* * * 
* * * * 
* * * * * 

*/
  for (int i=0; i<n; i++){
    for (int j=0; j<i+1; j++){
      cout <<"* ";
    }
    cout << endl;
  }
}
void pattern3(int n){
  /*

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

  */
  for (int i=0; i<n; i++){
    for (int j=0; j<=i; j++){
      cout << j+1 << " ";
    }
    cout << endl;
  }
}
void pattern4(int n){
/*

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

*/
  for (int i=0; i<n; i++){
    for (int j=0; j<=i; j++){
      cout<<i+1<<" ";
    }
    cout<<endl;
  }
}
void pattern5(int n){
/*

* * * * * 
* * * * 
* * * 
* * 
* 

*/
  for (int i=0; i<n; i++){
    for(int j=n-i; j>0; j--){
      cout<<"* ";
    }
    cout<<endl;
  }
}
void pattern6(int n){
  /*
  1 2 3 4 
  1 2 3 
  1 2 
  1 
  
  */
  for( int i=0 ; i<=n; i++){
      for(int j = 1 ; j<n-i+1;j++){
          cout<<j<<" ";
      }
      cout<< endl ;
  }
}
void pattern7(int n){
  /*
     *   
    ***  
   ***** 
  *******
  */
  for (int i=0; i<n; i++){
      for (int j=0; j<n-i-1; j++){
          cout<<" ";
      }
      for (int j=0; j<2*i+1; j++){
          cout<<"*";
      }
      for (int j=0; j<n-i-1; j++){
          cout<<" ";
      }
      cout<<endl;
  }
}
void pattern8(int n){
  /*
  
  *******
   ***** 
    ***  
     * 
     
  */
  for (int i=n; i > 0; i--){
      for(int j=0; j < n-i; j++){
          cout << " ";
      }
      for(int j=0; j < 2*i-1; j++){
          cout << "*";
      }
      for(int j=0; j < n-i; j++){
          cout << " ";
      }
      cout << endl;
  }
}
void pattern9(int n){
  /*

     *   
    ***  
   ***** 
  *******
  *******
   ***** 
    ***  
     *   

     */
  for (int i=0; i<n; i++){
      for (int j=0; j<n-i-1; j++){
          cout << " ";
      }
      for (int j=0; j<2*i+1; j++){
          cout << "*";
      }
      for (int j=0; j<n-i-1; j++){
          cout << " ";
      }
      cout<<endl;        
  }
  for (int i=0; i<n; i++){
      for (int j=0; j<i; j++){
          cout << " ";
      }
      for (int j=0; j<2*n - (2*i + 1); j++){
          cout << "*";
      }
      for (int j=0; j<i; j++){
          cout << " ";
      }   
      cout<<endl;     
  }
}
void pattern10(int n){
/*

* 
* * 
* * * 
* * * * 
* * * 
* * 
* 

*/
  for (int i = 0; i<2*n-1; i++){
      int stars = i+1;
      if(i >= n) stars = 2*n - i - 1;
      for(int j=0; j<stars; j++){
          cout<<"*"<<" ";
      }
      cout<<endl;
  }
}
void pattern11(int n) {
  int start = 1;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      start = 1;
    else
      start = 0;
    // cout << "Start" << start;
    for (int j = 0; j <= i; j++) {
      cout << start;
      start = 1 - start;
    }
    cout << endl;
  }

  // alternate approach: inner loop (i+j)%2==0 cout<<1 else cout<<0
}
void pattern12(int n) {
  int space = 2 * (n - 1);
  for (int i = 0; i < n; i++) {
    // numbers
    for (int j = 0; j <= i; j++) {
      cout << j + 1;
    }

    // space
    for (int j = 0; j < space; j++) {
      cout << " ";
    }
    space = space - 2;

    // numbers
    for (int j = i; j >= 0; j--) {
      cout << j + 1;
    }
    cout << endl;
  }
}
void pattern13(int n) {
  /*
A
A B
A B C
A B C D
  */
  int num = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << num << " ";
      num += 1;
    }
    cout << endl;
  }
}
void pattern14(int n) {
  /*Pattern:
A
A B
A B C
A B C D */

  // Approach 1
  //  for(int i=0; i<n; i++){
  //      char letter = 'A';
  //      for(int j=0; j<=i; j++){
  //          cout<<letter<<" ";
  //          letter = letter + 1;
  //      }
  //      cout<<endl;
  //  }

  // Approach 2
  for (int i = 0; i < n; i++) {
    for (char ch = 'A'; ch <= 'A' + i; ch++) {
      cout << ch << " ";
    }
    cout << endl;
  }
}
void pattern15(int n) {
  /*
A B C D
A B C
A B
A
  */
  for (int i = 0; i < n; i++) {
    for (char ch = 'A'; ch < 'A' + n - i; ch++) {
      cout << ch << " ";
    }
    cout << endl;
  }
}
void pattern16(int n) {
  /*
A
B B
C C C
D D D D
E E E E E
  */
  for (int i = 0; i < n; i++) {
    char ch = 'A' + i;
    for (int j = 0; j <= i; j++) {
      cout << ch << " ";
    }
    cout << endl;
  }
}
void pattern17(int n) {
  /*
   A
  ABA
 ABCBA
ABCDCBA
  */
  // for(int i=0; i<n; i++){
  //     //spaces
  //     for(int j=0; j<n-i; j++){
  //         cout<<" ";
  //     }

  //     //letters
  //     char ch='A';
  //     for(int j=0; j<2*i+1; j++){
  //         //char letter;
  //         if(j > i){
  //           ch = ch - 1;
  //         }
  //         else {
  //           ch = 'A' + j;
  //         }
  //         cout<<ch;
  //     }

  //     //spaces
  //     for(int j=0; j<n-i; j++){
  //         cout<<" ";
  //     }

  //     cout<<endl;
  // }
  for (int i = 0; i < n; i++) {

    // spaces
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }

    // letters
    char ch = 'A';
    int breakpoint = (2 * i + 1) / 2;
    for (int j = 0; j < 2 * i + 1; j++) {
      // char letter;
      cout << ch;
      if (j < breakpoint)
        ch++;
      else
        ch--;
    }

    // spaces
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }

    cout << endl;
  }
}
void pattern18(int n) {
  /*
D 
D C 
D C B 
D C B A 
  */
  for (int i = 0; i < n; i++) {
    char ch = 'A' + n - 1;
    for (int j = 0; j <= i; j++) {
      cout << ch << " ";
      ch--;
    }
    cout << endl;
  }
}
void pattern19(int n) {
  /*
* * * * * * * * 
* * *     * * * 
* *         * * 
*             * 
*             * 
* *         * * 
* * *     * * * 
* * * * * * * * 
  */
   for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++){
            cout<<"*"<<" ";
        }
        for(int j=0; j<i*2; j++){
            cout<<" "<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++){
            cout<<"*"<<" ";
        }
        for(int j=0; j<2*(n-i-1); j++){
            cout<<" "<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void pattern20(int n) {
  /*

*             * 
* *         * * 
* * *     * * * 
* * * * * * * * 
* * *     * * * 
* *         * * 
*             * 

  */
  // // Write your code here.
  // for(int i=0; i<n; i++){
  //     for(int j=0; j<=i; j++){
  //         cout<<"*"<<" ";
  //     }
  //     for(int j=0; j < 2*(n-i-1); j++){
  //         cout<<" "<<" ";
  //     }
  //     for(int j=0; j<=i; j++){
  //         cout<<"*"<<" ";
  //     }
  //     cout<<endl;
  // }
  // int counter = n-1;
  // for(int i=0; i<counter; i++){
  //     for(int j=0; j<counter-i; j++){
  //         cout<<"*"<<" ";
  //     }
  //     for(int j=0; j < 2*(i+1); j++){
  //         cout<<" "<<" ";
  //     }
  //     for(int j=0; j<counter-i; j++){
  //         cout<<"*"<<" ";
  //     }
  //     cout<<endl;
  // }

  //Approach 2
  int spaces = 2*n - 2;
  for(int i=0; i<2*n-1; i++){
    int stars = i;
    if(i >= n) stars = 2*(n-1) - i;

    for(int j=0; j<=stars; j++){
      cout<<"*"<<" ";
    }

    for(int j=0; j<spaces; j++){
      cout<<" "<<" ";
    }

    for(int j=0; j<=stars; j++){
      cout<<"*"<<" ";
    }
    cout<<endl;
    
    if(i<n-1) spaces -= 2;
    else  spaces += 2;
  }
}
void pattern21(int n) {
  /*
****
*  *
*  *
****
  */
  for(int i=0; i<n; i++){
      for (int j = 0; j < n; j++) {
          if(i==0 || j==0 || i==n-1 || j==n-1) cout << "*";
          else cout<<" ";
      }
      cout<<endl;
  }
}
void pattern22(int n) {
  /*
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
  
  */
  for(int i=0; i<2*n-1; i++){
      for(int j=0; j<2*n-1; j++){
          int top=i;
          int left=j;
          int bottom=2*n-2-i;
          int right=2*n-2-j;

          cout<<n-min(min(top,left), min(bottom, right));
      }
      cout<<endl;
  }
}
void pattern23(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << j + 1 << " ";
    }
    for (int j = 0; j < 2 * (n - i - 1); j++) {
      cout << " ";
    }

    for (int j = i; j >= 0; j--) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    pattern1(n);
  }
}
