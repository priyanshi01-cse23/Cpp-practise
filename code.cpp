#include <iostream>
#include <vector>
using namespace std;

// Practise Problem if else condition 

//    QUS -- 1



// int main () {
// int marks ;
// cout << "Enter your marks =   " ;
// cin>> marks ;
// if (marks>=90) {
//   cout << "Grade A " ;
// } else if (marks>=80 && marks<90 ) {
//   cout << "Grade B " ;
// } else if (marks>=55 && marks<80) {
//   cout << "Grade C " ;
// } else if (marks>=33 && marks<55 ) {
//   cout<<" Grade D" ;
// } else  {
//   cout<<" Fail" ;
// }
    
//   return 0;
// };


//      QUS---2 

// int main () {

//   char ch ;
//   cout<< "Enter a alphabate :   " ;
//   cin>>ch; 
//   if(ch>= 'a' && ch<='z') { 
//     cout<< "Lowecase";
//    } else  {
//     cout<< "Uppercase";


//     return 0;
//    }




//  PRACTISE PROBLEM FOR WHILE LOOPS

//    QUS ---- 1

//   qus print 1 to n


// int main () {
//   int count = 1 ;
//   int n = 25 ;
//   while ( count <= n) {
//     cout<< count<< " " ;
//     count++;

    
//   }
   
//   return 0 ;
//   cout<< endl;
// }


//    QUS ---  2

//        qus is sum of number form 1 to n ;

//    int main () {
//     int i = 1;
//     int n = 30;
//     int sum = 0;
//     while ( i<=n) {
//       sum += i;
//       i++ ;
//      } ;
//      cout<<"sum =  " << sum <<endl;
//      return 0 ;
//    };



//        QUS --- 3

//   qus   sum of n  or even number

//  int main () {
//    int i = 1 ;
//     int n = 30;
//     int sum = 0;
//     while (i<=n) {
        
//       if (i%2 == 0) {
//         sum += i ;
//       }
//       i ++ ;
      
//     }
//     cout<<"sum = " << sum  << endl;

//   return 0;

//  }   


//         QUS --- 4

//    print krna value ko reverse ma 

//  int main () {
//   int i = 50 ;
//  int  n =  5;
//   while (i>=n) {  
//     if(i%2 == 0) 
//     cout<< "even is =   " << i << endl ;
//     i-- ;
//   }
  
//   return 0;
//  }     



//       QUS ---- 5

//       factorial qus

// int main ( ) {
//   int i = 1;
//   int n = 3;

//   int multiple = 1 ;
//   while ( i<=n) {
     
//       multiple = multiple*i ;
//       i++;
//   }
//   cout << "factoral =  " << multiple << endl ;
//   return 0 ;
// }


//       QUS ---- 6

//       Ek number input lo aur usme kitne digits hain wo count karo

//       int main () {
       
//         int n ;
       
//         cout << "Enter a number :   " ;
//         cin>>n ;
//          int num = 0;
//        if (n == 0) {
//         num = 1 ;
//        } else {
//         while (n != 0) {
//         n = n/10 ;
//         num++ ;
//        }
         
//       }
//        cout<< "digit is  =  " << num << endl;

//        return 0 ;


//       };

  
  

    

//          FOR LOOPS PRACTISE QUESTION 

//                 QUS ---  1
//  qus is sum of number form 1 to n ;

//  int main () {

//  int   n = 20 ;
//   int sum = 0; 
//    for ( int i =1 ; i<=n ; i++) {
   
//          sum += i ;
          
//       }

//      cout<<"sum =   " << sum << endl;
//   return 0;
//  };

//              QUS --- 2

//    qus 2  sum of n odd or even number  

//    int main () {
//    int  n = 50 ;
//    int sum = 0;
//    for (int i=1 ; i<=n ; i++) {
//     if(i%2 != 0) {
//       sum += i ;

//     }
//   }
//      cout<< "sum =   " << sum << endl ;
//      return 0 ;
//    }



//         QUS --- 3

//   reverse qus using for loop


// int main () {
// for ( int count = 10 ; count>=5 ; count--) 
//       cout<< count << endl;

//  return 0 ;
// }



//             QUS ---- 4

//             prime or non prime 

// int main () {
//    int n ;
//     cout<< "Enter a number  =   " ;
//     cin>> n ;

//   bool isPrime = true ;
//   for (int i = 2 ; i*i <= n ; i++) {
//     if (n % i == 0) 
//         isPrime = false ;
//         break;
//     } ; 
//   if (isPrime == true ) {

//     cout << " Prime Number" ;
//   } else {
//     cout << "Non- Prime Number" ;
//   }
  
//   return 0 ;
// }
             
 
//            QUS --- 5 

//   practise quse sum of number whode divisible for 3
// int main () {
//   int n= 30 ;
//   int sum = 0 ;
//   for ( int i = 1 ; i<=n ; i++) {
//           if (i%3 == 0) {
//             sum += i ;
//           }}
//           cout << "sum  =   " << sum << endl;
//           return 0;
// }
                     

//              QUS --- 6

//  Ek number input lo aur uska table print karo 1 se 10 tak. (for loop

//     int main () {
//       int n;
//       cout<< "Enter a number  =   " ;
//       cin>> n;
//       cout<< "Multipe of " << n << endl ;
      
//       for (int count = 1 ; count<=10 ; count++) {
//          cout << n <<"x"  << count << " = " << n*count << endl ;
//     }

    
//     return 0 ;
//   }



//      QUS ---- 7 

//      n, aur 1² + 2² + 3² ... n² ka sum print karo.

//      int main () {
//       int n ;
//       cout<< "Enter a number =  " ;
//       cin>>n;
      
//       for ( int i = 2 ; i<=n ; i++) {
              
//           cout << " Square of  " << i << " =  " << i*i << endl ;

//       } ;
//       return 0 ;
//      }


      // PATTERNS QUESTION PRACTISE 

      // qus square pattern 

      // int main () {
      //    int n = 3
      //    ;
      //    for (int i = 1 ; i<=n ; i++ ) {
      //       char ch = 'A' ;
      //       for(int j = 1 ; j<=n ; j++)  {
      //          cout<< ch << " " ; 
      //          ch = ch+1 ;

      //       }
      //           cout<< endl ;
      //    }
      //    return 0;
      // }

//  int main() {
//    int n = 3 ;
//     char ch = 'A';
//    for(int i = 0 ; i < n ; i++) {
     
//       for (int j = 0 ; j<n ; j++) {
//          cout<< ch << " " ;
//          ch++ ;

//       }
//       cout<<endl;
//    }
//      return 0 ;
//  };

// int main () {
//    int n = 4 ;
//    for (int i = 0 ; i<n ; i++) {
//       for (int j = 0 ; j<i+1 ; j++) {
//          cout<< " * " ;
//       }
//       cout << endl;
//    }
//    return 0 ;
// }





          // FUNCTION QUS PRACTISE 

                 // QUS--- 1


    //  ous is n factorial

//     int mln(int n) {
//       int multiple = 1;
//       for(int i= 1 ; i<=n ; i++) {
//               multiple = multiple*i;
//       }

//           return multiple;
//     };

//     int main () {
//       cout<< mln(5) << endl;
//       cout<< mln(10) << endl;
     
//     };

                   
             // QUS -- 2
      // CALCILATE SUM OF DIGIT OF A NUMBER

      //     int sumofdigit (int num) {
           
      //         int dsum = 0;
      //         while (num>0)  {
      //          int  lstdigit = num%10;
      //          num = num/10 ;
      //          dsum+= lstdigit;
                  
      //         }

      //         return dsum ;
      // }

      //     int main() {
           
      //       cout<< sumofdigit( 23) << endl ;
      //       return 0 ;
      //     } 



        //  QUS -- 3  

               // calculate nCr binomila 



            //    int factorial (int n) {
            //        int fact = 1;
            //       for (int i = 1 ; i<=n ; i++) {

            //             fact = fact*i ;
  
            //       }

            //          return fact ;

            //    }


            //    int nCr (int n , int r ) {
            //       int fact_n = factorial(n);
            //        int fact_r = factorial(r);
            //         int fact_nmr = factorial(n-r);


            //         return fact_n / (fact_r * fact_nmr) ;
            //    }


            //   int main ()  {
            //                int n ;
            //         cout << "Enter n   =     " ;
            //       cin  >>  n  ;
            //         int r ;
            //         cout << "Enter r   =     " ;
            //       cin  >>  r  ;
                  
            //       cout << " nCr  ("<<n << " , "<< r << ")  =  " << nCr (n , r ) ;
            //       return 0 ;


            //  };



               //       QUS--- 4 

                //Check if a prime no . or not 


            //     bool numPrime (int n) {
                 

            //            if(n<=1) {
            //             return false;
            //            }
            //          for (int i = 2 ; i*i<=n ; i++) {
            //             if(  n % i == 0) {
            //                   return false ;
            //              } } 
            //                return true ;

            //     }
                        
                  

                

            //     int main () {
            //             int num ;
            //         cout << "Enter a number  =     " ;
            //       cin  >> num ;
            //       if (numPrime(num)) {

            //                   cout<< num  << " = "  <<  "Prime Number " ;

            //             } else {
            //                   cout<<  num  << " = "   "Non Prime Number" ;
            //             };
                 
            //     };



            // QUS --- 5 


            //PRINT ALL PRIME NUMBER 2 TO N 


            // int Prime (int n) {
            //           if (n<=1) {
            //             return false ;
            //           }
            //       for (int i = 2 ; i*i <= n ; i++) {
            //             if ( n % i == 0) {
            //                   return false ;
            //             }
            //       }
            //          return true ;
            // }


            // int main () {
            //       int num ;
            //       cout << " Enter a number =   " ;
            //       cin >> num ;

            //       cout << "Prime number from 2 to " << num << " are :  "   ;

            //       for (int i = 2 ; i<=num ; i++) {
            //             if (Prime(i)) {
            //                   cout<<i << " " ;
            //             }
            //       }
            //            cout<< endl;

            //       return 0 ;
            // };

                          // QUS --- 6

                          // print nth fibonacci series 


            // void fiboSeries (int n ) {
            //        int a = 0 , b = 1 ;
 
            //      for (int i = 1 ; i<=n ; i++) {
            //              cout << a << " " ;
            //              int next = a+b ;
            //                a = b ;
            //              b = next ;
            //      }

            //        cout << endl ;
            // }


            // int main () {
            //       int n ; 
            //       cout<< "Enter a nth number of fibonacci series  :    " ;
            //       cin >> n ;

            //       fiboSeries(n) ;

            //       return 0 ;
            // };



                            //QUS ---- 6

                            //gcd question 


            // int  GCD (int a , int b)  {
            //       while (b !=0) {
            //             int temp = b ;
            //             b = a % b ;
            //             a = temp ;

            //       }

            //       return a ;
            // } 


            // int main ()  {
            //       int a , b ;
            //       cout <<"Enter two number :   " ;
            //       cin >> a >> b ;

            //       cout << "GCD of " << a << " and " <<  b  <<  "  :  "  << GCD (a , b) << endl;
                 
            //       return 0 ;

            // }


                   // QUS ---- 7

                   // calculate lcm 

            //   int  GCD (int a , int b)  {
            //       while (b !=0) {
            //             int temp = b ;
            //             b = a % b ;
            //             a = temp ;

            //       }

            //       return a ;
            // } 

            // int lcm (int a , int b) {
                  
            //       return (a/GCD(a, b )) *b ;
               
            // }


            // int main () {
            //       int a , b ;
            //       cout << "Enter two value :   " ;
            //       cin>> a >> b ;

            //  cout << " lcm  ("<< a  << " , "<< b << ")  =  " << lcm ( a , b ) ;
            //       return 0 ;
            // }
                        

                 // QUS ---- 8 

                   //  power function 


                  //  int power ( int b , int e ) {
                  //               int result = 1 ;
                  //        for (int i = 1;  i<=e ; i++)  {
                  //        result *= b ; }

                  //       return  result ;

                  //  }


                  //  int main () {
                  //       int b ; 
                  //       cout << "Enter a base value :   " ;
                  //       cin >> b ;
                  //        int e ; 
                  //       cout << "Enter a exponent value :   " ;
                  //       cin >> e ;

                  //       cout   << b << " ^ " << e <<  " =  " << power ( b , e) << endl;

                  //       return 0 ;
                  //  }



                    //BINART NUMBER PRACTISE QUESTION 

                    // Calculate becimsl to binary number
              //       int decimalNum ( int n) {
              //                 int  ans = 0 ;
              //             int power = 1 ;
              //              int count = 0 ;

                     
              //          while (n>0) { 
              //                 int remin = n % 2 ;
              //                  n /= 2 ;
              //                  ans += (remin*power) ;
              //                 power *= 10 ;

                             
              //           }

              //            return ans ;
                      
              //       }


                     

                   
              //       int main () {
              //        int n; 
              //        cout << " Enter any decimal number :   " ;
              //        cin >> n ;

                    

              //        cout << "Binary value of " << n << " is  :  "  << decimalNum(n) << endl ;
                     
                  
              //        return 0 ;
              //       }

              //               // QUS ---- 2 

              //               //BINARYTO DECIMAL 



              //        //        int binaryV(int num ) {
                     //               int ans = 0 ;
                     //               int power = 1 ;
                     //               while (num>0) {
                     //                 int remain = num % 10 ;
                     //                 ans += (remain*power) ;
                     //                  num  /= 10 ;
                     //                  power *= 2 ;

                     //               }

                     //               return ans ;

                     //        }

                     //        int main ( ) {
                     //               int num ;
                            
                     //        cout << " Enter any binary  number :   " ;
                     //       cin >> num ;
                     //      cout << "Decimal  value of " << num << " is  :  "  << binaryV(num) << endl ;
                     //      return 0 ;

                     //        }




                     // ARRAY 




// int main () {
//        int num [ ] = {2, -6 , -90 , -8 , -7} ;
      
//        int size = 4 ; 
//        int index = -1 ;
//        int smallest = INT8_MAX ;
//        for (int i = 0 ; i<=size ; i++) {
//                   if(num[i] < smallest) {
//                       smallest = num[i] ;
//                       index = i ;
//                   } ;
//        }

//          cout << " index number is : " << index<< endl;
//        return 0 ;

// }

        // search array

       // int sa(int array [] , int sz , int target) {
       //        for(int i = 0 ; i<sz ; i++) {
       //               if(array[i] == target) {
       //                      return i ;
       //               }
       //        }

       //        return -1 ;

       // }

       // int main () {
       //        int array [] = {2 , 6 ,4 ,7 ,8, 9} ;
       //        int sz = 6;
       //        int target = 17;
       //      cout<<  sa(array, sz , target) << endl ;

       //        return 0 ;
       // }

         // reverse array 


        // int ra(int array[] , int sz) {


        // calculate sum and product of all number in array 

       //    int sum( int arr[] , int sz) {
       //          int s = 0;
       //        for(int i = 0 ; i<sz ; i++) {
             
       //        s+= arr[i] ; 
       // } ;
       //        return s ;
       //    }

       //    int product(int arr[], int sz) {
             
       //        int p = 1;
       //        for(int i = 0 ; i<sz ; i++)
       //        p*= arr[i] ;
       //        return p ;
       //    }
       //    int main () {
       //        int arr[  ] = {2 , 3} ;
       //        int sz = sizeof(arr)  / sizeof(arr[0]) ;
       //        cout<< "sum of array :  " << sum(arr , sz) <<   endl;
       //          cout<< "product of array :  " << product(arr , sz) <<   endl;

       //          return 0 ;

       //    }



          //   VECTOR   

       // int main () {
       //        vector<string>vec = {"Priyanshi" " Prashant"};
       //         for(string val: vec ) {
       //               cout<< val<< endl;

       //         }

       //         return 0 ;

       // } 
 
       //  KADANS ALGORITHAM MAXIMUM SUBARRAY SUM

       // int main ( ) {
       //        int n = 5;
       //        int arr[5] = {1 ,2 ,3 ,4 ,5};
       //        for(int st = 0 ; st<n; st++) {
       //               for(int end = st; end<n; end++) {
       //                       for(int i = st; i<=end; i++) {
       //                  cout<< arr[i] ;
       //               }

       //                     cout<< " " ;

       //               }
       //            cout<<endl;  
       //        }
       //         return 0 ;
       // }


                // MAXIMUM SUBARRAY SUM   

              //   int main () {
              //        int n = 8 ;
              //        int arr [8] = { 1 , 2,  3 ,-4 , 5, 6 , 7 ,-8 };
              //        int maxSum =  INT8_MAX  ;
              //        for(int st = 0; st<n ; st++) {
              //               int currSum = 0 ;
              //              for(int end = st ; end<=n ; end++) {
              //                 currSum += arr[end];
              //                 maxSum = max(maxSum ,  currSum);

              //              }

              //        }

              //        cout<< "Sum of maximum array :  " << maxSum << endl;

              //        return 0 ;
              //   }

              // PAIR SUM  


       //        vector<int> painSum(vector <int> num , int target) {
       //               vector<int>ans;
       //               int n = num.size();
       //               for(int i = 0; i<n ; i++) {
       //               for(int j = i+1 ; j<n ; j++) {
       //                 if(num[i]+ num[j] == target) {
       //                      ans.push_back(i);
       //                      ans.push_back(j);
       //                     return ans ;
       //                 }

       //               }
       //        }
       // }


       //        int main () {
              
       //           vector <int> num = {2, 3, 4 , 5, 6, 7, 17 , 18};
       //             int target = 20;
       //             vector<int> ans =  painSum(num , target);
       //             cout<< ans[0]<< " , " << ans[1] << endl;
       //             return 0 ;
                  
                           
       //               }
                   
              

//           int main () {
//                 int n = 7 ;
//               int num[7] = {2 , 6 ,89 , 90 ,56 , 5 , 4 };
//               int i = 0 , j = n-1 ;
//               int target = 6;
//                vector<int> result ;
//               while(i<j) {
//                      int Ps = num[i] + num[j] ;
                     
//                      if(Ps>target) {
//                        j-- ;
//                        } else if(Ps<target) {
//                             i++ ;
//                        } else {
//                        result.push_back(i);
//                       result.push_back(j);
//                         break ;
//                        }

//               }

             



//                if (!result.empty()) {
//         cout << "Pair indices: " << result[0] << " , " << result[1] << endl;
//         cout << "Pair values: " << num[result[0]] << " + " << num[result[1]]
//              << " = " << target << endl;
//     } else {
//         cout << "No pair found!" << endl;
//     }

//     return 0;
// }

           // MAXIMUM ELEMENT 

      //      int me(vector<int>&num) {
      //         int n = num.size();
       
      //          for ( int val : num) {
      //                int freq = 0;
      //                for(int el : num) {
      //             if(el == val) {
      //                freq++ ;
      //             }
      //             if(freq> n/2) {
      //                return val;
      //             }
      //                }

                   
      //          }

      //          return -1;
      //      }


      // int main () {
      //    vector <int> num = {1,2,2,2,1};
      //   int val = me(num);
      //     cout << val << endl;
      // }


//       एक program लिखो जो user से number input ले और check करे कि number even है या odd।
         int main () {
              int a ;
              cout<< "enter a number a = " ;
              cin>> a ;
              
              if( a%2==0) {
                     cout<< "even number" ;
              } else {
                     cout<< "odd number" ;
              }

              cout<< endl ;

              return 0;
         }

               
// एक function लिखो जो किसी number का factorial return करे।

// एक array [2, 4, 7, 9, 12, 15] में से सिर्फ even numbers print करो।

// एक string check करो कि वो palindrome है या नहीं।
// 👉 Example: madam = palindrome, hello = not palindrome






