#include "Number.h"
#include "RealLog.h"
#include "RealStep.h"
#include <iostream>

using namespace std;
int main()
{
	Number k;
	cin >> k;
	cout << k;
	k.Sum();
	k.Div_x1_x2();
	k.Div_x2_x1();
	cout << "nastupni dii vykonuuitsia dlia znachen: x1=2, x2=4 " << endl;
	RealStep l;
	cin >> l;
	cout << l;
	l.Step1();
	l.Step2();
	RealLog h;
	h.Log1();
	h.Log2();
}