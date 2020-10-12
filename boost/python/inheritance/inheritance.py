#!/usr/bin/env python

import inheritance

b = inheritance.Basedd()
d = inheritance.Derived()

inheritance.fbs(b)
inheritance.fbs(d)

# not possible, fd is only for Derived objects
# inheritance.fd(b)
inheritance.fd(d)

x = inheritance.factory()
inheritance.fbs(x)
