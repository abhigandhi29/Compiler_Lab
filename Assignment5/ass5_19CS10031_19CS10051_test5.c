/*
Assignment 5 - Machine Independent Code Generator for tinyC
Group 2
19CS10031 - Abhishek Gandhi
19CS10051 - Sajal Chhamunya 
*/

//  nested if cases ,  loops and nested loops


int main()
{
	
	n = 5;
	j = 100;
	i = 0;
	int i, j, n;
	int x;
	int ans = 0;
	int sum=0;
	char a='a';
	int p[5]; // 1D integer array

	for(i=0;i<n;i++) {
		for(j=0;j<n;j++)  // nested for loop
			ans += i*j;
	}

	while(i<5) // while loop
	{
		i+=2;
		j*=2;
		ans-=i*j;
	}

	do // do-while loop
	{	i++;
		ans = ans + p[i];
	}while(i<n);

	if(ans>0){
		if(ans<5){
			i++;
		}
		else{
			j--;
		} 
	}
	else{
		if(ans>-5){
			i++;
		}
		else{
			j--;
		}
	}
	


	return 0;
}

