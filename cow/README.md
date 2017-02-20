# copy on write(cow)

## overview

If a class is copy on write, the instances of this class will share the same
underling object(the object we want to apply cow) as much as possible.
Only if an instance wants to modify the underling object will it get a
separate copy of the underling object.

The example shows a copy on write string class which is a wrapper around
std string.