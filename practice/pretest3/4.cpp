void bubble(int a[], int n){
for(int i=0; i<n-1; i++)
for(int j=0; j<n-1; j++)
   if(a[i]>a[i+1]) swap(a[i],a[i+1]);
}
