#pragma once

class Test {
private:
	int val;

public:
	Test(int v);

	Test(Test &kopia);

	friend void pokaz(Test &t);
};