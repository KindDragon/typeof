// Copyright (C) 2004 Arkadiy Vertleyb
// Use, modification and distribution is subject to the Boost Software
// License, Version 1.0. (http://www.boost.org/LICENSE_1_0.txt)

#include <boost/typeof/config.hpp>
#if !defined(_MSC_VER) || _MSC_VER > 0x0700

#include <iostream>
#include "odr.hpp"

using namespace std;

void odr_test2()
{
    char i = 5;
    double d = 3.14;
    cout << sum(d, i) << endl; 
    cout << sum(i, d) << endl; 
    cout << make_sum(d, i)() << endl; 
    cout << make_sum(i, d)() << endl; 
}

#endif //BOOST_TYPEOF_VINTAGE
