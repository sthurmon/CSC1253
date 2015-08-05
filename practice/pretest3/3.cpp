int argmin(int a[], int n[]){
int min=a[0];
for(int i=0; i<n; i++)
   if(a[i]<a[0]) a[i]=min;
return i;
}
