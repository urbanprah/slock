slock
=====
My build of suckless' [slock](https://tools.suckless.org/slock/), the simple screen locker utility for X.

Changes
-------
* ability to set a background image (in early development)

Using slock
-------------
Simply invoke the ```slock``` command. To get out of it, enter your password.

I use it with xss-lock:
```bash
# ~/.initrc:
xss-lock -n /usr/lib/xsecurelock/dimmer -l -- /usr/local/bin/slock &
```

---

#### TODO
* [ ] Image effects
* [ ] Image changes on keypresses
* [ ] Proper image scaling for multihead
* [ ] Per monitor configuration
* [ ] CapsLock indicator

```c
/* TODO: CapsLock indicator */
if(!XkbGetIndicatorState(dpy, XkbUseCoreKbd, &indicators))
        caps = indicators & 1;
```

