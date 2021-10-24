// tests for iteration and selection statements

int main() 
{ 
    int arr[] = {12, 3, 4, 15};
    arr[2] =  1;
    static int n = 4;
    int sum = 0; // initialize sum 
    int i; 
    
    for (i = 0; i < n; i++) {
        if((arr[i]&1) == 0){
            arr[i]+=sum; 
        }
        else if(i==0){
            continue;	
        }
        else{
            break;
        }
    }
    for(i = 0; i < n;i ++) {
        if(arr[i]<1)
            break;
    }
    return i; 
} 
