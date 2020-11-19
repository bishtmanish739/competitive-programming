#include <iostream>
using namespace std;
#define int long long int
#define mod 1000000007
int32_t main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int *a=new int[n+1];
        bool flag=0;
        int index=-1;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]==1){
                flag=1;
                index=i;
            }
        }
        int *b=new int[n+1];
        b[0]=0;
        b[1]=a[1]%2?a[1]-1:a[1];
        for(int i=2;i<n;i++){
            if(a[i]%2==0){
                b[i]=(a[i]+b[i-1])%mod;
            }
            else{
                b[i]=(a[i]-1+b[i-1])%mod;
            }
        }
        b[n]=a[n]%2?(a[n]+b[n-1])%mod:(a[n]-1+b[n-1])%mod;
        int q;
        cin>>q;
        while(q--){
            int ans=0;
            int R;cin>>R;
            if(R==1){
                ans=a[1];

            }
            if(flag==0){
                if(R<n){
                    if(R==1) ans=a[1];
                    else {ans=a[R]%2?(b[R]+1)%mod:b[R]%mod;
                        ans=ans%mod;}
                }
                else if(R>n){
                    if(R%n==0){
                        ans=a[n]%2?(b[n]*(R/n))%mod: (b[n]*(R/n)+1)%mod;
                    }
                    else{
                        ans=(b[n]*(R/n))%mod;
                        R=R%n;
                        ans=a[R]%2?(ans+b[R]+1)%mod:(ans+b[R])%mod;

                    }
                }
                else{
                    ans=a[n]%2?b[n]:(b[n]+1)%mod;
                    ans=ans%mod;
                }
            }else{
                if(index==1 && n>1){
                    if(R<=n){
                        ans=1;
                    }
                    else if(R>n){
                        ans=1*(R/n);
                        ans=ans%mod;
                        if(R%n>1){
                            ans=(ans+1)%mod;
                        }
                    }
                }
                else if(index==1 && n==1){
                    ans=(1*(R/n))%mod;
                }
                else if(index==n && n>1){
                    if(R<n){
                        ans=a[R]%2?(b[R]+1)%mod:b[R]%mod;
                        ans=ans%mod;
                    }else if(R==n){
                        ans=b[n]%mod;
                    }else{
                        if(R%n==0){
                            ans=(b[n]*(R/n))%mod;

                        }else{
                            ans=(b[n]*(R/n))%mod;
                            R=R%n;
                            ans=a[R]%2?(ans+b[R]+1)%mod:(ans+b[R])%mod;
                            ans=ans%mod;
                        }
                    }
                }else if(R!=1 && index!=1 && index!=n){
                    if(R<n){
                        if(R<index){
                            ans=a[R]%2?(b[R]+1)%mod:b[R]%mod;
                        }else if(R>index){
                            if(a[index-1]%2){
                                ans=a[R]%2?(b[R]+2)%mod:(b[R]+1)%mod;
                            }else{
                                ans=a[R]%2?b[R]%mod:(b[R]-1)%mod;
                            }
                        }else{
                            ans=(b[R]+1)%mod;
                        }
                    }
                    else if(R>n){
                        if(R%n==0){
                            ans=a[n]%2?(b[n]*(R/n))%mod:(b[n]*(R/n)+1)%mod;
                            if(a[index-1]%2){
                                ans=(ans+(R/n))%mod;
                            }else{
                                ans=(ans-(R/n))%mod;
                            }
                        }else{
                            ans=(b[n]*(R/n))%mod;
                            ans=a[index-1]%2?(ans+(R/n))%mod:(ans-(R/n))%mod;
                            R=R%n;
                            if(R<index){
                                ans=a[R]%2?(ans+b[R]+1)%mod:(ans+b[R])%mod;
                            }else if(R>index){
                                ans=a[index-1]%2?(ans+1)%mod:(ans-1)%mod;
                                ans=a[R]%2?(ans+b[R]+1)%mod:(ans+b[R])%mod;
                            }else{
                                ans=(ans+b[R]+1)%mod;
                            }
                        }
                    }else{
                        if(a[index-1]%2){
                            ans=a[n]%2?b[n]%mod:(b[n]+1)%mod;
                            ans=(ans+1)%mod;
                        }else{
                            ans=a[n]%2?b[n]%mod:(b[n]+1)%mod;
                            ans=(ans-1)%mod;
                        }
                    }
                }
            }
            cout<<ans%mod<<"\n";
        }
    }
}
