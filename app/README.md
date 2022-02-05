### Setup for Eclipse Embedded CDT

* Add `app/bsp` `app/include` `app/components` to **Includes** in Paths and Symbols

* Add `app/bsp` `app/components` `app/libs` `app/src` to **Sources** in Paths and Symbols

* Add libs (CMSIS, HAL, etc) to `app/libs` and append **Includes** if necessary

* Add your drivers sources to `app/bsp`

* Add app components you need to test  to `app/components`

* Put all other unspecified to `app/src` and `app/include`