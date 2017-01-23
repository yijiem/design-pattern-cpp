# pimpl idiom

## overview

Pimpl hides private methods and private members from the header file so that
the API users cannot see them. This approach hides the implementation details
that the API users do not need to know and keeps a clean header file.

## caveat

The class that is pimpled need to disable or provide its own copy constructor
and assignment operator. It can also use smart pointer to manage impl object.
If not, the impl object will be shallow copied and lead to unexpected result
and double free crash.

## advantage of pimpl

1. hide information from API user.

2. remove dependency and make compile faster, public API does not need to
include header files that is needed by the private methods or private members.

3. object file of API user will have fixed size and does not need to be
recompiled when private methods or private members of the pimpled class changed.