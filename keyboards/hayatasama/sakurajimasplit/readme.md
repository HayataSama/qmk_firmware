# SakurajimaSplit

![hayatasama/sakurajimasplit](https://raw.githubusercontent.com/HayataSama/SakurajimaSplit/refs/heads/master/pics/built1.jpg)

[SakurajimaSplit](https://github.com/HayataSama/SakurajimaSplit) is a 6x3 column stagger split mechanical keyboard. It's inspired by [Corne](https://github.com/foostan/crkbd), [Kyria](https://github.com/splitkb/kyria) and [Elephant42](https://github.com/illness072/elephant42).

* **Keyboard Maintainer:** [HayataSama](https://github.com/HayataSama)
* **Hardware Supported:** SakurajimaSplit is based on **STM32G0B1CBT6**
* **Hardware Availability:** SakurajimaSplit was not built for production and is not available to purchase. It's however fully opensource and you can build it yourself!

Make example for this keyboard (after setting up your build environment):

    make hayatasama/sakurajimasplit/left:default
    make hayatasama/sakurajimasplit/right:default

Flashing example for this keyboard:

    make hayatasama/sakurajimasplit/left:default:flash
    make hayatasama/sakurajimasplit/right:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

To enter the bootloader of the left half simply press and hold the BOOT0 push button on the keyboard and then plug it in. The right half however cannot be directly connected to a PC, therefore to flash a new firmware you have to either use the SWD interface with an stlink (or any other compatible debugger) or use the UART pins of the USB-C connector that connectes both halves together. The former is the recomended method.

## OLED Display

The OLED display module on this keyboard is 128*33 pixels and uses an SSD1305 driver.
To display your desired image please take these steps:

1. Resize your image so it's 128 (Width) * 33 (Height). Your image should be landscape.
2. Go to [image2cpp](https://javl.github.io/image2cpp/), import your image and set `Canvas size(s)` to `128*40` and `Canvas background color` to `Black`.
    * The preview image should now display your image correctly with a 7 pixel tall black bar underneath.
3. In the output section, set `Draw mode` to `Vertical - 1 bit per pixel` and `Code output format` to `Plain bytes`
4. Your image is now ready to be used in qmk! You can use the default logo as an example to update the firmware. Please refer to the [official docs](https://docs.qmk.fm/features/oled_driver) to get a better understanding.
