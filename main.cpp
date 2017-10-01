#include<iostream>
using namespace std;
int main() {
    string pol;
    int result=1;
    getline(cin,pol);
    
    for(int i=0;i<pol.length()/2;i++){
       
     if(!((96<(int)pol[i])&&((int)pol[i]<123)))
       {
         if(!((47<(int)pol[i])&&((int)pol[i]<58)))
       {
        if(!((64<(int)pol[i])&&((int)pol[i]<91)))
       {pol.erase(i,1);i--;continue;}}}
     if(!((96<(int)pol[pol.length()-i-1])&&((int)pol[pol.length()-i-1]<123)))
       {
  
     if(!((47<(int)pol[pol.length()-i-1])&&((int)pol[pol.length()-i-1]<58)))
       {
     
     if(!((64<(int)pol[pol.length()-i-1])&&((int)pol[pol.length()-i-1]<91)))
       {pol.erase(pol.length()-i-1,1);i--;continue;}}}
      
       if((int)pol[i]>64){
        if (((int)pol[i]!=(int)pol[pol.length()-i-1])&&((int)pol[i]!=(int)pol[pol.length()-i-1]-32)&&((int)pol[i]!=(int)pol[pol.length()-i-1]+32)){
           result=0;
           
            
        }}
        else if (pol[i]!=pol[pol.length()-i-1]){
        	result=0;
        }
          
    }
    cout<< result;
    return 0;
}
