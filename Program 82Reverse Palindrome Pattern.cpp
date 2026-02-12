 #include<iostream>
using namespace std;
int pattern(int row){
    
for(int i = row;i!=0;i--){
    for(int j =1;j<=i;j++){
        cout<<j;
    }
    
        for(int j = (i-1);j!=0;j--){
        cout<<j;
    }
 
    cout<<endl;
}


    return 0;
}
int main(){
    int row;

    cout<<"Enter the number of rows: ";
    cin>>row;
 
    pattern(row);

    return 0;
}