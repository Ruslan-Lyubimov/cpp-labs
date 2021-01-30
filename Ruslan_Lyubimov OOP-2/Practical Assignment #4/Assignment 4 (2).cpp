/*
Practical  Assignment # 4;
Name:Lyubimov Ruslan;
ID:U1910163;
Group # 005;
*/
#include <iostream>
using namespace std;
class Dollar {
private:
	float currency;
	float mktrate;
	float offrate;
public:
	void getDollar() {
		cout << "Input the value of dollar: ";
		cin >> currency;
	}

	friend void operator <<(ostream& out, Dollar& i);

	void getMarketSoums() {
		cout << "In market 9500:";
		currency *= 9500;
		cout << currency << endl;
	}
	void getOff() {
		cout << "In bank 9570 sums: ";
		currency = currency * 9570 / 9500;
		cout << currency << endl;
	}
};
void operator <<(ostream& out, Dollar& i)
{
	out << "Dollar: " << i.currency << endl;
};
int main() {

	Dollar obj;
	obj.getDollar();
	cout << obj;
	obj.getMarketSoums();
	obj.getOff();
	return 0;
}