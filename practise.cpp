#include <iostream> 
#include <climits> 
 using namespace std ;

             // Print numbers from 1 to 50

               //   int main (){
                   
               //    for (int i = 1 ; i<=50 ; i++) {
                   
               //          cout <<  i << endl ;

                      
                      
               //    }

               //      return 0;

               //   }

                // Print sum of first n natural numbers.

                     //   int main () {
                     //       int n ;
                     //       cout<< "Enter a number :   " ;
                     //       cin >> n ;

                     //    int sum = 0 ;

                     //    for (int i = 0 ; i<=n ; i++) {

                     //       sum += i ;

                     //    }

                     //    cout << "sum of  1 to " << n << " is :  "  << sum  << endl ;

                     //    return 0;

                     //   }

                   // Check if a number is even or odd.

                              //  int main () {
                              //    int n ;
                              //    cout<< "Enter a number :   " ;
                              //     cin >> n ;
                              //          if ( n % 2 == 0 ) {
                              //          cout <<  n << "  is a even number  " ;

                              //       } else {
                              //          cout << n <<  " is a odd number  " ;

                              //       }

                              //        cout << endl ;

                              //     return 0 ;
                                 
 
                              //     }

                                 
                               // Find maximum of two numbers.

                              //  int main () {
                              //    int a , b  ;
                              //    cout << "Enter a and b :   " ;
                              //    cin >> a >> b ;
                              //    if (a < b ) {
                              //       cout << b << " is a maximum number " ;
                              //    } else {
                              //       cout << a << " is a maximum number ;" ;
                              //    }

                              //    cout << endl ;
                              //    return 0 ;

                              //  }

                  
                      // Check if a year is a leap year.
                      // int main() {
                      //        int year;
                      //    cout << "Enter a year: ";
                      //    cin >> year;

                      //   if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                      //           cout << year << " is a leap year." << endl;
                      //         } else {
                      //           cout << year << " is not a leap year." << endl;
                      //               }

                      //              return 0;
                      //            };

                        // Reverse counting from n to 1.

                          //  int main () {
                          //  int n ; 
                          //   cout << " Enter any value :  " ;
                          //   cin >> n ;
                          //   for (  int i = n ; i>=1 ; i--) {
                            
                          //               cout << i << "  " ;
                          //   }
                                
                            

                          //     return 0 ;
                           
                            
                          //    }

                              

                                       // Table of n.
                                      //  int main () {
                                      //   int n ;
                                      //   cout << " Enter a table number :  " ;
                                      //   cin >> n ;
                                      // ;

                                      //   for ( int i = 1 ; i<=10 ; i++) {

                                      //     cout << n << " x " << i << " = " << n*i << endl;
                                              
                                      //   }

                                      //      return 0 ;
                                      //  }

                                        // Factorial of n. 

                                        // int main () {
                                        //   int n ; 
                                        //   cout << "Enter a number :  " ;
                                        //   cin >> n ;
                                        //  int multiple = 1 ;
                                        //   for (int i = 1 ; i<=n ; i++) {
                                        //             multiple*= i ;  
                                        //   }
                                        //  cout  << "factorial of " << n << " is :  " << multiple << endl;
                                        //    return 0 ;
                                        // }


                              //  Fibonacci series up to n terms.

                                // void Fibonacciseries (int n ) {
                                //      int a = 0 ,  b = 1 ;
                                //      for (int i = 1  ; i<=n ; i++) {
                                //       cout << a << " " ;
                                //       int next  = a +b ; 
                                //         a = b ; 
                                //         b =  next ;

                                //      }

                                //      cout << endl ;

                                // }

                                // int main () {
                                //   int n ; 
                                //   cout << "Enter a fibonacci series number :  " ;
                                //   cin >> n ;
                                //   Fibonacciseries( n )  ;

                                //   return 0 ;

                                // }



                                
                              // ARRAY PRACTISE QUESTION 

                             // Ek array me 5 numbers diye gaye hain. Sum aur average nikal do.
                  

                // int sum(int arr[] , int size) {
                //   int s = 0 ;
                //   for(int i = 0 ; i<size ; i++ ){
                //     s+= arr[i];
                //   }
                     
                //      double avg =   s / size ;

                //       return avg;
                //  } ;

                // int main () {
                //   int arr[] ={ 2 , 4 ,6 ,8 , 10 } ;
                //   int size = sizeof(arr) / sizeof(arr[0]) ;
                //   cout<< " Average of arr is :  " << sum (arr , size)  ;
                 

                //   return 0 ;
                // } ; 

                // Ek array me 10 numbers diye gaye hain. Sabse bada aur sabse chhota number print karo.


                //  int main() {
                //   int arr[] = {12 , 20 ,675,7896,78954,7654329,908,-90,-345673 , 897654} ;
                //   int size = 11 ;
                //     int smallest = INT8_MAX ;
                //     int largest = INT8_MIN ;
                //   for(int i = 0 ; i<size ; i++) {
                //       smallest = min(arr[i] , smallest) ;
                //       largest = max(arr[i] , largest) ;
                //     }
                //         cout<< "Minmum value :  " << smallest<<endl;
                //         cout<< "Maimum value :  " << largest << endl;

                //         return 0 ;
                          
                //       } ;

                     // Ek array me numbers diye gaye hain. Sirf even numbers ka sum nikal do.

                    //  int main () {
                    //   int arr[ ] = {2 ,3 ,4 , 5 , 6 ,7 ,8 ,9 ,10 } ;
                    //   int size = 9;
                    //   int sum = 0 ;
                    //   for(int i = 0 ; i<size ; i++ ) {
                    //     if(arr[i] % 2 == 0) {
                    //       sum += arr[i] ;
                    //     }

                    //   }
                    //       cout<< sum << endl ;

                    //       return 0 ;
                    //  }

                   // Ek array me numbers diye gaye hain. Array ko reverse karke print karo.


                //    int ra (int arr[] , int size) {
                //          int start = 0 ;
                //     int end = size-1;
                // while(start<end) {
                //   swap(arr[start ] , arr[end]) ;
                //   start++ ;
                //   end--;
                // }
                //     } ;

                //     int main () {
                //        int arr[ ] = { 1 ,2,3,4,5,6,7,8,9,10};
                //        int size = 10;
                //         ra(arr , size) ;
                //        for(int i = 0 ; i<size ; i++) {
                //           cout<< arr[i] << " " ;

                //        }

                //        cout<< endl;
                //        return 0 ;
                //     }

                    //Ek array me numbers diye gaye hain. Product of all elements print karo.


                    // int main () {
                    //   int arr[]  = {2,3,4,5,6};
                    //   int size = 5;
                    //  int product = 1 ;
                    //    for(int i = 0 ; i<size; i++ ) {
                    //          product*= arr[i] ;
                    //    }
                    //   cout<<"Product of number is  = " << product<< endl;
                    //   return 0;
                    // };

// Ek array me numbers diye gaye hain. Duplicate numbers ko remove karke naya array banao.

//    int main () {
//     int arr[] = {2, 4 ,6 ,7 ,8 ,4 ,9} ;
//     int size = 7;

//      int newArr[size]; // maximum size same as original
//     int newSize = 0;

//     for(int i = 0; i < size; i++) {
//         bool found = false;
//         // check if arr[i] already exists in newArr
//         for(int j = 0; j < newSize; j++) {
//             if(arr[i] == newArr[j]) {
//                 found = true;
//                 break;
//             }
//         }
//         if(!found) {
//             newArr[newSize] = arr[i];
//             newSize++;
//         }
//     }

//     cout << "Array without duplicates: ";
//     for(int i = 0; i < newSize; i++) {
//         cout << newArr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
  
//   Ek array me numbers diye gaye hain. Prefix sum array nikal kar print karo.

// int main () {
//   int arr[] = {2 ,4 ,6 ,8,10};
//   int size = 5;
//   int prefixSum[size] ;
//       prefixSum[0] = arr[0] ;
//       for(int i = 1 ; i<size ; i++) {
//         prefixSum[i] = prefixSum[i-1] +arr[i];
//       }
//       cout<< "Prefix sum of number is :  " ;
//       for(int i = 0 ; i<size ; i++) {
//         cout<<prefixSum[i] << "  " ;
//       }

//       cout<< endl;
//       return 0 ;
// };

    // kadans algorithum 

    // maxmium subarray sum
    
     
      //  1. Input: arr = [1, 2, 3, -2, 5]

    // int main () {
    //   int n = 5;
    //   int arr[5] = {1 , 2, 3, -2, 5};
    //   int maxSum = INT_MIN ;
    //   for(int st = 0; st<n ; st++) {
    //      int currSum = 0;
    //      for(int end = st ; end<n ; end++ ) {
               
    //          currSum+= arr[end];
    //          maxSum = max(currSum,maxSum);

    //      }

          
    //   }

    //     cout<< "Sum of possible maximum array :  " << maxSum<< endl;

    //     return 0;

    // }

    //  2.  Input: arr = [-1, -2, -3, -4]

    // int main () {
    //   int n = 5;
    //   int arr [5] = { -1, -2,-3 , -4 , -5};
    //   int cS = 0;
    //   int minS = INT_MIN ;
      
    //   for(int i = 0 ; i<n ; i++) {

    //     cS += arr[i] ;
    //     cS = max(arr[i] , cS) ;

    //     minS = max(minS , cS)   ;
      
       
    //   }

    // cout<<minS<< endl;
    // return 0 ;

    // }
 
     // 3. nput: arr = [4, -1, 2, 1]
     // explanation: Subarray [4, -1, 2, 1] = 6 (maximum sum).

    //  int main ( ) {
    //   int n = 4 ;
    //   int arr[4] = {4 , -1, 2 , 1} ;
    //   int Cs = 0;
    //   int maxS = INT_MIN ;
    //   for ( int i = 0 ; i<n ; i++) {
    //         Cs+= arr[i] ;
    //         maxS = max(maxS , Cs);

    //   }

    //    cout<<"Sum of max :  " << maxS<<endl;
    //    return 0;
    //  }

    //4.Input: arr = [5, -9, 6, -2, 3] Explanation: Subarray [6, -2, 3] का sum = 7.

    //  int main ( ) {
    //   int n = 5 ;
    //   int arr[5] = {5 , -9 , 6 , -2 , 3} ;
    //   int Cs = 0;
    //   int maxS = INT_MIN ;
    //   for ( int i = 0 ; i<n ; i++) {
    //         Cs+= arr[i] ;
    //         Cs =  max(arr[i] , Cs);
    //         maxS = max(maxS , Cs);

    //   }

    //    cout<<"Sum of max :  " << maxS<<endl;
    //    return 0;
    //  } 

//     Q5
// Input: arr = [1, 2, 3, 4]
// 👉 Expected Output: 10
// (क्योंकि पूरा array ही positive है, तो सब जोड़ देंगे)
                     
        //  int main ( ) {
        //    int n = 4; 
        //    int arr [4] = {1,2,3,4} ;
        //    int cs = 0;
        //    for (int i = 0 ; i<n ; i++) {
        //      cs+= arr[i] ;
        //    }

        //    cout <<cs <<endl;
        //    return 0 ;
        //  }

// Q6
// Input: arr = [-2, -3, 4, -1, -2, 1, 5, -3]
// 👉 Expected Output: 7
// (Subarray [4, -1, -2, 1, 5])
                   
        //               int main () {
        //                 int n = 8; 
        //    int arr [8] =  {-2, -3, 4, -1, -2, 1, 5, -3} ;
        //    int cs = 0;
        //    int maxs = INT_MIN;
        //    for (int i = 0 ; i<n ; i++) {
        //      cs = max( arr[i] , cs+arr[i] );
        //      maxs = max(maxs , cs) ;
        //    }

        //    cout << maxs <<endl;
        //    return 0 ;
        //  }

                      


//     Q 7
// Input: arr = [8, -19, 5, -4, 20]
// 👉 Expected Output: 21
// (Subarray [5, -4, 20])

  // int main () {
  //                       int n = 5 ; 
  //          int arr [5] =  {8, -19, 5, -4, 20} ;
  //          int cs = 0;
  //          int maxs = INT_MIN;
  //          for (int i = 0 ; i<n ; i++) {
  //            cs = max( arr[i] , cs+arr[i] );
  //            maxs = max(maxs , cs) ;
  //          }

  //          cout << maxs <<endl;
  //          return 0 ;
  //        }

                      
// Q 8
// Input: arr = [2, 3, -6, 4, 2, -1, 2, 1]
// 👉 Expected Output: 8
// (Subarray [4, 2, -1, 2, 1])

  // int main () {
  //           int n = 8 ; 
  //          int arr [8] =  {2, 3, -6, 4, 2, -1, 2, 1} ;
  //          int cs = 0;
  //          int maxs = INT_MIN;
  //          for (int i = 0 ; i<n ; i++) {
  //            cs = max( arr[i] , cs+arr[i] );
  //            maxs = max(maxs , cs) ;
  //          }

  //          cout << maxs <<endl;
  //          return 0 ;
  //        }

// Q9 (All negatives + one zero)
// Input: arr = [-5, -2, -3, 0]
// 👉 Expected Output: 0
// (क्योंकि subarray [0] सबसे बड़ा है)
          //   int main () {
          // int n = 4 ; 
          //  int arr [4] =  {-5 , -2 , -3 , 0} ;
          //  int cs = 0;
          //  int maxs = INT_MIN;
          //  for (int i = 0 ; i<n ; i++) {
          //    cs = max( arr[i] , cs+arr[i] );
          //    maxs = max(maxs , cs) ;
             
          //  }

          //  if(maxs<0) {
          //       cout<<"0";
          //    } else {
          //              cout<< maxs ;
          //    }
             
 
          //   cout<<endl;
           
          //    return 0 ;
          // }
           
              
//          int main() {
//     int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
//     int n = 8;

//     int cs = 0, maxs = INT_MIN;
//     int start = 0, end = 0, tempStart = 0;

//     for (int i = 0; i < n; i++) {
//                   if(cs+arr[i] < arr[i]) {
//                     cs = arr[i] ;
//                     tempStart = i ;
//                   } else {
//                     cs = cs+ arr[i];
//                   };

//                   if(cs>maxs) {
//                     maxs = cs ;
//                     start = tempStart;
//                     end = i;
//                   }
//       }

//     cout << "Maximum Sum = " << maxs << endl;
//     cout << "Start Index = " << start << ", End Index = " << end << endl;

//     cout << "Subarray = [ ";
//     for (int i = start; i <= end; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "]" << endl;

//     return 0;
// }

   
