#pragma once

template <typename M>

M max2(M a, M b) {
	return (a > b) ? a : b;
}

template <typename M>
M max3(M a, M b, M c) {
	return max2(max2(a, b), c);
}

template <typename W>
class Walec
{
public:
	Walec(W r, W h);

	template <typename P>
	P polePomierzchni();

	W promien;
	W wysokosc;

};

template<typename W>
inline Walec<W>::Walec(W r, W h)
{
	promien = r;
	wysokosc = h;
}

template<typename W>
template<typename P>
P Walec<W>::polePomierzchni()
{
	P pi = static_cast<P>(3.14159265359);

	P r = static_cast<P>(promien);
	P h = static_cast<P>(wysokosc);

	return 2 * pi * r * r + 2 * pi * h;
}

