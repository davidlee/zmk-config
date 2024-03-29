# ZMK config

This is my personal keyboard firmware for Glove80, Planck and Preonic ergo keyboards.

For what it's worth, the result of a lot of thought and many refinements, although still evolving. If you're comfortable working with code, you could do worse than picking up one of the boards above and starting with this firmware & the layout choices reflected here.

## Notable properties

general:
- support for multiple keymaps with well-behaved home row mods
  - COLEMAK-DH default layer
  - Gallium (even nicer than colemak, but still learning)
  - TODO: QWERTY / windows gaming
- spacebar on left thumb; shift/backspace on right thumb. This is the way.
- convenient home row arrow keys on a layer 
- usable mouse emulation
- geared towards MacOS (mod layout, media controls, navigation shortcuts, etc)
  - I use Karabiner for Fn key emulation, Siri / dictation shortcuts, etc
  - I use global shortcuts for e.g. application switching with the "Meh" key, using Raycast
- plenty of combos for e.g. delete, caps word, backspace word, and symbols like parens and em dash
- a limited number of fairly cohesive layers
  - a combined number pad & nice symbol layer, which works well for most programming   
  - navigation
  - mouse emulation
  - glove80: system, with useful amenities for Glove80 like status indicators & rgb controls, borrowed from the official firmware

code:
- uses urob's fork with the Glove80 custom repo's changeset applied on top
 - see [davidlee/zmk](https://github.com/davidlee/zmk)
- uses zmk-nodefree for brevity, and more intelligibly / semantically defined combos
- DRY keymap definitions for consistency across boards

caveats:
- I build using a local toolchain, which is a bit of a rigmarole to set up, but allows faster iteration. Github actions may or may not work out of the box.
- ZMK feels a lot more concise, and especially combos and home row mods are much less fiddly to dial in. However, the error messages are almost useless. 

Supersedes my [qmk userspace](http://github.com/davidlee/qmk_userspace/) except as required for my Boardsource Lulu, which isn't supported by ZMK yet.
