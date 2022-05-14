/*
 * Piotr Pakulski Zad. 5
 * Credit for https://github.com/ArashPartow/bitmap
 */

#include <vector>
#include "bitmap_image.hpp"

int main()
{
    bitmap_image image("test.bmp");

    if (!image)
    {
        printf("Error - Failed to open: test.bmp\n");
        return 1;
    }

    /**
     * Clean an easy negative image.
     */
    image.invert_color_planes();
    image.save_image("test_negative.bmp");

    /*
     * Reading the basic bmp headers.
     */
    printf("test.bmp header reader: \n");
    printf("Image width: %d\n",image.width());
    printf("Image height: %d\n",image.height());
    printf("Image bytes per pixel: %d\n",image.bytes_per_pixel());

    return 0;
}