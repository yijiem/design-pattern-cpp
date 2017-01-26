# singleton

## overview

Singleton pattern ensures that there at most exists only one instance for a
class anytime for a process.

## caveat

Implement optimized thread-safe singleton is difficult, even using double
check locking. If locking the whole initialization call does not introduce
bottleneck, it would be fine to just lock it. Or you can rely on static
initialization of global variable which is guaranteed to be run before the
main() method.