int argmin(int a[], int n){
min=0;
for(int i=0; i<n; i++)
   if(a[i]>min) a[i]=min;
return i;

