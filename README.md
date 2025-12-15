# wcwidth9

Platform independent, header only, wcwidth with full unicode 9 support, by [Joshua Rubin](https://github.com/joshuarubin).

This code is primarily derived from the [neovim](https://github.com/neovim/neovim) project. The tables were produced from parsing the official unicode files [EastAsianWidth.txt](http://www.unicode.org/Public/9.0.0/ucd/EastAsianWidth.txt) and [emoji-data.txt](http://unicode.org/Public/emoji/3.0/emoji-data.txt) using [genunicodetables.lua](https://github.com/neovim/neovim/blob/master/scripts/genunicodetables.lua).

Simply include `wcwidth9.h` in your project and use the `wcwidth9` function.
It works just like `wcwidth`.

```c
int wcwidth9(int c);
```

The input value `c` is expected to be a unicode code point value. The widths returned are according to unicode version 9.0.0.

Return values:

* `1` or `2`: the width of the character
* `-1`: non-printable, combining or unassigned character
* `-2`: ambiguous width character
* `-3`: private-use character

Ambiguous width characters should almost always be considered width `1` except in the context of some East Asian languages as described [here](http://unicode.org/reports/tr11/).

As private-use characters may not necessarily need to vary depending on East Asian context, but are still considered ambiguous, a separate return value is provided to distinguish them.


## Installation

Run:
```bash
$ npm i wcwidth9.c
```

And then include `wcwidth9.h` as follows:
```c
#include "node_modules/wcwidth9.c/wcwidth9.h"
```

<br>
<br>


[![ORG](https://img.shields.io/badge/org-nodef-green?logo=Org)](https://nodef.github.io)
![](https://ga-beacon.deno.dev/G-RC63DPBH3P:SH3Eq-NoQ9mwgYeHWxu7cw/github.com/nodef/wcwidth9.c)
[![SRC](https://img.shields.io/badge/src-repo-green?logo=Org)](https://github.com/joshuarubin/wcwidth9)
