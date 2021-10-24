/*
Assignment 5 - Machine Independent Code Generator for tinyC
Group 2
19CS10031 - Abhishek Gandhi
19CS10051 - Sajal Chhamunya 
*/


// tests for recursion and multidimentional array

//nested if else left
const int N = 100;
enum state{
    array1_pre=0,
    array2,
    array1_last
};

int max(int a,int b){
    if(a>b)
        return a;
    return b;
}

int recurr(int idx, int curr, int n, int x, int a[], int dp[100][3])
{
    if (idx == n)
        return 0;

    if (dp[idx][curr] != -1)
        return dp[idx][curr];

    long long t = 0;

    if (curr == 0) {
        t = max(t, a[idx] + recurr(idx + 1, 0, n, x, a, dp));
        t = max(t, (long long)(x) * (long long)(a[idx]) + recurr(idx + 1, 1, n, x, a, dp));
    }
    else if (curr == 2) {
        t = max(t, a[idx] + recurr(idx + 1, 2, n, x, a, dp));
    }
    else{
        t = max(t, (long long)(x) * (long long)(a[idx]) + recurr(idx + 1, 1, n, x, a, dp));
        t = max(t, a[idx] + recurr(idx + 1, 2, n, x, a, dp));
    }      
 
    dp[idx][curr] = t;
    return t;
}

int getMax(int n, int x, int a[]){

    int dp[100][3]; //three states possible
    int m = 1e9+7;
    int ans = 0;
    int i;
    for (i = 0; i < n; i++){
        ans = max(ans, recurr(i, 0, n, x, a, dp));
    }
    return ans%m;
} 

int main(){
    int a[3];
    a[0]=0;
    a[1]=-2;
    a[2]=-9;
    getMax(3,-1,a);
}
