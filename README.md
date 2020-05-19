slock
=====
My build of suckless' [slock](https://tools.suckless.org/slock/), the simple screen locker utility for X.

Changes
-------
* ability to set a background image (in early development)
* dynamic display state detection via DPMS. This enables waking the display with the keyboard input being treated as password input
* Improved dpms patch that allows specific system setting overrides ```{ standby, suspend, off } ```

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
* [ ] Proper image scaling for multihead
* [ ] Per monitor configuration
* [ ] Disable input (keep screen) option
* [ ] CapsLock indicator
* [ ] No text on waking from suspend

```c
/* TODO: CapsLock indicator */
if(!XkbGetIndicatorState(dpy, XkbUseCoreKbd, &indicators))
        caps = indicators & 1;
```
