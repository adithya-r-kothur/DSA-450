// #include<bits/stdc++.h>

// using namespace std ;

// int main()
// {
//   string s;
//   cin>>s;

//   string ans;

//   int n=s.length();

//   for(int i=0;i<n;i++)
//   {
//       ans+=s[n-1-i];
      
//   }
//   cout<<ans<<"\n";
  
// return 0;
// }


// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];

//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }

//     int b[n];

//     for(int i=0;i<n;i++)
//     {
//         b[i]=a[n-1-i];
//         cout<<b[i]<<" ";
//     }




//     return 0;

// }



//recursive approach


#include<bits/stdc++.h>

using namespace std;


void reverse(int a[],int start,int end)
{
    if(start>=end)
    return ;
   
    int temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    reverse(a,start+1,end-1);
    

}

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    reverse(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}