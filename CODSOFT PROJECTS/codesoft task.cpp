#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
struct task {
	string data;
	bool  completed;
};
class List{
	private :
	    vector<task> Task;
	public:
		void add(const  string & data)
		{
		Task . push_back({data,false});
		}
		void viewtask()
		{
		if(Task.empty())
		{
		cout<<"     NO TASK IS IN THE LIST!   "<<endl;	
		}
	else {
		cout<<setw(5)<< " Index "<<setw(30) <<" Task "<<setw(20) <<" Status "<<endl;
	for(size_t i=0; i<Task.size(); ++i){
		cout<<setw(5)<<i+1<<setw(30)<<Task[i].data<<setw(20) <<(Task[i]. completed
		 ? "  completed " : " Pending")<<endl;	} 
	}
 }
	void markCompleted(size_t taskIndex){
	if (taskIndex > 0 && taskIndex <= Task.size())
	{ 
	  Task[taskIndex-1].completed = true;
		cout<<" Task "<<taskIndex <<" markes as completed. "<<endl;
}
else {
	cout<<" Invalid Input!!!"<<endl;
}		
}
void removeTask(size_t taskIndex)
{
	if (taskIndex > 0 && taskIndex <= Task.size())  {
        cout<<" Task "<<taskIndex<<" has been removed ."<<Task[taskIndex -1]. data <<endl;
		Task.erase(Task.begin() + taskIndex -1);
		}		else {
			cout<<"Invalid Input"<<endl;
		}
		}
};
int main(){
	List todomanager;
	while(true)
	{
		cout<<endl;
		cout<<"1. Add Task "<<endl;
		cout<<"2. View Task "<<endl;
		cout<<"3. Mark Task as completed "<<endl;
		cout<<"4. Remove Task "<<endl;
		cout<<"5. Exit "<<endl;
		cout<<endl;
		cout<<" Enter your choice : "<<endl;
		int choice;
		cin>>choice;
		switch (choice){
		case 1:
			{
				string Taskdata;
				cout<<" Enter your data "<<endl;
				cin.ignore();
				getline(cin, Taskdata);
				todomanager.add(Taskdata);
	break;
}
	case 2:
	todomanager.viewtask();
	break;
	case 3:
	{
		todomanager.viewtask();
        size_t taskIndex;
        cout<<" Enter the task number to mark as completed :"<<endl;
		cin>>taskIndex;
		todomanager.markCompleted(taskIndex);		
}
     break;		
     case 4:
     {
     	todomanager.viewtask();
        size_t taskIndex;
        cout<<" Enter the task number to be removed :"<<endl;
		cin>>taskIndex;
		todomanager.removeTask(taskIndex);
		 }	
	case 5:
		return 0;
		default: 
		cout<<"INVALID CHOICE , PLEASE CHOOSE NUMBER BETWEEN 1 TO 5 "<<endl;
   }
	}
	return 0;
} 
