// tests for typecasting and pointers

int divide(float,float);

void swap(int* a, int* b) // function to swap two numbers 
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main()
{
	int q=0,r=0;
	float x=2.5;
	q = x*1.564;
	int d = divide(x,2.5);
	r=10;
	swap(&q,&d);
	return 0;
}

int divide(float a, float b)
{
	int div;
	div = a/b; // type casting float -> int
	return div;
}
