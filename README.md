# eclipse-embed-cdt-gtest-template
Template for MCU Eclipse projects with unit-test support like STM32 and so

### Setup
1. Create Empty C++ managed project with Cross-GCC
2. Copy all from this repo to created project (Refresh project if necessary)
3. Setup [Test build configuration](test/README.md)
4. Setup [App build configuration](app/README.md)

### Usage
* Put hardware-independant stuff in `app/components`
* Put hardware specific stuff in `app/bsp`
* Put project common stuff like configs and global headers in `app/include` and `app/src`
* Put libs (CMSIS, HAL, FreeRTOS, etc) in `app/libs`
* Put tests in `test/`
