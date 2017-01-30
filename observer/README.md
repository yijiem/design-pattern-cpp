# observer pattern

## overview

Observer pattern achieves pub/sub functionality. It loosely couples
publisher(subject) and subscriber(object). Publisher can inform subscriber
whenever an event happens without knowing the details of the subscriber.

This pattern is often used in Model-View-Controller architecture where
Model wants to inform a change on itself to a set of subscribed Views without
knowing the details of Views.

This pattern also prevents circular dependency between pub and sub.