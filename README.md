# A Universal `UNUSED` Macro

When a simple `(void)variable;` isn't portable enough, this library is.
(And if it isn't, open an issue or pull request!)


## Usage

The macro `UNUSED` takes one variable, and will expand to whatever
expression your compiler needs to not give you an "unused variable"
warning for just that variable.

```c
#include "unused.h"

int foo(float bar, struct { char whatever; } qux)
{
    UNUSED(qux);
    return 42;
    /* CAN warn that `bar` is unused. */
    /* Should NOT warn that `qux` is unused. */
}
```


## Why?

This is useful when for example you have a function which needs to
match a specific function pointer expected by code which you don't
control, and you don't need all of the arguments that it receives.

Unused variable warnings are generally useful, but we must be able
to disable them on a case-by-case basis so they don't become noise.

For mainstream compilers, `(void)variable` is enough, but for some
compilers you need to do `variable=variable` or other foolery. We
shouldn't have to worry about that when writing our code, and we
should gather all that edge-case knowledge into one library.


## C Name Collisions

Besides `UNUSED`, the `unused.h` header only defines identifiers that
start with `UNUSED_`.

`unused.h` does not include any other headers.
