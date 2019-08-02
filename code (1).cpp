#include <iostream>
#include <iomanip>
using namespace std;
float round(float avg)
{
    float value=(int)(avg*100+0.5);
    return (float)value/100;
}
int main() {
	
	while(1)
	{
	    
	    int n;
	    cin>>n;
	    repeat:
	    float sum=0.00,avg=0.00,n1;
	    float array[n];
	    n1=n;
	    for(int i=0;i<n;i++)
	    {
	    cin>>array[i];
	    avg=avg+array[i];
	    }
	    avg=avg/n1;
	    float avg1=round(avg);
	    for(int i=0;i<n;i++)
	    {
	        if(array[i]>avg1)
	        {
	            sum=sum+(array[i]-avg1);
	        }
	    }
	    cout<<"$"<<setprecision(4)<<showpoint<<sum<<endl;
	    cin>>n;
	    if(n!=0)
	    goto repeat;
	    else 
	    break;
	}
	return 0;
}