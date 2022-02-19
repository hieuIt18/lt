git remote add origin https://github.com/hieuIt18/lt.git
 git branch -M main 
git push -u origin main
#include<iostream.h>

using namespace std;
class hcn 
{
	private:
	float d, r;
	public:
	void nhap();
	void in();
	float chuvi()
	{
		return 2*(d+r);
	}
	float dientich()
	{
		return d*r;
	}
};
void hcn::nhap()
{
	cout<<"Nhap chieu dai hcn : "; cin>>d;
	cout<<"Nhap chieu rong hcn : "; cin>>r;
}
void hcn::in()
{
	cout<<"("<<d<<","<<r<<")";
}
int main()
{
	hcn h;
	cout<<"....Chuong trinh nhap kich thuoc hinh chu nhat vaf in chu vi , dien tich ..."<<endl;
	cout<<"Nhap kich thuoc hcn : "<<endl;
	h.nhap();
	cout<<"co chu vi la: "<<h.chuvi()<<"\n Va dien tich la: "<<h.dientich();
	cout<<endl;
	return 0;
	system("colar 4A");
	system("pause");
}
