 vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
       int left=0;
       int right=0;
       int flag=0;
       long long sum=0;
       for(int i=0;i<n;i++)
       {
           sum+=arr[i];
         //iterate till we do not find that sum and keep moving left as a=soon as we get a sum greater than the desired one.
           while(sum>s and left<i)
           {
               sum-=arr[left];
               left++;
           }
           if(sum==s)
           {
               right=i;
               flag=1;
               break;
           }
       }
       if(left>right or flag==0)
       return {-1};
       return{left+1,right+1};
      
       }
    };
