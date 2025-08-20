
[SOLUTION -1]

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	    cin>>a[i];
	    
	ll target = 0;
	cin>>target;
	
	ll high = n-1;
	ll low = 0;
	ll flag = 0;
	while(high-low>1)
	{
	    ll mid = (high+low)/2;
	    
	    if(mid>target)
	        high = mid;
	    else if(mid<target)
	        low = mid;
	    else 
	    {
	        cout<<"Element found!";
	        flag=1;
	        break;
	    }
	}
    if(flag==0)
        cout<<"Element not found";
        
    return 0;
}
[SOLUTION -2]
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	    cin>>a[i];
	    
	for(int i=0; i<n; i++)
	{
	    ll flag = 0;
	    for(int j=0; j<n-1-i; j++)
	    {
	        if(a[j]>a[j+1])
	        {
	            swap(a[j], a[j+1]);
	            flag=1;
	        }
	    }
	    if(flag==0)
	        break;
	}
	
	for(int i=0; i<n; i++)
	    cout<<a[i]<<" ";
        
    return 0;
}



[SOLUTION -3]
(a)
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	    cin>>a[i];
	    
	ll target;
	cin>>target;
	
	ll flag=0;
	
	for(int i=0; i<n; i++)
	{
	    if(a[i]==target)
	    {
	        flag=1;
	        cout<<"Target Found!";
	        break;
	    }
	}
	if(flag==0)
	    cout<<"Target is not Found";
	    
	return 0;
}

(b)
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	    cin>>a[i];
	    
	ll target = 0;
	cin>>target;
	
	ll high = n-1;
	ll low = 0;
	ll flag = 0;
	while(high-low>1)
	{
	    ll mid = (high+low)/2;
	    
	    if(mid>target)
	        high = mid;
	    else if(mid<target)
	        low = mid;
	    else 
	    {
	        cout<<"Element found!";
	        flag=1;
	        break;
	    }
	}
    if(flag==0)
        cout<<"Element not found";
        
    return 0;
}


[SOLUTION -4]
a.
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s1, s2, s3;
	cin>>s1>>s2;
	s3 = s1+s2;
	
	cout<<s3;
    
    return 0;
}

b.
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	
	reverse(s.begin(), s.end());
	
	cout<<s;
    
    return 0;
}

C.
#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (char c : s) {
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
              c=='A'||c=='E'||c=='I'||c=='O'||c=='U')) {
            cout << c;
        }
    }
}

D.
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	
	sort(s.begin(), s.end());
	
	cout<<s;
    
    return 0;
}

E.
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	
	cout<<s;
    
    return 0;
}


#include <iostream>

using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) cout<<a[i]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}
 
 

 

 

 

 

5(b)
#include <iostream>

using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[3*n-2];
    for(int i=0;i<3*n-2;i++) cin >> a[i];
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(abs(i-j)<=1) cout<<a[k++]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}
 
 

5 (c)
#include <iostream>

using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[3*n-2];
    for(int i=0;i<3*n-2;i++) cin >> a[i];
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(abs(i-j)<=1) cout<<a[k++]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}
 
 

5(d)
#include <iostream>

using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[n*(n+1)/2];
    for(int i=0;i<n*(n+1)/2;i++) cin >> a[i];
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j) cout<<a[k++]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}
 
 

5(e)
#include <iostream>

using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[n*(n+1)/2];
    for(int i=0;i<n*(n+1)/2;i++) cin >> a[i];
    int k=0;
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            mat[i][j]=a[k];
            mat[j][i]=a[k];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<mat[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
 


6(a)
#include <iostream>

using namespace std;
 
int main() {
    int r,c,n;
    cin>>r>>c>>n;
    int a[n][3],t[n][3];
    for(int i=0;i<n;i++) cin>>a[i][0]>>a[i][1]>>a[i][2];
    for(int i=0;i<n;i++){
        t[i][0]=a[i][1];
        t[i][1]=a[i][0];
        t[i][2]=a[i][2];
    }
    for(int i=0;i<n;i++) cout<<t[i][0]<<" "<<t[i][1]<<" "<<t[i][2]<<endl;
    return 0;
}


 

 

 

6(b)
#include <iostream>

using namespace std;
 
int main() {
    int r,c,n1,n2;
    cin>>r>>c>>n1;
    int a[n1][3];
    for(int i=0;i<n1;i++) cin>>a[i][0]>>a[i][1]>>a[i][2];
    cin>>n2;
    int b[n2][3];
    for(int i=0;i<n2;i++) cin>>b[i][0]>>b[i][1]>>b[i][2];
    int i=0,j=0,k=0;
    int res[n1+n2][3];
    while(i<n1 && j<n2){
        if(a[i][0]<b[j][0] || (a[i][0]==b[j][0] && a[i][1]<b[j][1]))
            res[k][0]=a[i][0],res[k][1]=a[i][1],res[k++][2]=a[i++][2];
        else if(b[j][0]<a[i][0] || (b[j][0]==a[i][0] && b[j][1]<a[i][1]))
            res[k][0]=b[j][0],res[k][1]=b[j][1],res[k++][2]=b[j++][2];
        else{
            res[k][0]=a[i][0];res[k][1]=a[i][1];
            res[k++][2]=a[i++][2]+b[j++][2];
        }
    }
    while(i<n1) res[k][0]=a[i][0],res[k][1]=a[i][1],res[k++][2]=a[i++][2];
    while(j<n2) res[k][0]=b[j][0],res[k][1]=b[j][1],res[k++][2]=b[j++][2];
    for(int x=0;x<k;x++) cout<<res[x][0]<<" "<<res[x][1]<<" "<<res[x][2]<<endl;
    return 0;
}
 
 

 

 

 

 

 

 

 

6(c)
#include <iostream>

#include <vector>
using namespace std;
 
struct Term {int row,col,val;};
 
int main() {
    int r1,c1,n1,r2,c2,n2;
    cin>>r1>>c1>>n1;
    vector<Term>a(n1);
    for(int i=0;i<n1;i++) cin>>a[i].row>>a[i].col>>a[i].val;
    cin>>r2>>c2>>n2;
    vector<Term>b(n2);
    for(int i=0;i<n2;i++) cin>>b[i].row>>b[i].col>>b[i].val;
    vector<Term>res;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i].col==b[j].row){
                int r=a[i].row,c=b[j].col,v=a[i].val*b[j].val;
                bool f=false;
                for(auto &x:res){
                    if(x.row==r && x.col==c){x.val+=v;f=true;break;}
                }
                if(!f) res.push_back({r,c,v});
            }
        }
    }
    for(auto &x:res) cout<<x.row<<" "<<x.col<<" "<<x.val<<endl;
    return 0;
}
 
 

 

 

 

 

 

 

7.

#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) count++;
        }
    }
    cout << count;
}
 
 

8.
#include <iostream>

using namespace std;
 
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int distinct = 0;
    for (int i = 0; i < n; i++) {
        bool repeat = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                repeat = true;
                break;
            }
        }
        if (!repeat) distinct++;
    }
    cout << distinct;
}
 
  
