#include<bits/stdc++.h>
#define ft first 
#define se second 
#define PB push_back
#define MP make_pair
#define nline "\n"
#define ll long long
/*Be patient && calm!
Do not pray for an easy life,
pray for the strength to endure a difficult one.
No matter how hard it gets, NEVER GIVE UP*/
//created by "Dhruv_Aditya"
//大学技术学院
using namespace std;
void insane_fighter(){
       int n; 
       cin>>n;
       vector<int>a(n);
       vector<int>v;
       for(int i=0; i<n; i++){
        cin>>a[i];
       }
       int k;
       cin>>k;
       vector<int>b(k);
       set<int>s;
       for(int i=0; i<k; i++)
       {
         cin>>b[i];
         s.insert(b[i]);
       }
       for(int i=0; i<n; i++){
        if(s.find(a[i])==s.end()){
            v.push_back((a[i]));
        }
       }
       for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
       }  
       cout<<endl;

}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // insane_fighter();
    int t; cin>>t;
    while(t--){
        insane_fighter();
    }
}
