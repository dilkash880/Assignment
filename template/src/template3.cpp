#include <template.h>

class Myclass
{
	public:
		Myclass(){}
		//TBD1: Complete the constructor
		Myclass(int x, string name) 
		{
			val=x;
			name=name;
		}
		
		//TBD4b: Complete destructor
		~Myclass()
		{
			
		}
																	
		void Disp()
		{
		cout << "\n " << val << ',' << name << endl;
		}
		int getval()
		{
			return val;
		}
		string getname()
		{
			return name;
		}
	private:
		int val;
		string name;
																   
};

template <class T>
T myadd(T *objarr, int num)
{
	Myclass totobj;
	// TBD3 :Add all objects val and concatenate all names and finally create 
	// an object with value and return
	totobj=objarr1+objarr2+objarr3+objar4;

	return totobj;
}
int main()
{
int arr[]={10,20,30,40};
string names[]={"user1", "user2", "user3", "user4"};
																
Myclass *objarr = NULL;
											
//TBD2: create each object allocating memory dynamically (handle exception),
Myclass *objarr1=new Myclass[4];
objarr1->val=10;
objarr1->name="user1";

objarr2->val=20;
objarr2->name="user2";

objarr3->val=30;
objarr3->name="user3";

objarr4->val=40;
objarr4->name="user4";

myadd(T *objarr, int num);
// initialize each one using arr and names array content,
//say object1 initialized with val=10, name=user1 and so on,
// then call a template function myadd to add all object contents and return a 
// object which has val = total sum of val of all objects and name =concatenated name of all
// objects
Myclass objtot = myadd(objarr, 4);
objtot.Disp(); // should display expected output 
																													
//TBD4b:Delete the allocated memory
delete[] objarr;
}