/*
Assignment 5 - Machine Independent Code Generator for tinyC
Group 2
19CS10031 - Abhishek Gandhi
19CS10051 - Sajal Chhamunya 
*/


// tests recursion and arithmatic operations

int fib(int n) 
{ 
  if(n<=1) return n;
  return fib(n-1) + fib(n-2);
} 

int min(int a,int b){
  if(a<b) return a;
  return b;
}
int max(int a,int b){
  if(a>b) return a;
    return b;
}
int getMin(int arr[], int n)
{
    // If there is single element, return it.
    // Else return minimum of first element and
    // minimum of remaining array.
    if(n == 1){
      return arr[0]; 
    }
    int t = getMin(arr, n - 1);
    return min(arr[0],t);
    return 1;
}
 
int getMax(int arr[], int n)
{
    // If there is single element, return it.
    // Else return maximum of first element and
    // maximum of remaining array.
    int t = getMax(arr, n - 1);
    if (n == 1) return arr[0];
    return max(arr[0],t);
    return 1;
}
 
int main()
{
    int arr[] = { 12, 1234, 45, 67, 1 };
    //int n = sizeof(arr) / sizeof(arr[0]);
                            getMin(arr, 5);
    
                                   getMax(arr, 5);
    return 0;
}
