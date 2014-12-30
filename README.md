# mstring

This project is being developed for learning purpose. I develop this for the experimentation of c string manipulations. If you want to use this code, use it on your own risk.

# Usage

### Code example

**Create a string**
```
#include "mstring.h"

//....

t_mstring *s = mstring_create();
``` 

**Add initial value to string**

```
mstring_assign(s, "This is a fake message. ");
// or
mstring_add(s, "This is a fake message. ");

```

**Concatnating string**

```
mstring_add(s, "This part will be joined. ");

```

**Free memory after usage**

```
mstring_delete(s);

```
