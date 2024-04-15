 #include <iostream>
using namespace std;
#define rows 3
#define cols 3
class demo{
  private:
  int A[rows][cols];
    public:
  void get_data(){
      for (int i=0;i<rows;i++)
		{
		for(int j=0;j<cols;j++)
		{
			cin>>A[i][j];
		}
		}
}
void show_data(){
    for (int i=0;i<rows;i++)
	{
  		for(int j=0;j<cols;j++)
		{
    		cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	} 
}
demo operator *(demo obj){
    demo temp;
    for (int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            temp.A[i][j]=A[i][j]*obj.A[i][j];
        }
        
    } 
    return temp;
}
};
int main(){
    demo d1,d2,d3;
    cout<<"Enter data for first matrix.."<<endl;
    d1.get_data();
     cout<<"Enter data for second matrix.."<<endl;
    d2.get_data();
    cout<<"First matrix.."<<endl;
    d1.show_data();
    cout<<"second matrix.."<<endl;
    d2.show_data();
    d3=d1*d2;
    cout<<"third matrix.."<<endl;
    d3.show_data();
    
}
