# cstring

This project is being developed for learning purpose. I develop this for the experimentation of c string manipulations. If you want to use this code, use it on your own risk.

# Usage

### Code example

**Create a string**
```
#include "cstring.h"

//....

t_cstring *s = cstring_create();
``` 

**Add initial value to string**

```
cstring_assign(s, "This is a fake message. ");
// or
cstring_add(s, "This is a fake message. ");

```

**Concatnating string**

```
cstring_add(s, "This part will be joined. ");

```

**Free memory after usage**

```
cstring_delete(s);

```
