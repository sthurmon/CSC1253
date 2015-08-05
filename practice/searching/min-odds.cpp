int min_odds(int x[], int n){
int min=a[0];
for(int i=0; i<n; i++){
   if(a[i]%2==1)
   if(a[i]<min) a[i]=min;
   else return 0;    
   }
return min;
}
	
