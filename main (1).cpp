#include"iostream"
#include"stdio.h"
#include"stdlib.h"
#include"cstring"
using namespace std;
class Elem
{
private:
	char date;
public:
	Elem(char a=0)
	{
	date=a;
	}
	char Date()
	{
	return date;
	}
	void ChangDate(char a)
	{
	date=a;
	}
	bool operator==(const Elem &a)const
	{
		if(a.date==date)
		{
		return true;
		}
		return false;
	}
	bool operator!=(const Elem &a)const
	{
		if(a.date!=date)
		{
		return true;
		}
		return false;
	}
	bool operator<(const Elem &a)const
	{
		if(a.date>date)
		{
		return true;
		}
		return false;
	}
	/*double  operator%(const Elem &a)const
	{
		return date%a.date;
	}
	*/
	void Show()
	{
	cout<<date<<" ";
	}
	 
	
};
class Stack
{
private:
	Elem *base;
	Elem *top;
	int stacksize;
public:
  Stack()
  {
  base=new Elem[100];
  if(!base)
   {
	   cout<<"error"<<endl;
		  return;
  
  }
  top=base;
  stacksize=10;
  return ;
  }
void Gettop(Elem &a)
{
if(top==base)
{
	cout<<"error"<<endl;
	return ;
}
a=*(top-1);
return;
}
void Push(Elem e)
{
if(top-base>=stacksize)
{
	Elem *a=new Elem[stacksize+10];
	memcpy(a,base,stacksize);
	base=a;
	 if(!base)
   {
	   cout<<"error"<<endl;
		  return;
  
  }
	 top=base+stacksize;
	 stacksize +=10;

}
*top++=e;
return;
}
void Pop (Elem &e)
{
if(top==base)
{
	cout<<"error"<<endl;
	return ;
}
e=*--top;
return;
}
bool Check()
{
	if(top==base)
{
	
	return false;
}
	return true;
}
};
int main()
{
Stack a,b,d;
Elem c,f;
while(1)
{
	c.ChangDate(getchar());
	if(c.Date()=='\n')
	{
	break;
	}
	
	a.Push(c);
	b.Push(c);

}
while(a.Check())
{
	a.Pop(c);
	d.Push(c);

}
while(b.Check())
{
	b.Pop(c);
	d.Pop(f);
	if(c!=f)
	{
	cout<<"0"<<endl;
	
	return 0;
	}
}
cout<<"1"<<endl;
	
	return 0;
	}


