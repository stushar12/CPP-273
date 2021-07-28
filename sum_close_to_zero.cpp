int closestToZero(int arr[], int n)
        {
            sort(arr,arr+n);
            
            int closest=INT_MAX;
            int i=0;
            int high=n-1;
           while(i<high)
           {
               int sum=arr[i]+arr[high];
                    
                    if(sum==0)
                    return sum;
                    
                    else if(sum>0)
                    {
                        high--;
                    }
                    else
                    i++;
                    
                    if(abs(sum)==abs(closest))  //here in this question +sum is considered as closer to 0 as 
                                                // compared to -sum so take max of it.
                    {
                        closest=max(sum,closest);
                    }
                    if(abs(closest)>abs(sum))
                    {
                        closest=sum;
                    }
            }
            
            return closest;
            }
