int find(int a[], int k, int n){
for(int i=0; i<n; i++)
   if(a[i]==k) return i;
return -1;
}
