#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0;

	for (int i = 0; i < size; i++) {
		max_ending_here = max_ending_here + a[i];
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

		if (max_ending_here < 0)
			max_ending_here = 0;
	}
	return max_so_far;
}

int main()
{

	int n ;
cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
	int max_sum = maxSubArraySum(a, n);
	cout << "Maximum contiguous sum is " << max_sum;
	return 0;
}


##Scalar approach
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={2, -4, 3, -1, 2};
    int local_max = 0;
    int global_max = INT_MIN;
    int n=sizeof(a)/sizeof(a[0]);
    
    for(i = 0; i < n;i++)
	{   
	    local_max = max(a[i], a[i] + local_max);
        
	    if(local_max > global_max)
	    {
	        global_max = local_max; 
	    }
	    
	}
	cout<<global_max;
	return 0;
}
